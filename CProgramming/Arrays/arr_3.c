#include<stdio.h>

int main() {
    int arr[10] = {2,1,34,56,7,3,13,6,12,18};
    int sum = 0;
    for(int i = 0; i < 10; i++) {
        if(arr[i] % 2 == 0) {
            printf("%d\n",arr[i]);
        }
    }   
}