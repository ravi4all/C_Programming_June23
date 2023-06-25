#include<stdio.h>

void main() {

    int id;
    printf("Int : \n");
    // sizeof - size of a variable in bytes
    printf("Default Value : %d, Default Size(Bytes) : %d\n",id,sizeof(id));

    short age;
    printf("Short : \n");
    // sizeof - size of a variable in bytes
    printf("Default Value : %hd, Default Size(Bytes) : %d\n",age,sizeof(age));

    short int age_2;
    printf("Short Int : \n");
    // sizeof - size of a variable in bytes
    printf("Default Value : %hd, Default Size(Bytes) : %d\n",age_2,sizeof(age_2));

    long acc;
    printf("Long : \n");
    // sizeof - size of a variable in bytes
    printf("Default Value : %li, Default Size(Bytes) : %d\n",acc,sizeof(acc));

    long int acc_2;
    printf("Long Int : \n");
    // sizeof - size of a variable in bytes
    printf("Default Value : %li, Default Size(Bytes) : %d\n",acc_2,sizeof(acc_2));

    long long int acc_3;
    printf("Long Long Int : \n");
    // sizeof - size of a variable in bytes
    printf("Default Value : %lli, Default Size(Bytes) : %d\n",acc_3,sizeof(acc_3));

    float salary;
    printf("Float : \n");
    // sizeof - size of a variable in bytes
    printf("Default Value : %f, Default Size(Bytes) : %d\n",salary,sizeof(salary));

    double price;
    printf("Double : \n");
    // sizeof - size of a variable in bytes
    printf("Default Value : %lf, Default Size(Bytes) : %d\n",price,sizeof(price));

    // char ch = 'a';
    // can store only one character
    char ch = 'a';
    printf("Double : \n");
    // sizeof - size of a variable in bytes
    printf("Default Value : %c, Default Size(Bytes) : %d\n",ch,sizeof(ch));

}