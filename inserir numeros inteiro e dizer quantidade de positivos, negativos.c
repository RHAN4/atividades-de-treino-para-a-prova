#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>

int main () {
	setlocale(LC_ALL, "");
	int numero, qtdPositivos = 0;
	int pares = 0, impares = 0, qtdNumeros = 0, qtdNegativos = 0;
	
	fflush(stdin);
	
	do {
		fflush(stdin);
		printf("Digite o n�mero: \n");
		scanf("%i",&numero);	
	
	if (numero != 0) {
		qtdNumeros++;
	if (numero > 0) {
		qtdPositivos++;
	} if (numero % 2 == 0) {
		pares++;
	} else {
		impares++;
		}
	} else if (numero < 0) {
		qtdNegativos++;
	}
} while (numero != 0);

	printf("\nQuantidade de n�meros positivos: %i", qtdPositivos);
	printf("\nQuantidade de n�meros negativos: %i", qtdNegativos);
	printf("\nQuantidade de n�meros pares: %i", pares);
	printf("\nQuantidade de n�meros impares: %i", impares);
	printf("\nQuantidade de n�meros inseridos: %i", qtdNumeros);
	return 0;
}

