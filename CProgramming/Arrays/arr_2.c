#include<stdio.h>

int main() {
    int arr[5] = {4,2,14,67,3};
    int sum = 0;
    for(int i = 0; i < 5; i++) {
        // printf("%d \n",arr[i]);
        sum += arr[i];
    }
    printf("Sum is %d",sum);
    
}