#include <stdio.h>
#include <stdlib.h>

int main(){
  int array[100];
  int n = 0;
  int T = 0;
  int great =-1;
  int a, b;
  int tmp;
  scanf("%d\n",&T);
  for(int i =0;i<T;i++){
    scanf("%d\n",&n);
    for(int j =0;j<n;j++){
      scanf("%d",&array[j]);
    }
    
    for(int k=0;k<n-1;k++){
      for(int l=k+1;l<n;l++){
        a = array[k];
        b = array[l];
        if(a<b){
          a = a^b;
          b = a^b;
          a = a^b;
        }
        if(!(a%b)){
          tmp = a/b;
          for( int m = 0; m<n; m++){
            if(array[m] != b)
            if(array[m] == tmp){
              //printf("\t a:%d b:%d array[%d]: %d tmp:%d great:%d \n",a,b,m,array[m],tmp,great);
              if(great < a)
                great = a;
            }
          }
        }

      }
    }
    printf("%d\n",great); 
    for(int j =0;j<n;j++){
      array[j]=0;
    }
    great = -1;
  }

  return 0;
}
