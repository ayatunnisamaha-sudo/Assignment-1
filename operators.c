#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int a = get_int("Enter first number: ");
    int b = get_int("Enter second number: ");

    printf("Sum: %i\n", a + b);
    printf("Difference: %i\n", a - b);
    printf("Product: %i\n", a * b);
    printf("Quotient: %i\n", a / b);
    printf("Remainder: %i\n",a % b);

    return 0;
}
