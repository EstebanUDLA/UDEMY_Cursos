#include <stdio.h>

int main(void) {
  for (int i=0; i<=100; i++){
    if(i%3==0){
      printf("%d-",i);
    }
  }
  return 0;
}