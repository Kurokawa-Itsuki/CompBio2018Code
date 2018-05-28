#include <stdio.h>
#include <math.h>
int main(){
  int j;
  double s0,i0,r0,s,ss,i,ii,r,rr,b,c;
  double dt;
  s0=1000.0;
  i0=10.0;
  r0=20.0;
  s=s0;
  i=i0;
  r=r0;
  b=0.0005;
  c=0.7;
  dt=0.1;

  FILE *fp;
  fp=fopen("6-4.dat","w");
  fprintf(fp,"%.3f,%.3f,%.3f,%.3f\n",0.0,s,i,r);
  for(j=1;j<100;j++){
    ss=s+dt*(-b*s*i);
    ii=i+dt*(b*s*i-c*i);
    rr=r+dt*c*i;
    s=ss;
    i=ii;
    r=rr;

    fprintf(fp,"%.3f,%.3f,%.3f,%.3f\n",dt*j,s,i,r);
  }

  fclose(fp);
  return 0;
}
