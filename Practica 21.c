#include <stdio.h>
#include <math.h>
const double M_PI = 3.14159265358979323846;

int main(void) {

  struct cilindro{
    float diametro;
    float carrera;
  };

  struct motor {

    int identificador;
  struct cilindro cilindro1;
  int numCilindros;
  float cilindrada;
  };

  struct motor motor1;
  printf("Introduce el identificador: ");
  scanf("%d",&motor1.identificador);
  printf("\nIntroduce el diametro del cilindro: ");
  scanf("%f",&motor1.cilindro1.diametro);
  printf("\nIngrese la carrera del cilindro: ");
  scanf("%f",&motor1.cilindro1.carrera);
  printf("\nIngrese el numero de cilindros: ");
  scanf("%d",&motor1.numCilindros);

  motor1.cilindrada=(motor1.numCilindros*(motor1.cilindro1.carrera/10)*M_PI*pow((motor1.cilindro1.diametro/10),2))/4;
  printf("Identificador: %d",motor1.identificador);
    printf("Diametro (mm): %.2f",motor1.cilindro1.diametro);
  printf("Carrera (mm): %.2f",motor1.cilindro1.carrera);
  printf("N° Cilindro: %d",motor1.numCilindros);
  printf("Cilindrada: %.2f",motor1.cilindrada);
  
  return 0;
}