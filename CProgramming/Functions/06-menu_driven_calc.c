#include<stdio.h>

int add(int x, int y) {
    int z = x + y;
    return z;
}
int sub(int x, int y) {
    int z = x - y;
    return z;
}
int div(int x, int y) {
    int z = x / y;
    return z;
}
int mul(int x, int y) {
    int z = x * y;
    return z;
}

int main() {
    char operator;
    int n1, n2;
    int res;
    printf("Choose an operator : +, -, /, * : ");
    scanf("%c",&operator);
    
    printf("Enter first number : ");
    scanf("%d",&n1);
    printf("Enter second number : ");
    scanf("%d",&n2);

    if(operator == '+') {
        res = add(n1, n2);
    }
    else if(operator == '-') {
        res = sub(n1, n2);
    }
    else if(operator == '/') {
        res = div(n1, n2);
    }
    else if(operator == '*') {
        res = mul(n1, n2);
    }
    else {
        printf("Invalid Input...");
    }

    printf("Result is : %d",res);

}