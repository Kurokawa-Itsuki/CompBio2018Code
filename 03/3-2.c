#include <stdio.h>
int main(){
  int i;
  for(i=0;i<10;i++){
    printf("%d:  ",i);
    if(i>5){
      printf("iha5yoriooki");
    }
    if(i==3){
      printf("iは3と等しい");
    }
    if((i>=3)&&(i<=6)){
      printf("iは3以上6以下");
    }
    if(!(i==1||i==2)){
      printf("iは1または2ではない");
    }
    printf("\n");
  }
  return 0;
}
