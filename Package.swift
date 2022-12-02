// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "SalientCore",
    platforms: [
        .iOS(.v14)
    ],
    products: [
        .library(
            name: "SalientCore",
            targets: ["SalientCore"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "SalientCore",
            path: "./SalientCore.xcframework"
        ),
    ]
)
