#include<stdio.h>
int main(){
  int limit,i,search,max,min;
  printf("Enter a Limit:");
  scanf("%d",&limit);
  int array[limit];
  for(i=0;i<limit;i++){
    printf("Enter an Element:");
    scanf("%d",&array[i]);
  }
  max=array[0];
  min=array[0];
  for(i=0;i<limit;i++){
    if(array[i]>max){
      max=array[i]; 
      i=i+1;
    }
    if(array[i]<min){
      min=array[i];
      i=i+1;
    }
  }
  printf("\nLargest element:%d \nSmallest element:%d",max,min);
  return 0;
}
