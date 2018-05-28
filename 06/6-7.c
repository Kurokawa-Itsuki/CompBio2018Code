include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main(){
  int j;
  double s0,i0,r0,s,ss,i,ii,r,rr,b,c;
  double dt;
  double x1,x2,y1,y2,N,sigma,eps;
  srand(time(NULL));
  N=1;
  sigma=30.0;

  s0=1000.0;
  i0=10.0;
  r0=20.0;
  s=s0;
  i=i0;
  r=r0;
  b=0.005;
  c=0.3;
  dt=0.1;

  FILE *fp;
  fp=fopen("6-7.csv","w");
  fprintf(fp,"%.3f,%.3f,%.3f,%.3f\n",0.0,s,i,r);
  for(j=1;j<100;j++){
    ss=s+dt*(-b*s*i);
    ii=i+dt*(b*s*i-c*i);
    rr=r+dt*c*i;
    s=ss;
    i=ii;
    r=rr;

    x1=(((double)rand()+1)/((double)RAND_MAX+1))*N;

    y1=sqrt(-2*log(x1))*cos(2*M_PI*x2);

    eps=y1*sigma;

    fprintf(fp,"%.3f,%.3f,%.3f,%.3f\n",dt*j,s,i+eps,r);
  }

  fclose(fp);
  return 0;
}
