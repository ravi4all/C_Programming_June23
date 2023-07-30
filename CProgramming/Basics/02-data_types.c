#include<stdio.h>

int main() {
    int id;
    printf("Int : \n");
    printf("Default Value : %d, Default Size in bytes : %d\n",id,sizeof(id));

    float salary;
    printf("Float : \n");
    printf("Default Value : %d, Default Size in bytes : %d\n",salary,sizeof(salary));

    double price;
    printf("Double : \n");
    printf("Default Value : %d, Default Size in bytes : %d\n",price,sizeof(price));

    short int age;
    printf("Short Int : \n");
    printf("Default Value : %d, Default Size in bytes : %d\n",age,sizeof(age));

    short age_1;
    printf("Short : \n");
    printf("Default Value : %d, Default Size in bytes : %d\n",age_1,sizeof(age_1));

    long int acc_no;
    printf("Long Int : \n");
    printf("Default Value : %d, Default Size in bytes : %d\n",acc_no,sizeof(acc_no));

    long acc_no_1;
    printf("Long : \n");
    printf("Default Value : %d, Default Size in bytes : %d\n",acc_no_1,sizeof(acc_no_1));

    long long acc_no_2;
    printf("Long Long : \n");
    printf("Default Value : %d, Default Size in bytes : %d\n",acc_no_2,sizeof(acc_no_2));

    long double x;
    printf("Long Double : \n");
    printf("Default Value : %d, Default Size in bytes : %d\n",x,sizeof(x));

}