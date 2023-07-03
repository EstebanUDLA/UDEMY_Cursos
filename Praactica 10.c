#include <stdio.h>

int main(void) {

  int suma=0, contador=0, numero=-1;
  float promedio;

  while (numero!=0){
    printf("Introduzca un numero diferente de 0: ");
    scanf("%d",&numero);
    contador++;
    suma += numero;
  }

  promedio=suma/contador;
  printf("La suma de todos los numeros es: %d",suma);
  printf("\nEl promedio es: %.2f",promedio);
  return 0;
}