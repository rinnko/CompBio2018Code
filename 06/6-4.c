#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main(void){
  int i;
  double S,I,R,SS,II,RR,t,dt,b,r;
  double x1, x2, y1, y2,N;
  srand(time(NULL));
  N=1;

  FILE *fp;
  fp=fopen("output_6-4.csv","w");

  dt=0.001;
  b=0.05;
  r=0.02;

  t=0.0;
  S=100.0;
  I=40.0;
  R=30.0;


  fprintf(fp, "%f,%f,%f,%f\n", t,S,I,R);

  for(i=1;i<=1000;i++){

        x1=(((double)rand()+1)/((double)RAND_MAX+1))*N;
        x2=(((double)rand()+1)/((double)RAND_MAX+1))*N;

        y1=sqrt(-2*log(x1))*cos(2*M_PI*x2);
        y2=sqrt(-2*log(x1))*sin(2*M_PI*x2);
    t=dt*i;
    SS=S-b*S*I*dt;
    II=I+b*S*I*dt-r*I*dt+y1*2;
    RR=R+r*I*dt;
    S=SS;
    I=II;
    R=RR;

    if(i%10==0){
      fprintf(fp, "%f,%f,%f,%f\n",t,S,I,R);
    }
  }

  fclose(fp);
  return 0;
}
