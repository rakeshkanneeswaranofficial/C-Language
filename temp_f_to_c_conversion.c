#include <stdio.h>
int main()
{

    float f, c;

    printf("Enter the value of temperature in centigrade");
    scanf("%f", &c);
    f = (c*1.8) + 32;

    printf("Value of temperature in fahrenheit is %1f", f);

    return 0;
}