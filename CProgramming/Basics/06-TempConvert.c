#include<stdio.h>

int main() {
    float cel, fah;
    printf("Enter temperature in celcius : ");
    scanf("%f",&cel);

    fah = (cel * 9/5) + 32;
    printf("Temperature is : %.2f",fah);
}