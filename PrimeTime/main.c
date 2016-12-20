#include <stdio.h>
#include <math.h>

int primelist[10002];
int truelist[10002]={0};



int isprime(int a){

  for(int i=2;i<=sqrt(a);i++){
    if(a%i==0){
      return 0;
    }
  }
  return 1;

}
void buildlist(){
  for(int i=0;i<=10000;i++){
    primelist[i] = i*i+i+41;
    if(isprime(primelist[i])){
      truelist[i]=1;
    }

  }
}
int main(){
  int a,b;
  int count=0;

  buildlist();
  while(scanf("%d %d",&a,&b)!=EOF){
    for(int i = a; i <= b; i++){
      if(truelist[i]==1){
        //true

        count++;
      }


    }int total = b-a+1;
    //printf("count:%d, b-a: %d\n",count,b-a+1);
    printf("%.2f\n",100*(float)count/(float)total);

    count =0;
  }

  return 0;
}


