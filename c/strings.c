#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main(void) {
  char nome[10] = "Ana";

  char nome2[10] = "Rafael";

  char telefone[10] = "48022";

  char resultado[300] = { '\0' };

  snprintf(resultado, 300, "Digite %s + %s para %s", nome, nome2, telefone);

  puts(resultado);

  return EXIT_SUCCESS;
}
