/*Name :Anjana Krishna
Date 19 Feb 2025
Program to reverse a input string
*/


#include<stdio.h>
int main(){
char str[100];
printf("Enter a string");
scanf("%s",str);
int length;
for(length=0;str[length]!='\0';length++);
int i=length-1;
for(int j=0;j<length/2;j++){
int temp;
temp=str[i];
str[i]=str[j];
str[j]=temp;
i--;

}
printf("The reversed string:");
puts(str);
return 0;
}
