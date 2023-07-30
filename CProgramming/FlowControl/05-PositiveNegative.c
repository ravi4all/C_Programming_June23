#include<stdio.h>

int main() {
    double n;
    printf("Enter a number : ");
    scanf("%lf",&n);

    // less than or equal to 0
    if(n <= 0.0) {
        // exactly equals to 0
        if(n == 0.0) {
            printf("You have entered Zero...");
        }
        else {
            printf("%lf is a negative number",n);
        }
        
    }
    else {
        printf("%lf is a positive number",n);
    }

}