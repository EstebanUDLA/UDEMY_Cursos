#include <stdio.h>

int main(void) {
  int dia;
  printf("Introduce un numero del 1-7: ");
  scanf("%d",&dia);

  switch(dia){
    case (1):
    printf("LUNES");
    break;
    case (2):
    printf("MARTES");
    break;
    case (3):
    printf("MIERCOLES");
    break;
    case (4):
    printf("JUEVES");
    break;
    case (5):
    printf("VIERNES");
    break;
    case (6):
    printf("SABADO");
    break;
    case (7):
    printf("DOMINGO");
    break;
    default:
    printf("Opcion Incorrecta");
    break;
  }
  
  return 0;
}