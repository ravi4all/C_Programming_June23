#include<stdio.h>

int main() {
    int x = 12, y = 20, z = 30;
    if(x > y && x > z) {
        printf("X is greatest...");
    }
    else if(y > x && y > z) {
        printf("Y is greatest...");
    }
    else {
        printf("Z is greatest...");
    }
}