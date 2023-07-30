#include<stdio.h>

int main() {
    int arr[10] = {2,1,34,56,7,3,13,6,12,18};
    int n = sizeof(arr) / sizeof(arr[0]);
    // for(int i = 0; i < n; i++) {
    //     printf("Element : %d\n",arr[i]);
    // }

    for(int i = n-1; i >= 0; i--) {
        printf("Element : %d\n",arr[i]);
    }
}