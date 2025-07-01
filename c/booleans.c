#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int idade = 13;

  int ehDoze = idade == 12;

  if (ehDoze) {
    puts("Eh doze msm");  
  } else {
    puts("Nao eh doze");
  }

  printf("Valor literal ehDoze: %d\n", ehDoze);


  return EXIT_SUCCESS;
}
