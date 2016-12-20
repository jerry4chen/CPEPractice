#include <stdio.h>
#include <stdlib.h>

int fib[40];
void buildFib(){
  fib[0]=0;
  fib[1]=1;
  for(int i=2;i<40;i++){
    fib[i] = fib[i-1]+fib[i-2];
    //printf("%d\n",fib[i]);
  }

}

int print[40]={0};

int main(){
  int a,b;
  int flag =1;
  buildFib();
  int test = 100;
  int i;

  scanf("%d",&a);
  while(a>0){

    scanf("%d", &b);
    printf("%d = ",b);
    while(b!=0){
      for(i=39;i>0;i--){
        if(b>=fib[i]){
          //printf("b: %d , i: %d , fib:%d\n",b,i,fib[i]);
          break;}
      }
      b = b - fib[i];
      print[i]=1;
    }
    a--;
    for(int k =39;k>=2;k--){
      if(flag){
        if(print[k]==1) {
          printf("1");
          flag =0;
        }
      }
      else if(print[k]==1) printf("1");
      else printf("0");
      print[k] = 0;
    }
    flag =1;
    printf(" (fib)\n");

  }
  //print("%d\n",fib[i]);
  return 0;
}
