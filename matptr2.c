#include<stdio.h>
#include<stdlib.h>
int main(){
	int rows=2,cols=2;
	int *matrix=(int *)malloc(rows*cols*sizeof(int *));
	printf("\nEnter the Elements:");
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			scanf("%d",(matrix+i * cols +j));
		}
	}
	printf("\nMatrix: \n");
	for(int i=0;i<rows;i++){
		printf("\t|\t");
		for(int j=0;j<cols;j++){
			printf("%d\t",*(matrix+i * cols +j));
		}
		printf("|\n");
	}
return 0;
}
