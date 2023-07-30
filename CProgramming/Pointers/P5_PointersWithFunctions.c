#include<stdio.h>

void swap(int n1, int n2) {
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

void swapWithPointers(int *n1, int *n2) {
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main() {
    int num_1 = 5, num_2 = 10;
    // int temp;
    // temp = num_1;
    // num_1 = num_2;
    // num_2 = temp;
    // Pass by value
    // swap(num_1, num_2);

    // Pass by reference
    swapWithPointers(&num_1, &num_2);
    printf("Num_1 is :: %d\n",num_1);
    printf("Num_2 is :: %d\n",num_2);

}