#include <stdio.h>
void multiply(int num,int num1);
int main(){
    int num,num1;
    printf("Enter Two Numbers:");
    scanf("%d%d",&num,&num1);
    multiply(num,num1);
    return 0;
}
void multiply(int num,int num1){
    int product;
    product=num*num1;
    printf("Product of %d and %d is %d",num,num1,product);
}
