Pod::Spec.new do |s|
  s.name                = 'SmartPromo'
  s.version             = '2.6.4'
  s.platform            = :ios
  s.license             = { :type => 'MIT', :file => 'LICENSE' }
  s.summary             = 'SmartPromo is a SDK to campaign marketing'
  s.homepage            = 'https://github.com/Getmo-Inc/SmartPromoiOS.git'
  s.author              = { 'Getmo' => 'developer@getmo.com' }
  s.source              = { :git => 'https://github.com/Getmo-Inc/SmartPromoiOS.git',
                            :tag => s.version.to_s }
 
  s.ios.deployment_target = '11.0'
  s.vendored_frameworks = ['SmartPromoCore.xcframework', 'output/SmartPromo.xcframework']
 
end
