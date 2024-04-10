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

    int numeros[6];

    for (int i = 0; i < 6; i++) {
        do {
            printf("Digite o %dº número inteiro positivo e par: ", i + 1);
            scanf("%d", &numeros[i]);
            if (numeros[i] <= 0 || numeros[i] % 2 != 0) {
                printf("Por favor, digite um valor inteiro positivo e par.\n");
            }
        } while (numeros[i] <= 0 || numeros[i] % 2 != 0);
    }

    printf("\nValores em ordem inversa:\n");
    for (int i = 5; i >= 0; i--) {
        printf("%dº número: %d\n", 6 - i, numeros[i]);
    }

    return 0;
}