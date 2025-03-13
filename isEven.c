#include<stdio.h>
void isEven(int);
int main(){
    int num;
    printf("Enter a Number:");
    scanf("%d",&num);
    isEven(num);
    return 0;
}
void isEven(int num){
    int flag=0;
    if(num%2==0){
        flag=1;
    }
    else{
        flag=0;
    }
    if(flag==1){
        printf("%d is Even.");
    }
    else{
        printf("%d is Odd.");
    }
}
