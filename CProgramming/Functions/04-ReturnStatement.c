#include<stdio.h>

int add(int x, int y) {
    int z = x + y;
    return z;
}

int sub(int x, int y) {
    int z = x - y;
    return z;
}

int main() {
    int x = 10, y = 20;
    int addition = add(x,y);
    int subtraction = sub(x,y);
    printf("Addition is : %d\n",addition);
    printf("Subtraction is : %d",subtraction);
}