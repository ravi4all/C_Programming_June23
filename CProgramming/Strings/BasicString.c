#include<stdio.h>
#include<string.h>

int main() {
    // char c = 'h';
    // Character Array
    char c[] = {'h','e','l','l','o'};
    char c1[5] = "hello";
    // char c2[100];
    // c2 = "hello how are you..?";
    char name[30];
    fgets(name, sizeof(name), stdin);   // read string
    printf("Name : ");
    puts(name); // display string

    // strlen() - calculate string length
    // strcpy() - copy string
    // strcmp() - compare string
    // strcat() - concatenate string

    // strlwr() - convert string to lowercase
    // strupr() - convert string to uppercase
    
    // strlen("hello");
    // strcmp("hello", "bye");

}