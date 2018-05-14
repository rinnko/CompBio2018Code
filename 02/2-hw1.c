#include <stdio.h>

int main(void){
  double r, x, x250, xx, k;
  int t;
  x250=100.0;
  k=100.0;

  FILE *fp;
  fp=fopen("output.txt", "w");

for(r=1.0; r<3.0; r+=0.1){

  fprintf(fp, "%f, %f\n", r, x250);

  x=x250;

  for(t=251; t<300; t++){
    xx=x+r*(1-x/k)*x;
    fprintf(fp, "%f, %f\n", r, xx);
    x=xx;
  }
}
  fclose(fp);

  return 0;
}
