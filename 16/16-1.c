#include <stdio.h>
int main(){
  int i;
  double y0,y,yy,c0,c,cc,a0,a,aa,s0,s,ss,r,k,p,f,g;
  double dt;
  y0=5.0;
  c0=0.0;
  a0=0.0;
  s0=150.0;
  y=y0;
  c=c0;
  a=a0;
  s=s0;
  r=1.0;
  k=10000.0;
  p=1.005;
  f=30;
  g=100.0;
  dt=0.1;

  FILE *fp;
  fp=fopen("16-1.csv","w");
  fprintf(fp,"%s,%s,%s,%s,%s\n"," ","y","c","a","s");
  fprintf(fp,"%f,%f,%f,%f,%f\n",0.0,y,c,a,s);
  for(i=1;i<100;i++){

    yy=y+dt*r*(1-y/k)*y;
    y=yy;

    cc=c+dt*y*p*g*1/f;
    c=cc;

    aa=a+dt*y*p;
    a=aa;

    ss=s-dt*1/2*aa;
    s=ss;

  fprintf(fp,"%f,%f,%f,%f,%f\n",dt*i,y,c,a,s);
  }
  fclose(fp);
  return 0;
}
