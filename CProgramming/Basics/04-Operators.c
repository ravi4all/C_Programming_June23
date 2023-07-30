#include<stdio.h>

int main() {
    int x = 120;
    x += 1;
    printf("x += 1 : %d\n",x);

    x -= 1;
    printf("x -= 1 : %d\n",x);

    x /= 10;
    printf("x /= 10 : %d\n",x);

    x *= 5;
    printf("x *= 5 : %d\n",x);

    // Post Inc/Dec
    printf("x++ : %d\n",x++);
    printf("Now X is : %d\n",x);
    printf("x-- : %d\n",x--);
    printf("Now X is : %d\n",x);

    // Pre Inc/Dec
    printf("++x : %d\n",++x);
    printf("Now X is : %d\n",x);
    printf("--x : %d\n",--x);
    printf("Now X is : %d\n",x);
}