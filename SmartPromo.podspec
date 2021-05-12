Pod::Spec.new do |s|
  s.name                = 'SmartPromo'
  s.version             = '0.0.1'
  s.platform            = :ios
  s.license             = { :type => 'MIT', :file => 'LICENSE' }
  s.summary             = 'SmartPromo is a SDK to campaign marketing'
  s.homepage            = 'https://github.com/Getmo-Inc/SmartPromoiOS.git'
  s.author              = { 'Getmo' => 'developer@getmo.com' }
  s.source              = { :git => 'https://github.com/Getmo-Inc/SmartPromoiOS.git',
                            :tag => s.version.to_s }
 
  s.ios.deployment_target = '10.0'

  s.vendored_frameworks = 'output/SmartPromo.xcframework'
 
end

# To send a new version follow the steps:
## Build the .xcframework: sh build.h
## Update the Cocoapods: sudo gem install cocoapods -n /usr/local/bin
## Validade the changes: pod lib lint SmartPromo.podspec
## If validade was success so push the update: pod trunk push SmartPromo.podspec
#Privacy - Camera Usage Description
