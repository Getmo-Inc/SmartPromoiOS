set -e

# Build SmartPromoCore first
SMARTPROMO_ROOT="$(cd "$(dirname "$0")" && pwd)"
CORE_ROOT="$SMARTPROMO_ROOT/../ios-smartpromo-core"
cd "$CORE_ROOT" && bash build.sh
cd "$SMARTPROMO_ROOT"

# Extract version and build number from SmartPromoCore.h (source of truth)
# Format: //  3.0.0 (1)
VERSION_LINE=$(grep -m1 '//  [0-9]' "$CORE_ROOT/SmartPromoCore/SmartPromoCore.h")
VERSION=$(echo "$VERSION_LINE" | sed 's|//  \([0-9.]*\) .*|\1|')
BUILD=$(echo "$VERSION_LINE" | sed 's|.*(\([0-9]*\))|\1|')

echo "▶ Version: $VERSION ($BUILD)"

# Update SmartPromo.h comment
sed -i '' "s|//  [0-9][0-9]*\.[0-9][0-9]*\.[0-9][0-9]*.*|//  $VERSION ($BUILD)|" "$SMARTPROMO_ROOT/SmartPromo/SmartPromo.h"

# Update podspec
sed -i '' "/s\.version/s/'[^']*'/'$VERSION'/" "$SMARTPROMO_ROOT/SmartPromo.podspec"

# Update MARKETING_VERSION and CURRENT_PROJECT_VERSION in Xcode project
sed -i '' "s/MARKETING_VERSION = .*;/MARKETING_VERSION = $VERSION;/" "$SMARTPROMO_ROOT/SmartPromo.xcodeproj/project.pbxproj"
sed -i '' "s/CURRENT_PROJECT_VERSION = .*;/CURRENT_PROJECT_VERSION = $BUILD;/" "$SMARTPROMO_ROOT/SmartPromo.xcodeproj/project.pbxproj"

# Copy xcframeworks from core
rm -rf SmartPromoCore.xcframework
cp -R "$CORE_ROOT/output/SmartPromoCore.xcframework" SmartPromoCore.xcframework
rm -rf SmartPromoShared.xcframework
cp -R "$CORE_ROOT/SmartPromoShared.xcframework" SmartPromoShared.xcframework

# Clear output folder
rm -rf output
mkdir output

# Build to Simulator
xcodebuild archive \
-scheme SmartPromo \
-archivePath ./output/SmartPromo-iphonesimulator.xcarchive \
-sdk iphonesimulator \
SKIP_INSTALL=NO

# Build to Real device
xcodebuild archive \
-scheme SmartPromo \
-archivePath ./output/SmartPromo-iphoneos.xcarchive \
-sdk iphoneos \
SKIP_INSTALL=NO

# Merge them
xcodebuild -create-xcframework \
-framework ./output/SmartPromo-iphonesimulator.xcarchive/Products/Library/Frameworks/SmartPromo.framework \
-framework ./output/SmartPromo-iphoneos.xcarchive/Products/Library/Frameworks/SmartPromo.framework \
-output ./output/SmartPromo.xcframework

# Update samples
cd "$SMARTPROMO_ROOT/Example" && pod install
cd "$SMARTPROMO_ROOT/ExampleObjc" && pod install

afplay /System/Library/Sounds/Glass.aiff
