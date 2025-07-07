-- This is the XMake build configuration file for the FizzBuzz project.

set_project("fizzbuzz-cpp")
set_version("1.0.0")

add_rules("mode.debug", "mode.release")

-- 添加 gtest 包
add_requires("gtest")

-- 全局包含目录
add_includedirs("include")

-- FizzBuzz 库
target("fizzbuzz")
    set_kind("static")  
    add_files("src/fizzbuzz.cpp")
    add_headerfiles("include/fizzbuzz.h")  
    add_includedirs("include")             

-- 主程序目标
target("fizzbuzz_main")
    set_kind("binary")
    add_deps("fizzbuzz")
    add_files("src/main.cpp")
    add_includedirs("include")             -- 为这个目标添加包含目录

-- 测试目标
target("test_fizzbuzz")
    set_kind("binary")
    add_deps("fizzbuzz")
    add_files("tests/*.cpp")
    add_packages("gtest")
    add_includedirs("include")             -- 为这个目标添加包含目录
    set_default(false)

-- 定义测试任务
task("test")
    on_run(function ()
        os.exec("xmake build test_fizzbuzz")
        os.exec("xmake run test_fizzbuzz")
    end)
    set_menu {
        usage = "xmake test",
        description = "Build and run tests"
    }