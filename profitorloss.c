#include<stdio.h>
int main(){
  int cp,sp;
  printf("Enter the Cost Price and Selling Price respectively:");
  scanf("%d%d",&cp,&sp);
  if (cp>sp){
    printf("Loss");
  }
  else{
    printf("Profit");
  }
  return 0;
}
