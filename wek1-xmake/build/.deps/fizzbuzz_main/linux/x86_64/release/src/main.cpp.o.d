{
    files = {
        "src/main.cpp"
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
    depfiles = "main.o: src/main.cpp include/fizzbuzz.h\
"
}