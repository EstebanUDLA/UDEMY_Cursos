#include <stdio.h>

int main(void) {
  float pesos[5];
  float suma=0, promedio;
  int contMayor=0,contMenor=0;

  for(int i=0;i<5;i++){
    printf("Introduzca un peso para almacenarlo: ");
    scanf("%f",&pesos[i]);
    suma += pesos[i];
  }
  promedio=suma/5;

  for (int i=0;i<5;i++){
    if (pesos[i]>=promedio){
      contMayor++;
    }
    else{
      contMenor++;
    }
  }
  printf("El promedio es: %.2f", promedio);
  printf("\nEl N° de pesos mayores o iguales al promedio es: %d",contMayor);
  printf("\nEl N° de pesos menores o iguales al promedio es: %d",contMenor);
  return 0;
}