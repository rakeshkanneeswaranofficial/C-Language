#include <stdio.h>
int main()
{
    int divedent, divisor, quotient;
    int reaminder;

    printf("Enter the value of divident");
    scanf("%d", &divedent);
    printf("Enter the value of divisor");
    scanf("%d", &divisor);
    reaminder = divedent % divisor;
    quotient = (divedent - reaminder) / divisor;
    printf("the value of remainder is %d\n", reaminder);
    printf("the value of quotient is %d", quotient);

    return 0;
}