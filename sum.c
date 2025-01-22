#include<stdio.h>
int main(){
    float number1,number2;
    float sum ;
    printf("Enter two  numbers:");
    scanf("%f%f",&number1,&number2);
    sum=number1+number2;
    printf("Sum=%f+%f=%f\n",number1,number2,sum);
    return 0;
}
