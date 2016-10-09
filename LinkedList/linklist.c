#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  int data;
  struct node *next;
} NODE;

struct A {
  int data;
  struct A next;
} a; // a[10];

void dump(NODE* list){
  printf("list datas: [");
  NODE* tmp= list;
  while(tmp){
    printf("%d, ",tmp->data);
    tmp = tmp->next;
  }
//  for(int i=0; i<10; i++){
//    printf("%d, ",list[i].data);
//  }
  printf("]\n");
}

int length(NODE* list){
  printf("lenth");
  int count=0;
  NODE *q = list->next;
  while(q!=NULL){
    count++;
    q = q->next;
  }
  return count;
}

NODE* reverse(NODE *root){
  NODE *nroot = NULL;
  while(root){
    NODE *next = root->next;
    root->next = nroot;
    nroot = root;
    root = next;
  }
  printf("\n");
  return nroot;
}

int main(){

  NODE *list = (NODE*)malloc(sizeof(NODE)*10);
  for(int i=0; i<10; i++){
    list[i].data = i;
    if(i<9)
    list[i].next = &list[i+1];
  }
//  printf("lenth2");
  dump(list);
  NODE *reversed = reverse(list);
  dump(reversed);
  dump(reverse(reversed));
  free(list);
  return 0;
}


