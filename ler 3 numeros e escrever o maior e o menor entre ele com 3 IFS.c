#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <locale.h>
#include <ctype.h>

//Elabore um algoritmo usando operações lógicas para ler 3
//números e escrever:
//• Os 3 números informados.
//• O maior número;
//• O menor número;

void cabecalho () {
  system("clls || clear");
  printf("== SENAI ==\n");
  fflush(stdin);
}

int main() {
cabecalho();
setlocale(LC_ALL, "");
  int priNumero, segNumero, terNumero;
  int maiNumero, menNumero;

  printf("Digite o primeiro número: ");
  scanf("%d",&priNumero);
  printf("Digite o segundo número: ");
  scanf("%d",&segNumero);
  printf("Digite o terceiro número: ");
  scanf("%d",&terNumero);

  maiNumero = priNumero;
  menNumero = priNumero;
  
  if (segNumero > maiNumero) {
      maiNumero = segNumero;
  }
  if (terNumero > maiNumero) {
      maiNumero = terNumero;
  }
  if (segNumero < menNumero) {
      menNumero = segNumero;
  }
  if (terNumero < menNumero) {
      menNumero = terNumero;
  }
  printf("\nOs 3 números informados são: %d, %d, %d\n", priNumero, segNumero, terNumero);
  printf("O maior número é: %d\n", maiNumero);
  printf("O menor número é: %d\n", menNumero);
    return 0;
}