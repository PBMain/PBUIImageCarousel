Pod::Spec.new do |s|
  s.name             = 'PBUIImageCarousel'
  s.version          = '1.0.15.2'
  s.summary          = 'Pod used to show image carousel in Photo Butler apps.'
  
  s.description      = <<-DESC
  This pod contains all the necessary UI elements and logic behind the Photo Butler photo carousel.
  DESC
  
  s.homepage         = 'https://github.com/PBMain'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'danspencer@photobutler.com' => 'danspencer@photobutler.com' }
  s.source           = { :git => 'https://github.com/PBMain/PBUIImageCarousel.git', :tag => s.version.to_s }
  
  s.ios.deployment_target = '9.3'
  s.platform = :ios, '9.3'
  s.swift_version = '4.1'

  #s.source_files = 'PBUIImageCarousel/Classes/**/*'
  
  s.ios.vendored_frameworks = 'PBFrameworkUIImageCarousel.framework'
  
  s.libraries = 'c++', 'z'
  
  s.ios.frameworks = 'Foundation', 'CoreGraphics', 'AdSupport', 'UIKit', 'SystemConfiguration'
  
  s.dependency "FBSDKCoreKit"
  s.dependency "FBSDKShareKit"
  s.dependency "PBServices"
  s.dependency "PBAnalytics"
  s.dependency "PBUILibraries"
  s.dependency "AFNetworking"
  
end
