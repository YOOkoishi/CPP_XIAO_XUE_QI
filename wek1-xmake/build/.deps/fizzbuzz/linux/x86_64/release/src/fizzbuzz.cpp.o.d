{
    files = {
        "src/fizzbuzz.cpp"
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
            "-DNDEBUG"
        }
    },
    depfiles = "fizzbuzz.o: src/fizzbuzz.cpp include/fizzbuzz.h\
"
}