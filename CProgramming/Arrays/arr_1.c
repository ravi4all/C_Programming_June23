#include<stdio.h>

int main() {
    // int x[5];
    // int x[5] = {3,1,4,6,3};
    int x[] = {3,1,4,6,3};
    printf("%d\n", x[0]);
    x[0] = 12;
    printf("%d\n", x[0]);
}