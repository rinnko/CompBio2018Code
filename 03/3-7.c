#include <stdio.h>
#include <math.h>

int main(void){
  int i;
  double x0, x, xx, xt, k, r, dt;
  k=100;
  x0=10;
  xt=x0;
  x=x0;
  r=0.8;
  dt=1;

  FILE *fp;
  fp=fopen("3-7.dat","w");
  fprintf(fp, "%f, %f, %f\n", 0.0, xt, x);

  for(i=1;i<1000;i++){
    xt=k/(1+(k/x0-1)*exp(-r*dt*i));

    xx=x+dt*r*(1-x/k)*x;
    x=xx;

    fprintf(fp, "%f, %f, %f\n", dt*i, xt,x);
  }

  fclose(fp);
  return 0;
}
