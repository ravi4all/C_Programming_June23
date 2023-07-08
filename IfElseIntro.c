#include<stdio.h>

int main() {
    int age;
    printf("Enter your age : ");
    scanf("%d",&age);
    if(age >= 18) {
        printf("You are allowed...");
    }
    else {
        printf("You are not allowed, because age is below 18...");
    }
}