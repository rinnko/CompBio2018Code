#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
  int r,M,N,x,i,t,aa,a;
  srand(time(NULL));
  M=1;
  N=6;
  a=0;

for(t=0;t<1000;t++){
  x=0;

  for(i=0;i<100;i++){
    r=rand()%(N-M+1)+M;
    x=x+r;
    if(x>=100){
        a=a+i;
      break;
    }
  }

  if(t==999){
printf("%d\n",a/1000);
  }
}
  return 0;
}
