#include<stdio.h>
#include<stdlib.h>

int main() {
    char data[200];
    FILE *file_ptr;
    file_ptr = fopen("notes.txt","r");
    if(file_ptr ==  NULL) {
        printf("File does not exists...");
        exit(1);
    }
    while (fgets(data, 200, file_ptr) != NULL)
    {
        printf("%s",data);
    }
    
    // fscanf(file_ptr, "%s", name);
    // printf("Hello : %s",name);
    fclose(file_ptr);
}