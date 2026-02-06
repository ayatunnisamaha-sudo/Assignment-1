#include <cs50.h>
#include <stdio.h>

int main(void)
{
float celsius = get_float("Convert Celsius to Fahrenheit: ");

float f = (celsius * 9 / 5) + 32;
printf("Fahrenheit = %.2f\n", f);

return 0;
}
