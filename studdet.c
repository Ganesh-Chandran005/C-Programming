/*Author       : Ganesh Chandran
  Date         : 2-04-2025
  Description  : Display Student Details using structure
  Version      : 1.0  */
#include<stdio.h>
struct student{
char name[20];
int rollNo;
float cgpa;
};
int main(){ 
  int i,n;
  printf("Enter the number of students; ");
  scanf("%d",&n);
  printf("\n");
  struct student s[n];
    
  for(i=0;i<n;i++){
    printf("Enter student's name: ");
    scanf("%s",s[i].name);
    printf("Enter student's roll no: ");
    scanf("%d",&s[i].rollNo);
    printf("Enter student's CGPA: ");
    scanf("%f",&s[i].cgpa);
     printf("\n");
  }
  printf("\nStudent Details: \n");
  for(i=0;i<n;i++){
  printf("%d) Name: %s\n",i+1,s[i].name);
  printf("    Roll No: %d\n",s[i].rollNo);
  printf("    CGPA: %.2f\n",s[i].cgpa);
  printf("--------------------\n");
  }
return 0;
}
    
    

