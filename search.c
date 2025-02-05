#include<stdio.h>
int main(){
int limit,i,search;
printf("Enter the limit:");
scanf("%d",&limit);

int num[limit];
printf("Enter the elements");
for(i=0;i<limit;i++){
scanf("%d",&num[i]);
}
printf("Enter the number to be searched");
scanf("%d",&search);
for(i=0;i<limit;i++){
  if(search==num[i]){
  printf("The element is found at the position %d",i+1);
  }
}
return 0;
}
