#include<stdio.h>

int main() {
    int num = 231451;
    int count = 0;
    while (num != 0)
    {
        num /= 10;
        count++;
    }
    printf("Digits are : %d",count);

    num = 10406001;
    int rem;
    count = 0;
    while (num != 0)
    {
        rem = num % 10;
        if(rem == 0) {
            count++;
        }
        num /= 10;
    }
    print("Number of zeros : %d",count);
    
}