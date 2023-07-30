#include<stdio.h>

int main() {
    int l, b;
    printf("Enter length : ");
    scanf("%d",&l);

    printf("Enter breadth : ");
    scanf("%d",&b);

    int p = 2 * (l + b);
    printf("Perimeter is : %d",p);

}