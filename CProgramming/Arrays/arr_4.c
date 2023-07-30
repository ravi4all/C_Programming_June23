#include<stdio.h>

int main() {
    int arr[10] = {2,1,34,56,7,3,13,6,12,18};
    int max = arr[0];
    int min = arr[0];
    for(int i = 1; i < 10; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    for(int i = 1; i < 10; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }
}