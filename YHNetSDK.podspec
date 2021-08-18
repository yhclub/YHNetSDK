
Pod::Spec.new do |s|

  s.name         = "YHNetSDK"

  s.version      = "1.1.0"

  s.summary      = "YHNetSDK is only a net sdk"

  s.description  = "YHNetSDK is only a base net sdk, we need pod thirdparty: AFNetworking"

  s.homepage     = "https://github.com/XmYlzYhkj/YHNetSDK"

  s.license      = "MIT "

  s.author       = { "Jagtu" => "yhkj_xm@163.com" }

  s.pod_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
  
  s.user_target_xcconfig = {
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => '$(EXCLUDED_ARCHS__EFFECTIVE_PLATFORM_SUFFIX_$(EFFECTIVE_PLATFORM_SUFFIX)__NATIVE_ARCH_64_BIT_$(NATIVE_ARCH_64_BIT)__XCODE_$(XCODE_VERSION_MAJOR))',
    'EXCLUDED_ARCHS__EFFECTIVE_PLATFORM_SUFFIX_simulator__NATIVE_ARCH_64_BIT_x86_64__XCODE_1200' => 'arm64 arm64e armv7 armv7s armv6 armv8'
  }

  s.platform     = :ios, "9.0"

  s.source       = { :git => "https://github.com/XmYlzYhkj/YHNetSDK.git", :tag => s.version.to_s }


  #s.source_files  = "Classes", "Classes/*"

  s.requires_arc = true

  #s.dependency     "Reachability"

  s.dependency     "AFNetworking"

  s.vendored_frameworks = ["Framework/*.framework"]
  
  end