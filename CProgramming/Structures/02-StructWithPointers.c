#include<stdio.h>

struct Person
{
    int id;
    char name[30];
    int age;
};


int main() {
    struct Person *personPtr, p1;
    personPtr = &p1;

    printf("Enter ID : ");
    // (*personPtr).id is equivalent to &personPtr->id
    scanf("%d", &personPtr->id);

    printf("Enter Name : ");
    scanf("%s", &personPtr->name);

    printf("Enter Age : ");
    scanf("%d", &personPtr->age);

    printf("Person Data...\n");
    printf("ID : %d\n",personPtr->id);
    printf("Name : %s\n",personPtr->name);
    printf("Age : %d",personPtr->age);

}