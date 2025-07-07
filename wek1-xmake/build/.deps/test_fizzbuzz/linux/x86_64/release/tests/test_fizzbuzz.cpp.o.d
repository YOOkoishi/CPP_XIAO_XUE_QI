{
    depfiles = "test_fizzbuzz.o: tests/test_fizzbuzz.cpp tests/../include/fizzbuzz.h\
",
    files = {
        "tests/test_fizzbuzz.cpp"
    },
    depfiles_format = "gcc",
    values = {
        "/usr/bin/gcc",
        {
            "-m64",
            "-fvisibility=hidden",
            "-fvisibility-inlines-hidden",
            "-O3",
            "-Iinclude",
            "-DGTEST_HAS_PTHREAD=1",
            "-DNDEBUG"
        }
    }
}