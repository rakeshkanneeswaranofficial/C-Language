#include<stdio.h>

int main(){

long  int num = 1245678;
int a = num%1000;
num = num/10;
int b = num%10;
int product = a * b;

printf("%d",a);

  




return 0;
}