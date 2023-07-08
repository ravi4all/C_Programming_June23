#include<stdio.h>

void main() {
    // Assignment -> =
    int x = 10, y = 6;
    // Arithmetic Operators
    int c = x + y;
    printf("Sum is : %d\n",c);
    c = x - y;
    printf("Sub is : %d\n",c);
    c = x / y;  // Return quotient
    printf("Div is : %d\n",c);
    c = x * y;
    printf("Mul is : %d\n",c);
    c = x % y;  // Return Remainder
    printf("Remainder is : %d\n",c);

    // Assignment Operators
    printf("By default X is : %d\n",x);     // 10
    x += 5;     // x = x + 5
    printf("After x += 5, X is : %d\n",x);  // 15
    x -= 5;     // x = x - 5
    printf("After x -= 5, X is : %d\n",x);  // 10
    x /= 5;     // x = x / 5
    printf("After x /= 5, X is : %d\n",x);  // 2
    x *= 5;     // x = x * 5
    printf("After x *= 5, X is : %d\n",x);  // 10
    x %= 5;     // x = x % 5
    printf("After x %= 5, X is : %d\n",x);  // 0

    printf("----------Increment and Decrement------------");
    printf("\n");

    x = 10;
    // Increment (++) and Decrement(--) Operators
    // Post Increment (x++ => x = x + 1)
    printf("After Post increment X is : %d\n",x++);
    printf("But in next line X becomes : %d\n",x);
    // Now x becomes 11

    // Pre Increment (++x)
    printf("After Pre increment X is : %d\n",++x);
    printf("But in next line X becomes : %d\n",x);
    // Now x becomes 12
    
    // Post Decrement (x--)
    printf("After Post decrement X is : %d\n",x--);
    printf("But in next line X becomes : %d\n",x);
    // Now x becomes 11
    
    // Pre Decrement (--x)
    printf("After Pre decrement X is : %d\n",--x);
    printf("But in next line X becomes : %d\n",x);
    // Now x becomes 10

    // x = 10;
    printf("x++ + x++ = ");
    printf("%d",x++ + x++);
    
    printf("x++ + ++x = ");
    printf("%d",x++ + ++x);
    
    // printf("%d : %d",x++,x);

    printf("\nRelational Operators\n");
    // Relational Operators
    int age = 18;
    printf("%d\n",age == 18);  // check if age is equals to 18
    // True - 1, False - 0
    printf("%d\n",age > 18);  // check if age is greater than 18
    printf("%d\n",age < 18);  // check if age is less than 18
    printf("%d\n",age >= 18);  // check if age is greater than equals to 18
    printf("%d\n",age <= 18);  // check if age is less than equals to 18
    printf("%d\n",age != 18);  // check if age is not equals to 18

    // Ternary Operators
    printf("\nTernary Operators\n");
    printf("%s", age >= 18 ? "Allowed" : "Not Allowed");

}