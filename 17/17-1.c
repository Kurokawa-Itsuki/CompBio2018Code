#include <stdio.h>
#include <math.h>
int main(void){
  int i;
  double x0,x,xx,y0,y,yy,z0,z,zz;
  double r,k;
  double a,b,d1,d2;
  double dt;

  x0=10000.0;
  y0=50.0;
  z0=0.5;

  x=x0;
  y=y0;
  z=z0;
  r=0.04;
  k=10000;
  a=0.00006;
  b=0.00008;
  d1=0.05;
  d2=0.04;
  dt=0.01;

  FILE *fp;
  fp=fopen("17-1.csv","w");
  fprintf(fp,"%f,%f,%f,%f\n",0.0,x,y,z);

  for(i=1;i<100000;i++){

    xx=x+dt*(r*(1-x/k)*x-a*x*y);
    yy=y+dt*(a*x-b*z-d1)*y;
    zz=z+dt*(b*y-d2)*z;

    x=xx;
    y=yy;
    z=zz;
    //if(i>=50000){
    fprintf(fp,"%f,%f,%f,%f\n",dt*i,x,y,z);
  }
//}
  fclose(fp);
  return 0;
}
