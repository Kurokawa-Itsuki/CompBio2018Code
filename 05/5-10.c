#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100
//#define k 3

int main() {
  int a[N],aa[N],i,t,r1,r2,r,sum=0,tsum=0,count=0,k;
  double ave;
  srand(time(NULL));

  for(k=1;k<=N;k+=(N/10)){
    tsum=0;
    count=0;
do {
  for(i=0;i<N;i++){
    if(i<k){
      a[i]=1;
    }
    else{
      a[i]=0;
    }
  }
  for(i=0;i<N;i++){
    //printf("%d ",a[i]);
  }
  //printf("\n");

  for(t=0;t<1000;t++){
    sum=0;
    for(i=0;i<N;i++){
      r1=rand()%N;
      r2=rand()%N;
      r=rand()%2;
      if(r==0){
        aa[i]=a[r1];
      }
      if(r==1){
        aa[i]=a[r2];
      }
    }
    for(i=0;i<N;i++){
      a[i]=aa[i];
      //printf("%d ",a[i]);
    }
    //printf("\n");
    for(i=0;i<N;i++){
      sum=sum+a[i];
    }
    if(sum==N){
      count++;
      tsum=tsum+(t+1);
      // printf("%d\n",t+1);
      break;
    }
  }
}while(count<100);
  ave=(double)tsum/(double)count;
  printf("%d  %f  %f\n",k,(double)k/(double)N,ave);
  }
  // ave=(double)tsum/(double)count;
  // printf("%d %d %.3f\n",count,tsum,ave);
  return 0;
}
