#include<stdio.h>

int main() {
    
    printf("Press 1 for addition\n");
    printf("Press 2 for subtraction\n");
    printf("Press 3 for division\n");
    printf("Press 4 for multiplication\n");
    char operation;
    double n1, n2;
    printf("Enter your choice : ");
    scanf("%c",&operation);
    printf("Enter first num : ");
    scanf("%lf",&n1);
    printf("Enter second num : ");
    scanf("%lf",&n2);
    int result = 0;
    switch (operation)
    {
    case '1':
        result = n1 + n2;
        break;
    case '2':
        result = n1 - n2;
        break;
    case '3':
        result = n1 / n2;
        break;
    case '4':
        result = n1 * n2;
        break;    
    default:
        printf("You have entered wrong choice...");
        break;
    }
    printf("Result is : %d",result);
}