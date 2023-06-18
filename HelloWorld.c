// PreProcessor - these are some sort of programs that process our source code before compilation
// our program is processed by pre-processor and an expanded source code file is generated
// expanded file is compiled by compiler and an object is generated named as fileName.obj

// #include - pre-processor directive
// stdio.h - header file that contains definition of printf function
// stdio - standard input output - used to take input and print output
// # - it provides a path
// #include, #define, #ifndef...

// There are 4 types of pre-processor directives
// 1. Macros
// 2. File Inclusion
// 3. Conditional Compilation
// 4. Other directives

#include<stdio.h>

// main - it's a entry point of program
// main is a function
// function - reusable piece of code
// function is divided into parts
// 1. function definition
// 2. function call
void main() {
    // printf - it's a pre-defined function used to display output
    printf("Hello World...");
}

// How C Compiler Works ?
// C is a compiled language
// Compiler is a special tool which converts our source code into
// the object file which is machine readable code
// After the compilation success, the linked will combine different object files and create a one single executable file to run the program
