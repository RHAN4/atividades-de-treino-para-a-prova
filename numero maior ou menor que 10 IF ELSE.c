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

//Elabore um algoritmo para ler um valor e escrever a mensagem:
//É MAIOR QUE 10! se o valor lido for maior que 10, caso contrário
//escrever “NÃO É MAIOR QUE 10!

int main() {
cabecalho();
setlocale(LC_ALL, "");

  int numero;

  printf("Digite o valor: ");
  scanf("%i",&numero);

  if (numero > 10) {
    printf("O número é maior que 10!");
  } else {
    printf("O número é menor que 10!");
  }
  
    return 0;
}