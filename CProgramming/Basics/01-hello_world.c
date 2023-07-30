// # - preprocessor directive
// pre-processor - are programs that process our source code before compilation
// # provides a path it will go to preprocessor and command like 'include' is processed by preprocessor program
// #include - before compiling we include a file
// stdio - standard input/output
// .h - extension of header files in C/C++

// There are 4 types of pre-processor directives
// 1. Macros
// 2. File Inclusion (#include...)
// 3. Conditional Compilation
// 4. Other Directives

#include<stdio.h>

// function_return_type function_name() {
//     Logic
// }

// Function defintion
int calc() {
    int z = 10 + 20;
    return z;
}

// void - when a function return nothing then it's return type is void
// By default main returns nothing, that's why we put void before main
// main - entry point of program
void main() {
    // Main Body
    printf("Hello...");
    
    // Function Calling
    int z = calc();
    printf(z);
}