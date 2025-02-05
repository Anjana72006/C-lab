#include<stdio.h>
int main(){
int i,limit,maxPos,minPos,min,max;
printf("Enter the limit");
scanf("%d",&limit);
int num[limit];
printf("Enter the elements");
for(i=0;i<limit;i++){
scanf("%d",&num[i]);
}
min=num[1];
max=num[0];

for(i=0;i<limit;i++){
if(num[i]<min){
min=num[i];
minPos=i+1;
}
if(num[i]>max){
max=num[i];
maxPos=i+1;

}}
printf("%d is the minimum value",min);
printf("%d is the maximum value",max);
printf("max at position:%d",maxPos);
printf("min at position:%d",minPos);
return 0;
}


