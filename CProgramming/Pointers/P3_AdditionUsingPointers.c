#include<stdio.h>

void main() {
    int x = 5, y = 12;
    int *x1, *y1;
    x1 = &x;
    y1 = &y;
    int sum = *x1 + *y1;
    printf("Sum is : %d",sum);
}
