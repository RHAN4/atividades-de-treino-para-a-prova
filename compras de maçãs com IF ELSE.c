#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <locale.h>
#include <ctype.h>

//Elabore um algoritmo para resolver a seguinte questão:
//As maçãs custam R$ 1,30 cada se forem compradas menos de uma
//dúzia, e R$ 1,00 se forem compradas pelo menos 12.
//Escreva um programa que leia o número de maçãs compradas,
//calcule e escreva o custo total da compra.

void cabecalho () {
  system("clls || clear");
  printf("== SENAI ==\n");
  fflush(stdin);
}

int main() {
cabecalho();
setlocale(LC_ALL, "");
  int numeroMacas;
  float total;

  printf("Digite a quantidade de maçãs compradas: ");
  scanf("%d",&numeroMacas);

  if(numeroMacas < 12) {
    total = numeroMacas * 1.30;
  } else {
    total = numeroMacas * 1.00;
  }
  
  printf("Custo total da compra: R$%.2f", total);
    return 0;
}