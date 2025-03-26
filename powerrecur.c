#include<stdio.h>
int power(int n1,int n2){
  if(n2==1){
    return n1;
    }
  else if(n2==0){
    return 1;
  }
  else{
    return n1*power(n1,n2-1);
  }
  }
int main(){
int n1,n2,pow;
  printf("Enter the base number and the exponent: ");
  scanf("%d%d",&n1,&n2);
  pow=power(n1,n2);
  printf("%d",pow);
return 0;
}
  
