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
  int pares = 0, impares = 0, somaPares = 0,     somaImpares = 0, contadorPares = 0, contadorImpares = 0;
  int numero, mediaGeral = 0, contador = 0, soma = 0, mediaPares = 0, mediaImpares = 0;

    printf("Digite um número: ");
    scanf("%i",&numero);
  
  while (numero != 0) {
    if (numero > 0) {
      if (numero % 2 == 0) {
        pares++;
        somaPares += numero;
        contadorPares++;
      } else {
        impares++;
        somaImpares += numero;
        contadorImpares++;
      }
    }
    printf("Informe um número: ");
    scanf("%d",&numero);
  }
    if (pares > 0) {
      mediaPares = somaPares / (float) pares;
    } if (impares > 0) {
      mediaImpares = somaImpares / (float) impares;
    } if (pares + impares > 0) {
      mediaGeral = (somaPares + somaImpares) / (float) (pares + impares);
    }

  printf("\nQuantidade de pares: %i\n", pares);
  printf("Quantidade de impares: %i\n", impares);
  printf("Média pares: %i\n", mediaPares);
  printf("Média impares: %i\n", mediaImpares);
  printf("Média geral: %i\n", mediaGeral);
  
  return 0;
  
}