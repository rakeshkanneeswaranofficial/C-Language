#include<stdio.h>

int main(){



long  int num ;
printf("Enter the value of num \n");
scanf("%d",&num);
int a = num%10;
num = num/10;
int b = num%10;
int product = a * b;

printf("%d",product);

  




return 0;
}