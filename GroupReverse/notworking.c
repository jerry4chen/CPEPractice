#include <stdio.h>
#include <string.h>

int main(){

  int a;
  int len;
  char s[100];

  while(scanf("%d %s\n", &a, s)!=EOF&&a!=0){
    //printf("%d %s\n",a,s);
    len = strlen(s);
    a = len/a;
    for (int i=a-1;i<=len;i+=a){
      for(int j=i;j>i-a;j--)
      {
        printf("%c", s[j]);
        s[j]=0;
      }
    }
    printf("\n");

  }
  return 0;
}

