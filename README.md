# VANFramework

#   1、修改.podspec文件s.version版本号
#   2、Git提交
#   3、cd 到 VANFramework 文件夹目录
#   4、终端输入 git tag 's.version的版本号'  例： git tag '1.1.0'
#   5、终端输入 git push --tags
#   6、终端输入 pod lib lint --verbose
#   7、终端输入 pod trunk push VanFramework.podspec --verbose

#   打包注意事项
#   1、Enable Bitcode NO
#   2、文件Pods-VanFramework-Resources-Resources.bundle 删除Resources执行文件
#   3、文件Pods-VanFramework-Resources-Resources.bundle info.plist文件中 删除Executable file一项
