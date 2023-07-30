#include<stdio.h>

// Global Variables
int x = 10, y = 20;
char name[] = "Ram";

// Function definition - where we write primary logic of function
void greatest() {
    // Local Variables - which can be accessed only inside {}
    // int x = 10, y = 20;
    printf("Welcome : %s\n",name);
    if(x > y) {
        printf("X is greater...\n");
    }
    else {
        printf("Y is greater...\n");
    }
}

int main() {
    // Local variables
    // int x, int y;
    // Function calling - it will call function definition
    greatest();

    printf("X is %d",x);
}