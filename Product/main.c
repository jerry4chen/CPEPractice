#include <stdio.h>
#include <stdlib.h>

int max2(int* arr2){
  int max=0;
  for(int i=0;i<500;i++){
    max = (arr2[max]>arr2[i])? max:i;
  }
  printf("max2:%d\n", max);
 return max;
}
int max1(int* arr1){
  int max=0;
  for(int i=0;i<500;i++){
    max = (arr1[max]>arr1[i])? max:i;
  }
  printf("max1:%d\n", max);
  return max;
}

int main(){
  int i = 0;
  int j = 0;
  unsigned arr1[500]={0};
  unsigned arr2[500]={0};
  unsigned arrp[500]={0};
  unsigned a;
  char c;
  char s1[250];
  char s2[250];
  int len1 =0;
  int len2 =0;
  int len=0;
  
  while(scanf("%s\r\n%s\r\n",s1,s2)!=EOF){
    //printf("%s: %d\n%s: %d\n",s1,strlen(s1),s2,strlen(s2));
    len1 = strlen(s1);
    len2 = strlen(s2);
    for(int i=len1-1;i>=0;i--)
      arr1[len1-1-i]=s1[i]-48;
    for(int j=len2-1;j>=0;j--)
      arr2[len2-1-j]=s2[j]-48;  
    //for(int i =0; i<len1; i++)
    //  printf("%d, ", arr1[i]);
    //  printf("\n");
    //for(int i =0; i<len2; i++)
    //  printf("%d, ", arr2[i]);
    
    for(int i =0; i<len1; i++)
      for(int j =0; j<len2; j++){
        arrp[i+j] += arr1[i]*arr2[j];
       // printf("arrp[%d+%d]:%d\n",i,j,arrp[i+j]);
      }
    for(int i=0; i<len1+len2-1;i++){
      if(arrp[i]>9){
        arrp[i+1]+=arrp[i]/10;
        arrp[i] = arrp[i]%10;
        len=i+1;
        //printf("len:%d\n",len);
      }
      if(i>len)
        len = i;
        //printf("len:%d\n",len);

    }

    for(int i = len; i>=0; i--)
      printf("%d", arrp[i]);
    printf("\n");

    len = 0;
    for(int i=0;i<250;i++){
      s1[i]="";
      s2[i]="";
    }
    for(int i =0; i <500; i++){
      arr1[i]=0;
      arr2[i]=0;
      arrp[i]=0;
    }
  }
  return 0; 
}
