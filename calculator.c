#include<stdio.h>
int main(){
  int num1,num2;
  char ope;
  printf("Enter Two Numbers: ");
  scanf("%d%d",&num1,&num2);
  printf("Which operation? ");
  scanf(" %c",&ope);
  switch(ope){
    case '+': printf("sum:%d",num1+num2);
      break;
    case '-': printf("difference:%d",num1-num2);
      break;
    case '*': printf("Multiplication:%d",num1*num2);
      break;
    case '/': printf("Division:%d",num1/num2);
      break;
    case '%': printf("Remainder:%d",num1%num2);
      break;
    default:printf("INvalid operation");
      break;
  }
  return 0;
}
    
  
