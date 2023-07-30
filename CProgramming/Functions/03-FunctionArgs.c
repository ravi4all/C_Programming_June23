#include<stdio.h>

// Function definition - where we write primary logic of function
// arguments/parameters
void greatest(int x, int y, char name[]) {
    printf("Welcome : %s\n",name);
    if(x > y) {
        printf("X is greater...\n");
    }
    else {
        printf("Y is greater...\n");
    }
}

int main() {
    greatest(10, 20, "Ram");
    greatest(18, 8, "Shyam");
    greatest(19, 55, "Ravi");
    greatest(100, 200, "Pooja");
}