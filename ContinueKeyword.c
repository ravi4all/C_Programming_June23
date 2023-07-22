#include<stdio.h>

int main() {
    int data[] = {3,5,8,0,12};
    int num = 27;
    int temp;
    for(int i = 0; i < 5; i++) {
        if(data[i] == 0) {
            continue;
        }
        temp = num / data[i];
        printf("%d",temp);
    }
}