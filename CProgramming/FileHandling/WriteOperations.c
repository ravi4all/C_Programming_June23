#include<stdio.h>
#include<stdlib.h>

int main() {
    char name[20];
    FILE *file_ptr;
    file_ptr = fopen("notes_2.txt","w");
    // file_ptr = fopen("notes_2.txt","a");
    if(file_ptr == NULL) {
        printf("Something went wrong...");
        exit(1);
    }
    printf("Enter : ");
    scanf("%s",name);
    // fprintf(file_ptr, "%s", num);
    fputs(name, file_ptr);
    fclose(file_ptr);
    printf("File written successfully...");
}