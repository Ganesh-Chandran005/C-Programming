#include<stdio.h>
#include<stdlib.h>
int main(){
	int **matrix;
	int rows=3,cols=5;
	matrix=(int**)malloc(rows*sizeof(int *));
	for (int i=0;i<rows;i++){
		matrix[i]=(int*)malloc(cols*sizeof(int*));
	}
	printf("\nEnter the Elements:");
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			scanf("%d",(*(matrix+i)+j));
		}
	}
	printf("\nMatrix: ");
	for(int i=0;i<rows;i++){
		printf("\t|\t");
		for(int j=0;j<cols;j++){
			printf("%d\t",*(*(matrix+i)+j));
		}
		printf("|\n");
	}
return 0;
}
