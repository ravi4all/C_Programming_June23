#include<stdio.h>

int main() {
    int i = 10;
    do {
        printf("Do block executed...");
        printf("%d",i);
        i--;
    } while (i > 20); 
}