cmake_minimum_required(VERSION 3.1)

project(Singlelinkedlist)

add_compile_options("-Wall" "-Wextra" "-pedantic" "-Wcast-align"
"-Winit-self" "-Wmissing-include-dirs" "-Wredundant-decls" "-Wshadow" "-Wstrict-overflow=5" "-Wundef" "-Wwrite-strings" "-Wpointer-arith" "-Wmissing-declarations"
"-Wuninitialized" "-Wold-style-definition" "-Wstrict-prototypes"
"-Wmissing-prototypes" "-Wswitch-default" "-Wbad-function-cast"
"-Wnested-externs" "-Wconversion" "-Wunreachable-code")

add_library (Singlelinkedlist src/Singlelinkedlist.c)
target_include_directories (Singlelinkedlist PUBLIC src/Singlelinkedlist.h)

add_executable (Singlelinkedlist_ut src/main.c)




