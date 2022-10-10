#include<stdio.h>
int main(){
int a,b,c;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);

(a > b && a > c ) ? printf("a is the greatest number") : printf("");
(b > a && b > c ) ? printf("b is the greatest number") : printf("");
(c > b && c> a ) ? printf("c is the greatest number") : printf("");



return 0;
}