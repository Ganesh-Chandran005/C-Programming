#include<stdio.h>
int main(){
  int limit,i,search;
  printf("Enter a Limit:");
  scanf("%d",&limit);
  int array[limit];
  for(i=0;i<limit;i++){
    printf("Enter an Element:");
    scanf("%d",&array[i]);
  }
  printf("Enter an element to search:");
  scanf("%d",&search);
  for(i=0;i<limit;i++){
    if(search==array[i]){
      printf("Searched element :%d and its position is:%d",search,i+1);
    }
  }
  return 0;
}
