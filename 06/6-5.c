#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
/* #define M_PI 3.145159265358 */

int main(){
  double x1,x2,y1,y2,i,N,sigma,eps;
  srand(time(NULL));
  N=1;
  sigma=3.0;

  FILE *fp;
  fp=fopen("output_rand.csv","w");

  for(i=0;i<10000;i++){
    x1=(((double)rand()+1)/((double)RAND_MAX+1))*N;
    x2=(((double)rand()+1)/((double)RAND_MAX+1))*N;

    y1=sqrt(-2*log(x1))*cos(2*M_PI*x2);
    y2=sqrt(-2*log(x1))*sin(2*M_PI*x2);

    eps=y1*sigma;
    fprintf(fp,"%f\n",eps);
  }

  fclose(fp);
  return 0;
}
