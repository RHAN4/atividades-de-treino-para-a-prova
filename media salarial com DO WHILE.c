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
  int codigo;
  int idade, maior_idade = 0, menor_idade = 999, cont_mulheres_salario = 0;
  char sexo;
  float salario, soma_salario = 0;
  int num_pessoas = 0;
  do {
      printf("\nCódigo | Descrição\n");
      printf("1      | Adicionar pessoa\n");
      printf("2      | Exibir resultados e sair\n");
      printf("Digite o código: ");
      scanf("%d", &codigo);
      if (codigo == 1) {
          num_pessoas++;
          printf("\nDigite a idade: ");
          scanf("%d", &idade);
          if (idade > maior_idade) {
              maior_idade = idade;
          }
          if (idade < menor_idade) {
              menor_idade = idade;
          }
          printf("Digite o sexo (M/F): ");
          scanf(" %c", &sexo);
          printf("Digite o salário: R$");
          scanf("%f", &salario);
          if (sexo == 'F' || sexo == 'f') {
              if (salario >= 5000) {
                  cont_mulheres_salario++;
              }
          }
          soma_salario += salario;
      }
  } while (codigo != 2);
  float media_salario = soma_salario / num_pessoas;
  printf("\nMédia de salário do grupo: R$%.2f", media_salario);
  printf("\nMaior idade do grupo: %d anos", maior_idade);
  printf("\nMenor idade do grupo: %d anos", menor_idade);
  printf("\nQuantidade de mulheres com salário a partir de R$ 5.000,00: %d\n", cont_mulheres_salario);

  return 0;
  
}