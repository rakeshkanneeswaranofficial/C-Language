#include<stdio.h>
int main(){

    int a,b,c;
    printf("Enter the value of a\n");
    scanf("%d",&a);
    printf("Enter the value of b\n");
    scanf("%d",&b);

    printf("value of a and b before swap is %d and %d \n",a,b);

    c = b;
    b = a ;
    a = c;

    printf("value of a and b after swap is %d and %d",a,b);










    return 0;   
}