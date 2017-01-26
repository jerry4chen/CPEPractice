/**
* from geeksforgeeks:
* http://www.geeksforgeeks.org/design-a-stack-that-supports-getmin-in-o1-time-and-o1-extra-space/
*/

#include<stdio.h>
#include<stdlib.h>
#define MAX 1000

struct haha {
  int minEle;
  int len;
  int stack[MAX];
};

struct haha *stack;
///= malloc(sizeof(struct haha));

int push(int x){
  if(stack->len==0){
    stack->stack[stack->len]=x;
    stack->len +=1;
    stack->minEle = x;
  }else{
    if(x >= stack->minEle){
      stack->stack[stack->len]=x;
      stack->len++;
    }
    else{
      int tmp = 2*x - stack->minEle;
      stack->minEle = x;
      stack->stack[stack->len] = tmp;
      stack->len++;
    }
  }
  return stack->len;

}

int pop(){
  int y = stack->stack[stack->len];
  int tmp=0;
  if(y >= stack->minEle){
    stack->stack[stack->len]=0;
    stack->len --;
    return y;
  }else{
    stack->stack[stack->len]=0;
    stack->len --;
    tmp = stack->minEle;
    stack->minEle = 2*stack->minEle - y;
    return tmp;
  }
}

int main(){
  stack = (struct haha*)malloc(sizeof(struct haha));
  stack->len = 0 ;
  int array[6] = {3,5,2,1,1,-1};
  printf("insert\t\tstack\t\t\tminEle\n");
  for(int i =0;i<6;i++){
    push(array[i]);
    printf("%2d  \t\t",array[i]);
    for(int j=0;j<=stack->len;j++){
      printf("%2d ",stack->stack[j]);
    }
    printf("\t\t\t %2d  \n",stack->minEle);
  }
  
  printf("removednum\t\toriginalnum\t\tminEle\n");
  for(int i =0;i<6;i++){
    int org = stack->stack[stack->len];
    int rm = pop();
    printf("  %2d  \t\t\t  %2d   \t\t\t %2d  \n",org,rm,stack->minEle);
  }
  //push(stack,5566);
  //push(stack,9527);
  //push(stack,9453);
  //push(stack,113);
  


  return 0;
}
