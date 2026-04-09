// swift-tools-version:5.7

import PackageDescription

let package = Package(
    name: "SmartPromo",
    platforms: [
        .iOS(.v14)
    ],
    products: [
        .library(
            name: "SmartPromo",
            targets: ["SmartPromo", "SmartPromoCore", "SmartPromoShared"]
        )
    ],
    targets: [
        .binaryTarget(
            name: "SmartPromo",
            path: "output/SmartPromo.xcframework"
        ),
        .binaryTarget(
            name: "SmartPromoCore",
            path: "SmartPromoCore.xcframework"
        ),
        .binaryTarget(
            name: "SmartPromoShared",
            path: "SmartPromoShared.xcframework"
        )
    ]
)
