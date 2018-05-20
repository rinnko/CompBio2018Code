#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 50

int main(void){
  int a[N],aa[N],i,t,r1,r2,r,k,T,A,TT,B;
  srand(time(NULL));

  k=40;
  TT=0;
  B=0;


  for(T=0;T<1000;T++){//試行回数

  for(i=0;i<k;i++){//個体番号
    a[i]=0;//変異の子
  }

  for(i=k;i<N;i++){
    a[i]=1;//普通の子
  }

  for(i=0;i<N;i++){
  }//ｎ個体いるよ

  for(t=1;t<100;t++){//世代数
    A=0;
    for(i=0;i<N;i++){
      r1=rand()%N;
      r2=rand()%N;
      r=rand()%2;
      if(r==0){
        aa[i]=a[r1];
      }
      if(r==1){
        aa[i]=a[r2];
      }
    }
    for(i=0;i<N;i++){
    a[i]=aa[i];
    }

  for(i=0;i<N;i++){
    A=A+a[i];//普通の子の数
  }

  if(A==0){//みんな変異体だったら
    B=B+1;//世代数
    TT=TT+t;//試行回数の和
    break;
}
  }


if(B==100){//100回成功したら
  printf("%d\n",TT/100);//平均出して
break;
}
}

return 0;
}
