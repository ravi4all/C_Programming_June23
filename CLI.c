#include<stdio.h>

int main(int arg_length, char const *args[])
{
    //arg_length - it will contain how many arguments we are passing from command line
    // args - it's an array (collection of data)
    printf("%d\n",arg_length);
    // character - it denotes one single character
    // string - collection of characters
    printf("Item on 0th index : %s\n",args[0]);
    printf("Item on 1st index : %d\n",args[1]);
    printf("Item on 1st index : %s\n",args[1]);

    // type casting - convert one data type into another
    // atoi - convert string to int
    int x = atoi(args[1]);
    int y = atoi(args[2]);
    // printf("Item on 1st index after type cast : %d\n",x);

    // int x = args[1];
    // int y = args[2];
    int sum = x + y;
    printf("Sum is %d",sum);

    return 0;
}
