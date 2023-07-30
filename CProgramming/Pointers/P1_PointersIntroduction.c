#include<stdio.h>

void main() {
    int x = 1;
    int y = 2;
    int z = 3;
    printf("Value of X is %d\n",x);
    printf("Address of X is %d\n",&x);

    // printf("Value of Y is %d\n",y);
    // printf("Address of Y is %d\n",&y);

    // printf("Value of Z is %d\n",z);
    // printf("Address of Z is %d\n",&z);

    int *x_address = &x;
    // int* x_address = &x;
    // int * x_address = &x;

    // int *x_address;
    // x_address = &x;
    // printf("Value of X_address is %d\n",*x_address);
    // printf("Address of X_address is %d\n",&x_address);

}