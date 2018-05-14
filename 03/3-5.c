#include <stdio.h>

int main(void){
  double r, x, xx, k;
  int i,t;
  k=100;

  FILE *fp;
  fp=fopen("output.txt", "w");

for(i=150; i<300; i++){
r=(double)i/100;
x=10;

  for(t=0; t<1000; t++){
    xx=x+r*(1-x/k)*x;
    x=xx;
    if(t>900){
    fprintf(fp, "%f, %f\n", r, x);
  }
  }
}
  fclose(fp);

  return 0;
}
