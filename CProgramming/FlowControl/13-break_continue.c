#include<stdio.h>

int main() {
    for(int i = 1; i <= 10; i++) {
        printf("I is %d\n",i);
        if(i == 5) {
            // immediately terminates the loop
            break;
        }
    }

    printf("==============\n");

    for(int i = 1; i <= 10; i++) {
        if(i % 2 == 0) {
            // will skip the current iteration
            continue;
        }
        float z = 18 / i;
        printf("I is %d\n",i);
        printf("Z is %f\n",z);
    }
}