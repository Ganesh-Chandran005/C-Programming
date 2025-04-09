#include<stdio.h>
int main(){
  FILE *fp1,fp2,fp3;
  fp1=fopen("num.txt","r");
  int num;
  fscanf(fp1,"%d",&num);
  while(!feof(fp1)){
    printf("%d\t",num);
    fscanf(fp1,"%d",&num);
   
  }
  fclose(fp1);
  return 0;
}
  

