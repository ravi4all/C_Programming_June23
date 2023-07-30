#include<stdio.h>

// 2 types of scope of variable
// - local
// - global

// 4 types of storage class
// - automatic
// - external
// - static
// - register

// Global variable / external
int x = 100;

int add() {
    int z = 10 + x;
}

// Global Variable
// int c = 0;
int counter() {
    // static variables are initialized only once
    static int c = 0;
    c++;
    printf("Counter : %d\n",c);
}

int main() {
    // Local Scope / automatic
    int x = 10;
    counter();
    // c++;
    counter();
    // c++;
    counter();
}