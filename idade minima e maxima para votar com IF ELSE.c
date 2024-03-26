#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <locale.h>
#include <ctype.h>

void cabecalho () {
  system("clls || clear");
  printf("== SENAI ==\n");
  fflush(stdin);
}
//Elabore um algoritmo usando operações lógicas para informar se
//uma pessoa é obrigada a votar.
//Considere que a regra é que menores de 18 e maiores que 65 não
//são obrigados a votar.

int main() {
cabecalho();
setlocale(LC_ALL, "");
  int idade, idadeMin, idadeMax;

  printf("Digite a sua idade: ");
  scanf("%d",&idade);

  if (idade >= 18 && idade <= 65) {
    printf("É obrigado a votar.");
  } else {
    printf("Não é obrigado a votar.");
  }
    return 0;
}