#include <stdio.h>

int main()
{

    float area;
    float pi = 3.14;
    float radius;

    printf("enter the radius of circle\n");
    scanf("%f", &radius);

    area = pi * radius * radius;

    printf("the area of the circle is %f\n", area);

    return 0;
}