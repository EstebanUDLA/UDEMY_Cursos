
#include <stdio.h>

int main(void) {

  char cadena[50];
  char caracter;
  int i=0;
  int pos=-1;
  
  printf("Introduzca una cadena\n");
  gets(cadena);
  printf("Introduzca un caracter\n");
  caracter=getchar();

  while (cadena[i]!='\0'&& pos==-1){
    if (cadena[i]==caracter){
      pos=i;
    }
    i=i+1;
  }

  if(pos != -1){
    printf("El caracter %c se encuentra en la cadena %s en la posicion %d",caracter, cadena, pos);
  }
  else{
    printf("El caracter %c no se encuentra en la cadena %s",caracter,cadena);
  }
  return 0;
}