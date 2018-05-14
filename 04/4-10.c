#include<stdio.h>

int main(void){
  double a,b,c,d,e,f,A,B,C,D;

  FILE *fp;
  fp=fopen("output_4-10.csv","w");

  a=2.0;
  b=3.0;
  c=1.0;
  d=2.0;
  e=1.0;
  f=10.0;

A=(-a*b*f-b*c*d)/(b*f-c*e);
B=(a*c*f+c*c*d)/(b*f-c*e);
C=(b*d*e+a*e*e)/(b*f-c*e);
D=(-b*d*f-a*e*f)/(b*f-c*e);

fprintf(fp, "%f,%f,%f,%f,%f\n",A*D,B*C,A+D,A-D,A*D+B*C);

fclose(fp);

return 0;

}
