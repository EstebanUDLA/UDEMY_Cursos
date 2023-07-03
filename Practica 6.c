#include <stdio.h>

int main(void) {
  float precioTotal, consumo;
  int precioBase, kilometraje;

  printf("Ingrese el precio base del vehiculo: ");
  scanf("%d",&precioBase);
  printf("\nIngrese el kilometraje del vehiculo: ");
  scanf("%d",&kilometraje);  
  printf("Ingrese el consumo del vehiculo: ");
  scanf("%f",&consumo);

  
  if(kilometraje<20000 && consumo<=5){
    precioTotal=precioBase*1.2;
  }
  else if (kilometraje>20000 && consumo<=5){
    precioTotal=precioBase*1.1;
  }
  else if (consumo>5){
    precioTotal=precioBase*1.05;
  }
  printf("El precio final del vehiculo es: %.2f",precioTotal);
  return 0;
}