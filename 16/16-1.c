#include <stdio.h>
#include <math.h>
int main(){
  int i;
  double y,c0,c,cc,a0,a,aa,s0,s,ss,p,f;
  double dt;
  y=3.3;
  c0=0.0;
  a0=0.0;
  s0=18.0;
  c=c0;
  a=a0;
  s=s0;
  p=3.0;
  f=100.0;
  dt=0.1;

  FILE *fp;
  fp=fopen("16-1.csv","w");
  fprintf(fp,"%s,%s,%s,%s\n"," ","c","a","s");
  fprintf(fp,"%f,%f,%f,%f\n",0.0,c,a,s);

  ss=s0-dt*y*0.32*0.5*(1.1-s/s0)*s;

  aa=a+dt*y*0.32/90*92*(1.1-s/s0)*s;

  cc=c+dt*y*0.32/90*22.4*(1.1-s/s0)*s;
  s=ss;
  a=aa;
  c=cc;

  fprintf(fp,"%f,%f,%f,%f\n",0.1,c,a,s);

  i=2;
  do{

    ss=s-dt*y*0.32*0.5*(1-s/s0)*s;

    aa=a+dt*y*0.32/90*92*(1-s/s0)*s;

    cc=c+dt*y*0.32/90*22.4*(1-s/s0)*s;
    s=ss;
    a=aa;
    c=cc;

  fprintf(fp,"%f,%f,%f,%f\n",dt*i,c,a,s);
  if(s<=0.01){
    break;
  }
}while(i++<1000);

  fclose(fp);
  return 0;
}
