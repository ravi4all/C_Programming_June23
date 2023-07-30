#include<stdio.h>

int main() {
    char operator;
    int n1, n2;
    printf("Choose an operator : +, -, /, * : ");
    scanf("%c",&operator);
    
    printf("Enter first number : ");
    scanf("%d",&n1);
    printf("Enter second number : ");
    scanf("%d",&n2);

    // scanf("%c",&operator);

    // if(operator == '+') {
    //     int result = n1 + n2;
    //     printf("Sum is %d",result);
    // }
    // else if(operator == '-') {
    //     int result = n1 - n2;
    //     printf("Sub is %d",result);
    // }
    int result;
    switch(operator) {
        case '+':
            result = n1 + n2;
            printf("Sum is %d\n",result);
            break;
        case '-':
            result = n1 - n2;
            printf("Sub is %d\n",result);
            break;
        case '/':
            result = n1 / n2;
            printf("Div is %d\n",result);
            break;
        case '*':
            result = n1 * n2;
            printf("Mul is %d\n",result);
            break;
        default:
            printf("Invalid Operator...");
    }

}