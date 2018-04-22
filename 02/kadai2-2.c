#include <stdio.h>
int main(int argc, char const *argv[]) {
  double x,r,k;
  int t;
  FILE *fp;
  t=300;
  k=100.0;
  r=0.1;
  x=1.0;

  fp=fopen("output.dat","a");

  for(r=0.1;r<3.0;r+0.1){
  x=x+r*(1-x/k)*x;
  fprintf(fp,"%f  %f\n",x,r);
}
fclose(fp);
  return 0;
}
