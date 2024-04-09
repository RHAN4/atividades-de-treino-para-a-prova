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
  
  int nota [4], soma = 0, contador = 0, media = 0;

  for(int i = 0; i < 4; i++) {
    printf("Digite %dº nota: ", i + 1);
    scanf("%d",&nota[i]);

    soma += nota[i];
    contador++;
  }

  printf("\nNotas informadas: \n");
  for(int i = 0; i < 4; i++) {
    printf("%dº nota: %d\n", i + 1, nota[i]);
    
  }
  
  media = soma / contador;

  printf("Média: %d", media);
  
   if (media >= 7) {
      printf("\nAprovado\n");
    } else if (media >= 5) {
      printf("\nRecuperação\n");
    } else {
      printf("\nReprovado\n");
    }
  
  return 0;
}