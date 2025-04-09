cmake_minimum_required(VERSION 3.30)
project(c C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(chapter-01)
include_directories(libs)
include_directories(working-with-pointers)

add_executable(c
        chapter-01/1.5.2--count-characters-in-input--version-1.c
        chapter-01/1.5.2--count-characters-in-input--version-2.c
        chapter-01/1.5.3--count-lines-in-input.c
        chapter-01/1.5.4--count-lines-words-and-characters-in-input.c
        chapter-01/1.6--arrays.c
        chapter-01/1.7--functions.c
        chapter-01/1.8--arguments--call-by-value.c
        chapter-01/1.9--character-arrays.c
        libs/colors.h
        working-with-files/open-a-file.c
        working-with-files/remove-a-file-or-folder.c
        working-with-files/rename-a-file-or-folder.c
        working-with-pointers/first-arrays-and-pointers-example.c
        working-with-pointers/first-pointer-example.c
        working-with-pointers/pass-by-reference.c
        working-with-pointers/pass-by-value.c
        working-with-pointers/pointer-precedence.c
        working-with-pointers/second-pointer-example.c
        working-with-pointers/swap-by-reference.c
        copy-input-to-output-using-getchar-and-putchar--version-1.c
        copy-input-to-output-using-getchar-and-putchar--version-2.c
        floating-point-conversion-specifier.c
        hello-world.c
        main-with-parameters.c
        multiple-print-statements.c
        print-fahrenheit-to-celsius-table--using-constants.c
        print-fahrenheit-to-celsius-table-using-floats.c
        print-fahrenheit-to-celsius-table-using-integers.c
        report-value-of-eof.c
        return-zero.c
        smallest-c-program.c)
