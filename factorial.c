#include<stdio.h>
int main(){
  int num,fact=1;
  printf("Enter a number: ");
  scanf("%d",&num);
  while (num!=0){
    fact=fact*num;
    num=num-1;
  }
  printf("Factorial %d",fact);
  return 0;
}
    
    
    
  
