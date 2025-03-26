#include<stdio.h>
int power(int base,int expo){
  if(expo==0){
        return 1;
   }
 else{
      return base* power(base,expo-1);
      }
}


int main(){
int base,expo;
printf("Enter the base:");
scanf("%d",&base);
printf("Enter the exponent:");
scanf("%d",&expo);
power(base,expo);

printf("Result=%d",power(base,expo));
return 0;
}

