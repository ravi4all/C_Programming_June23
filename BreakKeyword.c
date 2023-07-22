#include<stdio.h>

int main() {
    int num = 49;
    int prime = 1;
    for(int i = 2; i < num; i++) {
        if(num % 2 == 0) {
            // printf("Number is not prime...");
            prime = 0;
            break;
        }
    }
    if(prime == 0) {
        printf("Number is not prime...");
    }
    else {
        printf("Number is prime...");
    }

}