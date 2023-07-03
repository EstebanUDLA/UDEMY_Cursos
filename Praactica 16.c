#include <stdio.h>
#include <stdlib.h>
#include <string.h>

  struct jugador{
  char nombre [50];
  int edad;
  float altura;
  };

int main(void) {
  int opcion=-1;

  struct jugador jugadores[5];
    for (int i=0; i<5; i++){
      printf("Introduce el nombre del jugador: ");
      gets(jugadores[i].nombre);
      printf("\nIntroduce la edad del jugador: ");
      scanf("%d",&jugadores[i].edad);
      printf("\nIntroduce la altura del jugador: ");
      scanf("%f",&jugadores[i].altura);

      fflush(stdin);
    }
  while (opcion !=0){
  printf("Introduce la opción que deseas reañizar \n1.Listar jugadores \n2.Buscar Jugadores \n3.Jugador mas alto \n0.Salir\n ");
    scanf("%d",&opcion);
    fflush(stdin);

    if(opcion==1){
      for (int i=0; i<5;i++){
        printf("Jugador de nombre %s y altura %.2f\n",jugadores[i].nombre, jugadores[i].altura);
      }
    } else if (opcion==2){
      char nombre_jugador [50];
      printf("Introduce el nombre del jugador que desea buscar: ");
      gets(nombre_jugador);
      int encontrado =0;

      for (int i=0;i<5;i++){
        if(strcmp(jugadores[i].nombre, nombre_jugador)==0){
          encontrado =1;
          printf("La edad del jugador es %d y su altura es %.2f\n",jugadores[i].edad,jugadores[i].altura);
        }
        else if (encontrado==0){
          printf("Jugador no encontrado\n");
        }
      } 
    } else if (opcion ==3){
      float mayorAltura=jugadores[0].altura;
      char nombreMayoraltura[50];
      int edadMayoraltura=jugadores[0].edad;
      
      strcpy(nombreMayoraltura,jugadores[0].nombre);

      for (int i=0;i<5;i++){
        if(jugadores[i].altura>mayorAltura){
          strcpy(nombreMayoraltura, jugadores[i].nombre);
          edadMayoraltura=jugadores[i].edad;
          mayorAltura=jugadores[i].altura;
        }
      }
      printf("El nombre del jugador de mayor altura es %s y su edades %d\n",nombreMayoraltura,edadMayoraltura);
    }
    else if(opcion!=0 && opcion!=1 && opcion!=2 && opcion!=3){
      printf("Opcion incorrecta\n");
    }
    
  }
  return 0;
}