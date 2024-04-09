#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>
#include <limits.h>
#include <string.h>

int tabuada (int numero) {
  for(int i = 0; i <= 10; i++) {
    printf("%d x %d = %d \n", numero, i, numero * i);
  }
}

void cabecalho () {
  printf("\n== SENAI ==\n");
}

int main() {
  cabecalho();
  setlocale(LC_ALL, "");
  int num;
  
  printf("Digite um número para a tabuada: ");
  scanf("%d",&num);

  tabuada(num);
  
  return 0;
}