#include <stdio.h>
int main(int argc, char const *argv[]) {
  double k,r,x;
  int t;
  FILE *fp;
  t=0;
  k=100.0;
  r=3.0;
  x=1.0;

  fp=fopen("output.dat","a");

  for(t=0;t<300;t++){
  x=x+r*(1-x/k)*x;
  fprintf(fp,"%f\n",x);
}
fclose(fp);
  return 0;
}
