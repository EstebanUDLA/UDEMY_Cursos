#include <stdio.h>

void multiplicarVector(int *vector, int numeroElementos,int numero);

int main(void) {

  int vector[10]={1,2,3,4,5,6,7,8,9,10};
  multiplicarVector(&vector[0], 10, 3);
  for (int i=0; i<10;i++){
    printf("%d ",vector[i]);
  }
  return 0;
}

void multiplicarVector(int *vector, int numeroElementos,int numero){
  for (int i=0;i<numeroElementos;i++){
  *(vector+i)=*(vector+i)*numero;
}
}