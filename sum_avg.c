#include<stdio.h>

int main(){

int num1,num2,num3,num4,num5;
int sum, avg;

printf("enter the value of num1\n");
scanf("%d",&num1);
printf("enter the value of num2\n");
scanf("%d",&num2);
printf("enter the value of num3\n");
scanf("%d",&num3);
printf("enter the value of num4\n");
scanf("%d",&num4);
printf("enter the value of num5\n");
scanf("%d",&num5);

sum = num1 + num2 + num3 + num4 + num5;
avg = (num1 + num2 + num3 + num4 + num5)/5;

printf("average and sum of %d,%d,%d,%d,%d is %d and %d",num1,num2,num3,num4,num5,sum,avg);









    return 0;
}