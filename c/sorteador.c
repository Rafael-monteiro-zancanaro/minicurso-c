#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>



int main(void) {
  srandom(time(NULL));

  int random_number = (random() % 11) + 1;

  printf("Numero sorteado: %d\n", random_number);

  return EXIT_SUCCESS;
}
