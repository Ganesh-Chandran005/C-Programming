#include<stdio.h>
int main(){
  int limit,i,j,temp;
  printf("Enter a Limit:");
  scanf("%d",&limit);
  int array[limit];
  int num[limit];
  for(i=0;i<limit;i++){
    printf("Enter an Element:");
    scanf("%d",&array[i]);
  }
  for(i=0;i<limit-1;i++){
    for(j=0;j<limit-i;j++){
      if(array[j]>array[j+1]){
        temp=array[j];
        array[j]=array[j+1];
        array[j+1]=temp;
        
      }
    }
  }
  printf("\nSorted array:");
  for(i=0;i<limit;i++){
    printf("  %d",array[i]);
  }
  return 0;
}
      
