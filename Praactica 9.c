#include <stdio.h>

int main(void) {
  int numAlumnos;
  float nota;
  int contAprobado=0;
  int contSuspenso=0;
  printf("Ingrese el numero de alumnos: ");
  scanf("%d",&numAlumnos);

  for (int i=0;i<numAlumnos;i++){
    printf("Ingrese la nota del alumno: ");
  scanf("%f",&nota);
    if (nota>=5){
      contAprobado++;
    }
    else{
      contSuspenso++;
    }
  }

  printf("El numero de alumnos aprobados es: %d ",contAprobado);
  
  printf("\nEl numero de alumnos suspenso es: %d ",contSuspenso);
  
  return 0;
}   