#include <stdio.h>
#include <math.h>
//#include <stdlib.h>
//#include <time.h>
#define N 100
//#define k 3

int main(){
  int k;
  double T,p;


for(k=1;k<=N;k+=(N/10)){
  p=(double)k/(double)N;
  T=-(1/p)*(2.0*N*(1.0-p)*log(1.0-p));
  printf("%f\n",T);
}
    return 0;
}
