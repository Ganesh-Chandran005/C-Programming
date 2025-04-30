#include<stdio.h>
typedef struct{
	int rollno;
	char name[20];
}student;
int main(){
	student s1;
	student *ptr;
	ptr=&s1;
	printf("Enter Roll No: ");
	scanf("%d",&ptr->rollno);
	printf("Enter Name: ");
	scanf("%s",ptr->name);
	printf("Name: %s",ptr->name);
	printf("\nRoll no: %d",ptr->rollno);	
	
return 0;
}
