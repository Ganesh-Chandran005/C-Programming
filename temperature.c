#include<stdio.h>
int main(){
  int temp;
  printf("Enter a teampature:");
  scanf("%d",&temp);
  if(temp<0){
    printf("Freezing Weather!");
  }
  else if(temp>0 && temp<10){
    printf("Very COld Weather!");
  }
  else if(temp>10 && temp<20){
    printf("Cold Weather!");
  }
  else if(temp>20 && temp<30){
    printf("Normal Weather");
  }
  else if(temp>30 && temp<40){
    printf("Hot Weather");
  }
  else if(temp>=40){
    printf("Very Hot Climate");
  }
  return 0;
}
