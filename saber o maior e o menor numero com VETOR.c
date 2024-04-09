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
  
  int numeros [5], i, maiorNumero, menorNumero;

  for(i = 0; i < 5; i++) {
    printf("Digite o %dº número: ", i + 1);
    scanf("%d",&numeros[i]);
  }
  
  menorNumero = numeros[0];
  maiorNumero = numeros[0];
    
  for(i = 1; i < 5; i++) {
    if (numeros [i] < menorNumero) {
      menorNumero = numeros[i];
    } if (numeros[i] > maiorNumero) {
      maiorNumero = numeros[i];
    }
  }
  
  printf("\nNúmeros informados:\n");
  for (i = 0; i < 5; i++) {
    printf("%dº número: %d\n", i + 1, numeros[i]);
  }
  
  printf("\nMaior número: %d\n", maiorNumero);
  printf("Menor número: %d\n", menorNumero);
  return 0;
}