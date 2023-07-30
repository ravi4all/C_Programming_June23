#include<stdio.h>

int main() {
    printf("Press 1 for addition\n");
    printf("Press 2 for subtraction\n");
    printf("Press 3 for division\n");
    printf("Press 4 for multiplication\n");

    int choice;
    printf("Enter your choice : ");
    scanf("%d",&choice);

    int x = 12, y = 33;
    int z;
    if(choice == 1) {
        z = x + y;
        printf("Sum is %d",z);
    }
    else if(choice == 2) {
        z = x - y;
        printf("Sum is %d",z);
    }
    else if(choice == 3) {
        z = x / y;
        printf("Div is %d",z);
    }
    else if(choice == 4) {
        z = x * y;
        printf("Mul is %d",z);
    }
    else {
        printf("Invalid Choice...");
    }

}