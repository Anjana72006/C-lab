#include<stdio.h>
 typedef struct details{
      int ID;
      char name[20];
      float salary;
}student;
int main(){
int limit;
 student s1[10];
 printf("Enter the number of employees:");
 scanf("%d",&limit);
 
 for(int i=0;i<limit;i++){
    printf("Enter the ID:");
    scanf("%d",&s1[i].ID);
    printf("Enter the name:");
    scanf("%s",s1[i].name);
    printf("Enter the salary:");
    scanf("%f",&s1[i].salary);
    }
    printf("\n Employee details:");
  
  for(int i=0;i<limit;i++){
    printf("\n Name:\t%s",s1[i].name);
    printf("\n ID:\t%d",s1[i].ID);
    printf("\n salary:\t%f",s1[i].salary);
  }
return 0;
}
