set -e

# Build SmartPromoCore first
SMARTPROMO_ROOT="$(cd "$(dirname "$0")" && pwd)"
CORE_ROOT="$SMARTPROMO_ROOT/../ios-smartpromo-core"
cd "$CORE_ROOT" && bash build.sh
cd "$SMARTPROMO_ROOT"

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
