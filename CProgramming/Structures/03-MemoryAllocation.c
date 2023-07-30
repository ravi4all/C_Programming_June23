#include<stdio.h>
#include<stdlib.h>

struct Person
{
    int id;
    char name[30];
    int age;
};

int main() {
    struct Person *ptr;
    int n;

    printf("Enter number of persons : ");
    scanf("%d",n);

    // allocating memory for n number of person
    ptr = (struct Person*) malloc(n * sizeof(struct Person));

    for(int i = 0; i < n; i++) {
        printf("Enter ID, Name, Age : %d, %s, %d");
        scanf("%d, %s %d",(ptr+i)->id, (ptr+i)->name, (ptr+i)->age);
    }

    for(int i = 0; i < n; i++) {
        printf("Name : %s",(ptr+i)->name);
        printf("Age : %d",(ptr+i)->age);
    }

}