#include<stdio.h>
#include<string.h>

struct Person
{
    char name[20];
    int age;
    int salary;
};

int main() {
    struct Person p1, p2;
    strcpy(p1.name, "Ravi");
    p1.age = 20;
    p1.salary = 45000;

    printf("Name : %s\n",p1.name);
    printf("Age : %d\n",p1.age);

    strcpy(p2.name, "Ram");
    p2.age = 30;
    p2.salary = 65000;

    printf("Name : %s\n",p2.name);
    printf("Age : %d",p2.age);

}