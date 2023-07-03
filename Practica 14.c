#include <stdio.h>

int main(void) {
  char cadena1[50],cadena2[50],cadena3[50],cadena4[50];

  printf("Introduzca la cadena 1\n");
  gets(cadena1);
  printf("Introduzca la cadena 1\n");
  gets(cadena2);
  printf("Introduzca la cadena 1\n");
  gets(cadena3);
  printf("Introduzca la cadena 1\n");
  gets(cadena4);
  
  printf("%s-%s-%s-%s",cadena1,cadena2,cadena3,cadena4);
  return 0;
}