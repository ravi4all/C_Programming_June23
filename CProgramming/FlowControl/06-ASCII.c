#include<stdio.h>

int main() {
    // int c = 'a';
    // printf("%d",c);

    // char c = 'a';
    // printf("%c\n",c);
    // printf("%d",c);

    char c;
    printf("Enter a character : ");
    scanf("%c",&c);
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z' )) {
        printf("%c is an alphabet...",c);
    }
    else {
        printf("%c is not an alphabet...",c);
    }
}