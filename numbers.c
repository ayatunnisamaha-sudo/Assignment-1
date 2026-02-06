#include <cs50.h>
#include <stdio.h>

int main() {
    int a = get_int("Enter first number:");
    int b = get_int("Enter second number:");

    if (a > b)
        printf("A is larger");
    else if (b > a)
        printf("B is larger");
    else
        printf("Equal");

    return 0;
}

