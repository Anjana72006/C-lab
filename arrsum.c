#include<stdio.h>
int ar(int array[],int size){
 int sum=0;
 for(int i=0;i<size;i++){
    sum=sum+array[i];
   }
 return sum;
}
int main(){
int n;
printf("Enter the size of array:");
scanf("%d",&n);
int array[n];
printf("Enter %d the elements:",n);
for(int i=0;i<n;i++){
scanf("%d",&array[i]);


}
int sum=ar(array,n);
printf("%d",sum);

return 0;
}
