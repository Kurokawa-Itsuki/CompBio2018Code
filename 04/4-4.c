#include <stdio.h>
int main(){
  int i;
  double d;

  //int ->double
  i=5;
  d=i;
  printf("%d,%f\n",i,d);

  //double->printf
  d=3.6;
  i=d;
  printf("%d,%f\n",i,d);
  return 0;
}
