#include<stdio.h>
int main(){
  int ram,shyam,ajay,youngest;
  printf("Enter Ages of Ram,Shyam and Ajay in order:");
  scanf("%d%d%d",&ram,&shyam,&ajay);
  if(ram<shyam && ram<ajay){
    printf("Youngest is Ram");
  }
  else if(shyam<ram && shyam<ajay){
    printf("Youngest is Shyam");
  }
  else if(ajay<ram && ajay<shyam){
    printf("Youngest is Ajay");
  }
  return 0;
}

