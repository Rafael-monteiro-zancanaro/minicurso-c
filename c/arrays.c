#include <stdio.h>
#include <stdlib.h>


int main(void) {
  
  int array_nao_inicializado[5] = { 0 };

  for (int i = 0; i < 5; i++) {
    printf("%d\n", array_nao_inicializado[i]);
    printf("%p\n", &(array_nao_inicializado[i]));
  }


  return EXIT_SUCCESS;
}
