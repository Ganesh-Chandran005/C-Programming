#include<stdio.h>
int main(){
  char str[30];
  char temp;
  int i,j;
  int length;
  printf("Enter a string max (30):");
  fgets(str,sizeof(str),stdin);
  for(length=0;str[length]!='\0';length++);
  i=length-1;
    
  for(j=0;j<length/2;j++){
    temp=str[i];
    str[i]=str[j];
    str[j]=temp;
    i--;
  }
  printf("Reversed string:%s",str);
  return 0;
}
  
  
