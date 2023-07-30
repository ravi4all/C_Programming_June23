#include<stdio.h>

int main() {
    int x[5] = {4,2,6,7,2,16};
    int sum = 0;
    for(int i = 0; i < 6; i++) {
        // sum += x[i];
        sum += *(x+i);
    }
    printf("Sum is %d : ", sum);
}