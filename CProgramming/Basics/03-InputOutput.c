#include<stdio.h>

int main() {
    // int x = 12;
    // int y = 22;

    int x, y;
    printf("Enter first num : ");
    scanf("%d",&x);

    printf("Enter second num : ");
    scanf("%d",&y);
    
    int z1 = x + y;
    printf("Sum of %d and %d is %d\n",x,y,z1);

    int z2 = x - y;
    printf("Sub of %d and %d is %d\n",x,y,z2);

    float z3 = x / y;
    printf("Div of %d and %d is %f\n",x,y,z3);

    int z4 = x * y;
    printf("Mul of %d and %d is %d",x,y,z4);
}