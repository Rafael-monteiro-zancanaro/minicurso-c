#include <stdio.h>
#include <stdlib.h>


int main(void) {
  
  int qtde_alunos = 12;

  int* alunos_ptr = NULL; // Ponteiro não aterrado -> PERIGOSO!!!!!
  

  printf("Endereco de memoria do qtde_alunos: %p\n", &qtde_alunos);

  printf("Onde alunos_ptr ta apontando??? %p\n", alunos_ptr);

  alunos_ptr = &qtde_alunos; // Vinculamos alunos_ptr a quantidade de alunos

  printf("Onde alunos_ptr ta apontando agora??? %p\n", alunos_ptr);

  return EXIT_SUCCESS;
}
