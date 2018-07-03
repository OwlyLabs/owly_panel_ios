#
# Be sure to run `pod lib lint OwlyPanel.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'OwlyPanel'
  s.version          = '0.1.11'
  s.summary          = 'Automatic session/events tracking'

  s.description      = 'Automatic session tracking depending on app background/foreground states, Automatic and custom events, Profile manager per app with both proprietary and custom fields '

  s.homepage         = 'https://github.com/OwlyLabs/owly_panel_ios'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'Owly Labs' => 'account@owlylabs.com' }
  s.source           = { :git => 'https://github.com/OwlyLabs/owly_panel_ios.git', :tag => s.version.to_s }

  s.ios.deployment_target = '8.0'
  
  #s.source_files = 'OwlyPanel/Classes/**/*'

  s.cocoapods_version = '>= 1.4.0'
  s.default_subspecs = 'Core'

  s.subspec 'Core' do |ss|
        ss.frameworks = 'SystemConfiguration'
        ss.ios.vendored_frameworks = 'OwlyPanel.framework'
        ss.preserve_paths = 'OwlyPanel.framework'
        ss.xcconfig = { 'FRAMEWORK_SEARCH_PATHS' => '$(inherited)', 'CLANG_ALLOW_NON_MODULAR_INCLUDES_IN_FRAMEWORK_MODULES' => 'YES' }
  end
end
