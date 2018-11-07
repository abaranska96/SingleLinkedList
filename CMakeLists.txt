cmake_minimum_required(VERSION 3.1)

project(Singlelinkedlist)

enable_testing()
add_compile_options("-Wall" "-Wextra" "-pedantic" "-Wcast-align"
"-Winit-self" "-Wmissing-include-dirs" "-Wredundant-decls" "-Wshadow" "-Wstrict-overflow=5" "-Wundef" "-Wwrite-strings" "-Wpointer-arith" "-Wmissing-declarations"
"-Wuninitialized" "-Wold-style-definition" "-Wstrict-prototypes"
"-Wmissing-prototypes" "-Wswitch-default" "-Wbad-function-cast"
"-Wnested-externs" "-Wconversion" "-Wunreachable-code")

add_library (Singlelinkedlist Singlelinkedlist.c)

add_executable (Singlelinkedlist_ut Tests.c)


add_test(NAME Tests  COMMAND ${CMAKE_COMMAND})

target_include_directories (Singlelinkedlist PUBLIC Singlelinkedlist.h ctest.h)
target_link_libraries(${PROJECT_NAME} ctest_lib)
target_link_libraries(${PROJECT_NAME} debug_print_lib)


