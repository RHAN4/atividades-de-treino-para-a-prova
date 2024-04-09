#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <limits.h>
#include <string.h>

int soma (int priNumero, int segNumero) {
  return priNumero + segNumero;
}

int subtracao (int priNumero, int segNumero) {
  return priNumero - segNumero;
}

int multiplicacao (int priNumero, int segNumero) {
  return priNumero * segNumero;
}

float divisao(int priNumero, int segNumero) {
  if (segNumero != 0) {
    return (float)priNumero / segNumero;
  } else {
    printf("Erro: divisão por zero não é permitida.\n");
    return 0;
  }
}

void cabecalho () {
  printf("\n== SENAI ==\n");
}

int main() {
  cabecalho();
  setlocale(LC_ALL, "");
  int num1, num2;

  printf("Digite o primeiro número: ");
  scanf("%d",&num1);
  printf("\nDigite o segundo número: ");
  scanf("%d",&num2);

  printf("\nSoma: %d\n", soma(num1, num2));
  printf("Subtração: %d\n", subtracao(num1, num2));
  printf("Multiplicação: %d\n", multiplicacao(num1, num2));

  if (num2 != 0) {
    printf("Divisão: %.2f \n", divisao(num1, num2));
  }
  
  return 0;
  
}
