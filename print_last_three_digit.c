#include <stdio.h>
int main()
{

    int n;

    int remainder;
    int digit1[7];

    printf("enter the value of picode code the value should not exceed 6 digits\n");
    scanf("%d", &n);

    for (int i = 0; i < 3; i++)

    {

        remainder = n % 10;    // to take out the last digit
        n = n / 10;            // to remove the last digit
        digit1[i] = remainder; // to add the last digit for every value of i
    }

    printf("%d", digit1[2]); // to print last 3rd digit
    printf("%d", digit1[1]); // to print last 2nd digit
    printf("%d", digit1[0]); // to print last 1st digit

    return 0;
}