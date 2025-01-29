#include<stdio.h>
int main(){
  int num,factorial=1,i=1;
printf("Enter a number");
scanf("%d",&num);
while(i<=num){
  factorial*=i;
  i++;
  }
  printf("factorial=%d",factorial);
return 0;
}

