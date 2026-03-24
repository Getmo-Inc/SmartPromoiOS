Pod::Spec.new do |s|
  s.name                = 'SmartPromo'
  s.version             = '3.0.0'
  s.platform            = :ios
  s.license             = { :type => 'MIT', :file => 'LICENSE' }
  s.summary             = 'SmartPromo is a SDK to campaign marketing'
  s.homepage            = 'https://github.com/Getmo-Inc/SmartPromoiOS.git'
  s.author              = { 'Getmo' => 'developer@getmo.com' }
  s.source              = { :git => 'https://github.com/Getmo-Inc/SmartPromoiOS.git',
                            :tag => s.version.to_s }
 
  s.ios.deployment_target = '14.0'
  s.vendored_frameworks = ['SmartPromoCore.xcframework', 'output/SmartPromo.xcframework']
  s.preserve_paths = 'SmartPromoShared.xcframework'
  s.xcconfig = {
    'FRAMEWORK_SEARCH_PATHS' => '$(PODS_ROOT)/SmartPromo/SmartPromoShared.xcframework/ios-arm64_x86_64-simulator $(PODS_ROOT)/SmartPromo/SmartPromoShared.xcframework/ios-arm64'
  }
 
end
