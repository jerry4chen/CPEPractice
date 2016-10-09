#include <stdio.h>
int a,b,c,d;
int m,n,p,q;
int main(){
  while(scanf("%d%d%d%d",&a,&b,&c,&d)){
    if(b!=c){
      printf("Error\n");  
      break;
    }
    else{
      int array1[a][b];
      int array2[c][d];
      int arrayresult[a][d];
      //init array1
      for(int i=0; i<a; i++){
        for(int j=0;j<b; j++){
          scanf("%d", &array1[i][j]);
        }
      }
      //init array2
      for(int i=0; i<c; i++){
        for(int j=0;j<d; j++){
          scanf("%d", &array2[i][j]);
        }
      }

      //compute arrayresult
      for(int i=0; i<a; i++){
        for(int j=0;j<d; j++){
          arrayresult[i][j]= 0;
          for(int k=0;k<b;k++)
            arrayresult[i][j] += array1[i][k]*array2[k][j];

          printf("%d ", arrayresult[i][j]);
        }
        printf("\n");
      }


    }
}


}
