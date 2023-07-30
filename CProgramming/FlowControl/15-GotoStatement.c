#include<stdio.h>

int main() {
    // const - constant - which cannot be modified;
    const int max = 100;
    for(int i = 2; i <= 15; i++) {
        int z = i * 10;
        if(z > 1000) {
            // goto - transfer control of the program to specified label
            goto jump;
        }
    }
    
    // goto will skip this
    printf("Loop is executed Successfully...");
    printf("This is goto statement demo...");

    jump:
        int x = max / 10;
        printf("X is %d",x);

}