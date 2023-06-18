#include<stdio.h>

// Using default style
// void main() {
//     printf("Hello Using C...");
// }

// main() {
//     printf("Another way to define main...");
// }

// int main() {
//     printf("Another way using int main...");
//     return 0;
// }

// void main(void) {
//     printf("Main with argument");
// }

// Command line arguments
int main(int argc, char const *argv[])
{
    printf("%d",argc);
    return 0;
}
