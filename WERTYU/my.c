#include <stdio.h>

int main(){
  char b;
  int i;
//  char arr[]="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
  char arr[]= {'`','1','2','3','4','5','6','7','8','9','0','-','=','Q','W','E','R','T','Y','U','I','O','P','[',']','\\','A','S','D','F','G','H','J','K','L',';','\'','Z','X','C','V','B','N','M',',','.','/'};
  
  while(scanf("%c",&b)!=EOF){
    if(b== ' ' || b== '\n')  
      printf("%c",b);
    else{
      for(i=0;b!=arr[i]||b=='\0';i++);
        //printf("%d:",i);
        //printf("%c\t",arr[i-1]);
        printf("%c",arr[i-1]);
    }
  }
}
