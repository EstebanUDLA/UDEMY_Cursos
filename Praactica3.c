#include <stdio.h>

int main(void) {

  float base, altura, area;
  
  printf("Introduzca la base del triangulo: ");
  scanf("%f", &base);
  printf("Introduzca la altura del triangulo: ");
  scanf("%f", &altura); 

  area =(base*altura)/2;
  printf("El area del triangulo de base %.2f y altura %.2f es: %.2f",base, altura,area);
  return 0;
}