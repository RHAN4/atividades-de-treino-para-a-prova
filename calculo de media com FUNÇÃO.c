#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <limits.h>
#include <string.h>

//Escrever um programa de computador que solicite do usuário 5 números inteiros e, ao final, apresente a soma de todos os números lidos.

float media (float numero1, float numero2) {
  float resultado;
  resultado = (numero1 + numero2) / 2;
  return (resultado);
}

void cabecalho () {
  printf("\n== SENAI ==\n");
}

int main() {
  cabecalho();
  setlocale(LC_ALL, "");
  float num1, num2;

  printf("\nDigite a primeira nota: ");
  scanf("%f",&num1);
  printf("\nDigite a segunda nota: ");
  scanf("%f",&num2);

  printf("\nA média é: %.2f \n", media(num1, num2));
  
  return 0;
}