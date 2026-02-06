#include <cs50.h>
#include <stdio.h>

int main() {
    int year = get_int("Enter a year:");

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        printf("Leap Year");
    else
        printf("Not Leap Year");

    return 0;
}
