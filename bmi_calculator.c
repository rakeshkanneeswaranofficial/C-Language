#include<stdio.h>
int main(){

    
    float weigth;
    float height;
    float BMI;

    printf("Enter the value of weigth");
    scanf("%f",&weigth);

    printf("Enter the value of heigth");
    scanf("%f",&height);

    BMI = weigth/(height*height);

    printf("%f",BMI);






    return 0;
}