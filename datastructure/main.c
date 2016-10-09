#include<stdio.h>
#include<stdlib.h>

struct A{
  int data;
};

int push(struct A a[], int *foo, int val){
  if(*foo==10)
    return 0;
  else
    a[(*foo)++].data = val;
  return 1;
  
}

int pop(struct A  a[], int* foo){
  int value;
  if(*foo==0)
    return -1;
  else{
    value = a[--(*foo)].data;
  }
  return value;
}

struct B{
  int data;
  struct B* next;
};

struct List{
  struct B *front, *rear;
  int cap;
};

int queueIsEmpty(struct List *lt){
  
}
int enqueue(struct List *lt, int val){
}

int dequeue(struct List *lt){
}
void initqueue(struct List *lt){
  lt->cap = 0;
  lt->front = lt->rear = NULL;
}
int main(){
  struct B b[10];
  struct List lt;
  initqueue(&lt);
  for(int i=0;i<9;i++){
    b[i].next = &b[i+1];
    b[i].data = i;
  }
  b[9].data = 9;
  b[9].next = &b[0];
  
  printf("b[2]:%d\n", b[1].next->data);

  //printf("Enqueue:\n");
  //for(int i=0;i<10;i++)
  //  enqueue(&lt, i);
  //printf("\nDequeue:\n");
  //for(int i=0;i<10;i++)
  //  printf("%d, ",dequeue(&lt));
  //printf("\nSTACK\n");

  struct A a[10];
  int top=0;
  push(a, &top, 13);
  push(a, &top, 51);
  printf("%d, ",pop(a, &top));
  printf("%d, ",pop(a, &top));
  printf("%d\n",pop(a, &top));

  return 0;
}
