#include<stdio.h>

#define S  0
#define T  1
#define E  2

int main(){

  int a,b,c,d,tmp;
  int dice[3]={5,1,4};
  char s[10];
  while(scanf("%d\n",&a)!=EOF){
    //printf("%d\n",a);
    if(a>0){
      for(b=0;b<a;b++){
        scanf("%s\n", s);
        switch(s[0]){
        case 'n':
          //North
          tmp = dice[T];
          dice[T] = dice[S];
          dice[S] = 7 - tmp;  
          break;
        case 's':
          //South
          tmp = dice[S];
          dice[S] = dice[T];
          dice[T] = 7-tmp;
          break;
        case 'e':
          //East
          tmp = dice[E];
          dice[E] = dice[T];
          dice[T] = 7-tmp;
          break;
        case 'w':
          //west
          tmp = dice[T];
          dice[T] = dice[E];
          dice[E] = 7-tmp;
          break;
        }
      }//end of for
      printf("%d\n",dice[T]);
      dice[S]=5;
      dice[T]=1;
      dice[E]=4;
    }//end of if
  }//end of while
  return 0;
}

