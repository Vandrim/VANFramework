Pod::Spec.new do |s|
  s.name         = "VanFramework"
  s.version      = "2.14.0"
  s.summary      = "A Framework of iOS development. It will help developer more efficient"
  s.homepage     = "https://github.com/Vandrim/VANFramework"
  s.license      = "MIT"
  s.author       = { "vandrim" => "vandrim@163.com"}
  s.platform     = :ios, "8.0"
  s.source       = { :git => "https://github.com/Vandrim/VANFramework.git", :tag => "#{s.version}" }
  s.frameworks   = "Foundation", "UIKit"
  s.resource   	 = "Resources.bundle"
  s.vendored_frameworks = "WWJFramework.framework"
  s.requires_arc = true
  s.dependency 'Masonry', '>= 1.1.0'
end
