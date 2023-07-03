#include <stdio.h>

int main(void) {
  float euros, pesetas;
  printf("Introduce los euros que desea convertir: ");
  scanf("%f",&euros);
  pesetas=euros*166.386;

  printf("%.2f euros equivalen a %.2f pesetas",euros,pesetas);
  return 0;
}