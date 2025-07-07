{
    files = {
        "build/.objs/test_fizzbuzz/linux/x86_64/release/tests/test_fizzbuzz.cpp.o",
        "build/linux/x86_64/release/libfizzbuzz.a"
    },
    values = {
        "/usr/bin/g++",
        {
            "-m64",
            "-Lbuild/linux/x86_64/release",
            "-s",
            "-lgtest",
            "-lfizzbuzz"
        }
    }
}