#include<stdio.h>
#include<stdlib.h>
int main(){
	char *fruits[]={"Apple","Banana","Cherry"};
	printf("%s",fruits[0]);
	int a=10,b=20;
	int *array[2];
	array[0]=&a;
	array[1]=&b;
	printf("\n%d",*array[0]);
	printf("\n%d",*array[1]);
	return 0;
	}
