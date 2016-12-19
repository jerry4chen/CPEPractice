#include <stdio.h>
#include <string.h>
int counts[10] = {0,0,0,0,0,0,0,0,0,0};
int hands[10] = {0,0,0,0,0,0,0,0,0,0};
static int c[10] =  {0,1,1,1,0,0,1,1,1,1};
static int d[10] =  {0,1,1,1,0,0,1,1,1,0};
static int e[10] =  {0,1,1,1,0,0,1,1,0,0};
static int f[10] =  {0,1,1,1,0,0,1,0,0,0};
static int g[10] =  {0,1,1,1,0,0,0,0,0,0};
static int a[10] =  {0,1,1,0,0,0,0,0,0,0};
static int b[10] =  {0,1,0,0,0,0,0,0,0,0};

static int C[10] =  {0,0,1,0,0,0,0,0,0,0};
static int D[10] =  {1,1,1,1,0,0,1,1,1,0};
static int E[10] =  {1,1,1,1,0,0,1,1,0,0};
static int F[10] =  {1,1,1,1,0,0,1,0,0,0};
static int G[10] =  {1,1,1,1,0,0,0,0,0,0};
static int A[10] =  {1,1,1,0,0,0,0,0,0,0};
static int B[10] =  {1,1,0,0,0,0,0,0,0,0};

void update(int *prev, int* note, int* coco ){
  for(int i=0;i<10;i++){
    //printf("%d %d %d, ", prev[i], note[i], coco[i]);
    if(note[i] ==1 && prev[i] ==0)
      coco[i]++;
  }
  //printf("\n");
}
int main(){
  char notes[201];
  int input;
  int *previous = hands;
  int *thisnote = hands;
  scanf("%d\n",&input);
  for(int i =0;i<input ; i++){
    gets(notes);
    //printf("%d: %s\n",strlen(notes), notes);
    if(strlen(notes)!=0){
      /*for (int i=0;  i<10;i++){
        switch(notes[0]){
        case 'c': previous = c; break;
        case 'd': previous = d; break;
        case 'e': previous = e; break;
        case 'f': previous = f; break;
        case 'g': previous = g; break;
        case 'a': previous = a; break;
        case 'b': previous = b; break;
        case 'C': previous = C; break;
        case 'D': previous = D; break;
        case 'E': previous = E; break;
        case 'F': previous = F; break;
        case 'G': previous = G; break;
        case 'A': previous = A; break;
        case 'B': previous = B; break;
        }
        }*/
      for(int i = 0 ; i<strlen(notes) ; i++){
        switch(notes[i]){
        case 'c': thisnote = c; update(previous, thisnote, counts); previous = c; break;
        case 'd': thisnote = d; update(previous, thisnote, counts); previous = d; break;
        case 'e': thisnote = e; update(previous, thisnote, counts); previous = e; break;
        case 'f': thisnote = f; update(previous, thisnote, counts); previous = f; break;
        case 'g': thisnote = g; update(previous, thisnote, counts); previous = g; break;
        case 'a': thisnote = a; update(previous, thisnote, counts); previous = a; break;
        case 'b': thisnote = b; update(previous, thisnote, counts); previous = b; break;
        case 'C': thisnote = C; update(previous, thisnote, counts); previous = C; break;
        case 'D': thisnote = D; update(previous, thisnote, counts); previous = D; break;
        case 'E': thisnote = E; update(previous, thisnote, counts); previous = E; break;
        case 'F': thisnote = F; update(previous, thisnote, counts); previous = F; break;
        case 'G': thisnote = G; update(previous, thisnote, counts); previous = G; break;
        case 'A': thisnote = A; update(previous, thisnote, counts); previous = A; break;
        case 'B': thisnote = B; update(previous, thisnote, counts); previous = B; break;  

        }
      }
      previous = hands;
      for(int i=0;i<9;i++){
        printf("%d ", counts[i]);
        counts[i] =0;
      }
      printf("%d\n", counts[9]);
      counts[9]=0;
    }
    else{
      for(int i=0;i<9;i++)
        printf("0 ");
      printf("0\n");
    }

  }

  return 0;
}
