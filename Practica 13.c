#include <stdio.h>

int main(void) {
  int informacion[3][4] = {{1,120,150,220},{2,130,160,230},{3,100,120,200}};
  int sumaBaja=0, sumaMedia=0,sumaAlta=0;
  float tempBaja=0, tempMedia=0, tempAlta=0;
  
  for(int i=0;i<3;i++){
    for (int j=1; j<4;j++){
      if(j==1){
        sumaBaja += informacion[i][j];
      }
      else if (j==2){
        sumaMedia+=informacion[i][j];
      }
      else if (j==3){
        sumaAlta+=informacion[i][j];
      }
    }
  }
  tempBaja=sumaBaja/3;
  tempMedia=sumaMedia/3;
  tempAlta=sumaAlta/3;

  printf("El promedio de temporada baja es: %.2f\nEl promedio de temporada media es: %.2f\nEl promedio de temporada alta es: %.2f\n",tempBaja,tempMedia,tempAlta);
  return 0;
}