#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <limits.h>
#include <string.h>

void cabecalho() {
    printf("\n== SENAI ==\n");
}

int main() {
    cabecalho();
    setlocale(LC_ALL, "");

    int numeros[6], i, pares = 0, impares = 0;

    for (i = 0; i < 6; i++) {
        printf("Digite o %dº número: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < 6; i++) {
        if (numeros[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("Números informados:\n");
    for (i = 0; i < 6; i++) {
        printf("%dº número: %d\n", i + 1, numeros[i]);
    }

    printf("Quantidade de pares digitados: %d\n", pares);
    printf("Quantidade de ímpares digitados: %d\n", impares);

    return 0;
}
  printf("Números informados:\n");
  for (i = 0; i < 6; i++) {
    printf("%dº número: %d\n", i + 1, numeros[i]);
  }
  
    printf("Quantidade de pares digitados: %d\n", pares);
  printf("Quantidade de impares digitados: %d\n", impares);
  
  return 0;
}