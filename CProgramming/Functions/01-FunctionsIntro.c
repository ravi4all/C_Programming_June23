#include<stdio.h>

// return_type function_name() {
//     Logic...
//     return
// }

// Function definition - where we write primary logic of function
void greatest() {
    int x = 10, y= 20;
    if(x > y) {
        printf("X is greater...");
    }
    else {
        printf("Y is greater...");
    }
}

int main() {
    // Function calling - it will call function definition
    greatest();
}