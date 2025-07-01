#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Carro {
  char marca[20];
  char modelo[20];
  int velocidade;
  bool ligado;
  char cor[10];
} Carro;


void ligar_carro(Carro* carro) {
  puts("Ligando carro");
  carro->ligado = true; // Carro ligado
}

void mostrar_nova_velocidade(Carro* carro) {
  printf("Nova velocidade do %s %s: %d %s\n", carro->marca, carro->modelo, carro->velocidade, carro->velocidade == 0? "(Inercia)": "");
}

void acelerar_carro(Carro* carro, int qtde_aceleracao) {
  if (!carro->ligado) {
    puts("Nao eh possivel acelerar um carro desligado");
    return;
  }
  puts("Acelerando carro!");
  carro->velocidade += qtde_aceleracao;
  mostrar_nova_velocidade(carro);
}

void frear_carro(Carro* carro, int qtde_frenagem) {
  if (!carro->ligado) {
    puts("Nao eh possivel frear um carro desligado");
    return;
  }

  if (carro->velocidade - qtde_frenagem <= 0) {
    carro->velocidade = 0;
    mostrar_nova_velocidade(carro);
    return;
  }

  puts("Freando carro!");
  carro->velocidade -= qtde_frenagem;
  mostrar_nova_velocidade(carro);
}


void desligar_carro(Carro* carro) {
  if (carro->velocidade != 0) {
    puts("Nunca desligue um carro em movimento!!!!!");
    return;
  }

  puts("Desligando carro");
  carro->ligado = false;
}


void informacoes_carro(Carro* carro) {
  puts("Informacoes do carro:");
  printf("Marca: %s\n", carro->marca);
  printf("Modelo: %s\n", carro->modelo);
  printf("Velocidade atual: %d\n", carro->velocidade);
  printf("Esta ligado? %s\n", carro->ligado? "Sim": "Nao");
  printf("Cor: %s\n", carro->cor);
}

int main(void) {
  
  Carro carro = {
    .marca = "Renault",
    .modelo = "Kwid",
    .velocidade = 0,
    .ligado = false,
    .cor = "Prata"
  };


  ligar_carro(&carro);

  acelerar_carro(&carro, 20);

  frear_carro(&carro, 10);

  desligar_carro(&carro); // Deve dar b.o
  
  frear_carro(&carro, 10);

  desligar_carro(&carro);

  informacoes_carro(&carro);

  return EXIT_SUCCESS;
}
