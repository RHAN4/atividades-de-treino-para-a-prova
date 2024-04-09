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
  int nota [3];

  for(int i = 0; i < 3; i++) {
    printf("Digite %dº nota: ", i + 1);
    scanf("%d",&nota[i]);
  }

  printf("\nNotas informadas: \n");
  for(int i = 0; i < 3; i++) {
    printf("%dº nota: %d\n", i + 1, nota[i]);
  }
  return 0;
}