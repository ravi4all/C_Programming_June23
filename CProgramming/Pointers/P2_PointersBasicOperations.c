#include<stdio.h>

void main() {
    int x = 5;
    int *x_address = &x;
    printf("X Value : %d\n",x);
    // printf("X Address : %d\n",*x_address);
    // x = 12;
    // printf("X Address : %d\n",*x_address);

    // x_address = 10;  // invalid, because we cannot store simple int inside pointer
    *x_address = 10;
    printf("X Value : %d\n",x);

}
