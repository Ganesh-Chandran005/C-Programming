#include<stdio.h>
int main(){
  char name[20];
  printf("\nEnter you name:");
  fgets(name,sizeof(name),stdin);
  printf("Name: %s",name);
  return 0;
}

