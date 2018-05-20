#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int r,M,N,x,i,j,sum;
  srand(time(NULL));
  M=1;
  N=6;
  x=0;
  sum=0;

for(j=0;j<10;j++){
  x=0;
  for(i=0;i<100;i++){
    r=rand()%(N-M+1)+M;
    x=x+r;
    if(x>=100){
  //    printf("%d\n",i);
      break;
    }
  }
sum=sum+i;
}
printf("%d\n",sum/10);
  return 0;
}
