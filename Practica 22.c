#include <stdio.h>

int main(void) {

  int total=0;
  
  struct horaEntrada{
    int hora;
    int minuto;
  };
  struct entrada{
    struct horaEntrada hora1;
    int asistencia;
    float precio;
  };

  struct entrada e1;
  char continuar ='s';
  while(continuar=='s'){
    printf("Introduce la hora de entrada: ");
    scanf("%d",&e1.hora1.hora);
    printf("\nIntroduce los minutos de entrada: ");
    scanf("%d",&e1.hora1.minuto);
    printf("\nIntroduce el numero de asistentes: ");
    scanf("%d",&e1.asistencia);
  

  for (int i=0;i<e1.asistencia;i++){
    int edad;

    printf("Introduce la edad del asistente %d: ",i+1);
    scanf("%d",&edad);

    if(edad<6){
      total=total+0;
    }else if (edad>=6 && edad <=15){
      total=total+5;
    }else if(edad>=16 && edad <=26 || edad >65){
      total=total + 8;
    } 
  }

  if (e1.asistencia>=5){
    e1.precio=total-(total*0.1);
  } 
  else{
    e1.precio=total;
  }
  printf("Precio de las entradas del grupo: %.2f",e1.precio);
  printf("\n¿Quiere continuar con otro grupo? S/N: ");
  scanf("%c",&continuar);
    while(continuar=='\n'){
      scanf("%c",&continuar);
    }
  }

  printf("\nGracias");
  
  return 0;
}