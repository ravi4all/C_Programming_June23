#include<stdio.h>

int main() {
    int year;
    printf("Enter the year : ");
    scanf("%d",&year);

    // perfectly divisible by 400
    if(year % 400 == 0) {
        printf("%d is a leap year...",year);
    }
    else if(year % 100 == 0) {
        printf("%d is not leap year...",year);
    }
    else if(year % 4 == 0) {
        printf("%d is a leap year...",year);
    }
    else {
        printf("%d is not leap year...",year);
    }

}