#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <limits.h>
#include <string.h>

void cabecalho () {
  printf("\n== SENAI ==\n");
}

int main() {
  cabecalho();
  setlocale(LC_ALL, "");
  int numero, soma = 0, contador = 0;
  
  printf("Digite um número inteiro positivo ou um número negativo para sair:\n");
  scanf("%d", &numero);
  
  while (numero >= 0) {
      soma += numero;
      contador++;
      printf("Digite um número inteiro positivo ou um número negativo para sair:\n");
      scanf("%d", &numero);
  }
  
  if (contador > 0) {
      float media = (float) soma / contador;
      printf("\nMédia aritmética dos números informados: %.2f\n", media);
  } else {
      printf("\nNenhum número foi inserido.\n");
  }
  return 0;
  
}