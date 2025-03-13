#include<stdio.h>
void isEven(int);
int main(){
    int num,check;
    printf("Enter a Number:");
    scanf("%d",&num);
    check=isEven(num);
    if(check==1){
        printf("%d is Even.");
    }
    else if(check==0){
        printf("%d is Odd.");
}
}
int isEven(int num){
    if(num%2==0){
        return 1;
    }
    else{
        return 0;
    }
}
