/*Author       : Ganesh Chandran
  Date         : 2-04-2025
  Description  : Display Employee Details using structure
  Version      : 1.0  */
#include<stdio.h>
struct employee{
char name[20];
int empid;
float salary;
};
int main(){ 
  int i,n;
  printf("Enter the number of Employees; ");
  scanf("%d",&n);
  printf("\n");
  struct employee e[n];
    
  for(i=0;i<n;i++){
    printf("Enter employee's name: ");
    scanf("%s",e[i].name);
    printf("Enter employee's ID: ");
    scanf("%d",&e[i].empid);
    printf("Enter employee's salary: ");
    scanf("%f",&e[i].salary);
     printf("\n");
  }
  printf("\nEmployee Details: \n");
  for(i=0;i<n;i++){
  printf("%d) Name: %s\n",i+1,e[i].name);
  printf("    Employee ID: %d\n",e[i].empid);
  printf("    Salary: %.2f\n",e[i].salary);
  printf("--------------------\n");
  }
return 0;
}
    
    

