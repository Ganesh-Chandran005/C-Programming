#include<stdio.h>
int main(){
  int age;
  printf("Enter your Age:");
  scanf("%d",&age);
  if (age>=18){
    printf("Congratulations!ELigible to vote");
  }
  else{
    printf("Not eleigible.Underage.");
  }
  return 0;
}
