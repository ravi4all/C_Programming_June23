#include<stdio.h>

int main() {
    int x = 40, y = 35, z = 20, w = 10;
    int r1 = x * y / z - w;
    int r2 = x * y / (z - w);
    printf("%d\n", r1);
    printf("%d\n", r2);
}