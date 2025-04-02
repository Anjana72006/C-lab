#include<stdio.h>
 typedef struct student{
      int rollno;
      char name[20];
      float m1,m2,m3;
}student;
int main(){
int limit;
float totalmark=0,avgmark;
 student s1[10];
 printf("Enter the number of students:");
 scanf("%d",&limit);
 
 for(int i=0;i<limit;i++){
    printf("Enter the roll no:");
    scanf("%d",&s1[i].rollno);
    printf("Enter the name:");
    scanf("%s",s1[i].name);
    printf("Enter marks scored for maths:");
    scanf("%f",&s1[i].m1);
    printf("Enter marks scored for english:");
    scanf("%f",&s1[i].m2);
     printf("Enter marks scored for C:");
    scanf("%f",&s1[i].m3);
    
    }
    printf("\n Student details:");
  
  for(int i=0;i<limit;i++){
    printf("\n Name:\t%s",s1[i].name);
    printf("\n Roll no:\t%d",s1[i].rollno);
    printf("\nEnter marks scored for maths:\t%f",s1[i].m1);
    printf("\nEnter marks scored for english:\t%f",s1[i].m2);
    printf("\nEnter marks scored for C:\t%f",s1[i].m3);
    totalmark=totalmark+s1[i].m1+s1[i].m2+s1[i].m3;
  
  }
  printf("\nTotal mark=%f",totalmark);
  avgmark=totalmark/limit;
  printf("\nAverage mark:%f",avgmark);
return 0;
}
