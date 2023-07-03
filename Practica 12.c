#include <stdio.h>

int main(void) {
  int numero[10]={4,7,9,75,-5,6,12,-18,0,1};
  int maximo=numero[0];
  int minimo=numero[0];

  for (int i=1;i<10;i++){
    if(numero[i]>maximo){
      maximo=numero[i];
    }
    else if(numero[i]<minimo){
      minimo=numero[i];
    }
  }
  printf("El valor maximo es: %d\nEl valor minimo es: %d",maximo,minimo);
  return 0;
}