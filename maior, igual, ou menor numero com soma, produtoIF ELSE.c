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

//Elabore um algoritmo para receber dois inteiros como entrada do
//teclado e escreva na tela:
//A média, a soma, o produto, o menor valor e o maior valor.
//Além disso, verifique se os números informados pelo usuário são
//iguais.
//Usando uma linha para cada resultado.

int main() {
cabecalho();
setlocale(LC_ALL, "");
  int priNumero, segNumero;
  int media, soma, produto, menValor, maValor;

  printf("Digite o primeiro número: ");
  scanf("%i",&priNumero);
  printf("Digite o segundo número: ");
  scanf("%i",&segNumero);

  media = (priNumero + segNumero) / 2;
  soma = priNumero + segNumero;
  produto = priNumero * segNumero;

  if (priNumero > segNumero) {
      maValor = priNumero;
      menValor = segNumero;
  } else {
    maValor = segNumero;
    menValor = priNumero;
  } if (priNumero == segNumero) {
    printf("\nOs dois valores são iguais");
  }

  printf("\nA média é: %d", media);
  printf("\nA soma dos valores é: %d", soma);
  printf("\nO produto dos valores é: %d", produto);
  printf("\nMaior número: %d", maValor);
  printf("\nMenor número: %d", menValor);

    return 0;
}