#include<stdio.h>
#define Pi 3.14159
int main(){

float r,h,R,a,A;
printf("Enter the radius of circle:");
scanf("%f",&r);
a=Pi*r*r;
printf("Area of circle:%f\n",a);
printf("Enter the radius of cylinder:");
scanf("%f",&R);
printf("Enter the height of cylinder:");
scanf("%f",&h);
A=2*Pi*R*(R+h);
printf("Area of cylinder:%f",A);
return 0;
}
