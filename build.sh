
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
