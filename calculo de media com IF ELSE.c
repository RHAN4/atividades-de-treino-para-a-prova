#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <locale.h>
#include <ctype.h>

void cabecalho () {
  system("clls || clear");
  printf("== SENAI ==\n");
  fflush(stdin);
}

//Elabore um algoritmo para ler o nome de um aluno, sua idade
//(em anos) e as três notas. Calcular a média do aluno.
//Caso a média do aluno seja menor que 7, o aluno está reprovado.
//Mostrar: nome, idade, média e se está aprovado ou reprovado.

int main() {
cabecalho();
setlocale(LC_ALL, "");

  char nome [50];
  int idade;
  float priNota, segNota, terNota, media;

  printf("Digite o seu nome: ");
  scanf("%s",nome);
  printf("Digite a sua idade: \n");
  scanf("%i",&idade);
  printf("Digite a sua primeira nota: \n");
  scanf("%f",&priNota);
  printf("Digite s sua segunda nota: \n");
  scanf("%f",&segNota);
  printf("Digite s sua terceira nota: \n");
  scanf("%f",&terNota);

  media = (priNota + segNota + terNota) / 3;

  if (media > 7) {
    printf("\nAluno aprovado!");
  } else {
    printf("\nAluno reprovado.");
  }
  printf("Nome: %s \n", nome);
  printf("Idade: %i \n", idade);
  printf("Média: %.2f \n", media);

    return 0;
}