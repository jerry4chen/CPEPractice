#include<stdio.h>

int findMax(int a, int b){
  return (a>b)?a:b;
}

int findMin(int a, int b){
  
  return (a<b)?a:b;
}

int main(){
  char s;
  int max=0;
  int min=0;
  int tmp=0;
  int count[256] = {0};
  while(scanf("%c",&s)!=EOF){
    if(s=='\n' || s=='\r'){
      
      // sorting
      // find max 
      for(int i=0;i<256;i++){
        max = findMax(max, count[i]);
      }
      min = max;
      for(int i=0;i<256;i++){
        if(count[i]>0)
          min = findMin(min, count[i]);
      }
      while(min<=max){
        for(int i = 255; i>=0; i--){
          if(count[i]==min){
            printf("%d %d\r\n",i, count[i]);
            count[i]=0;
          }
          else if(i==0){
            min++;
          }
        }
      }
      printf("\r\n");
      // clear 
      //for(int i=0; i<256;i++){
      //  count[i]=0;  
      //}
    }
    else{
      count[(int)s]++;
    }
    
  
  }


}
