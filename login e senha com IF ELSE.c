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

//Elabore um algoritmo para receber o login e senha de um usuário.
//Caso o usuário e senha estejam corretos, mostre a mensagem “Bem-
//vindo!”, caso contrário, mostre a mensagem “Login ou senha inválidos.”

int main() {
cabecalho();
setlocale(LC_ALL, "");
  char login[20], senha[20], loginCa[20] = "Rhana", senhaCa[20] = "1234";

  printf("Digite o seu login: ");
  scanf("%s",login);
  printf("Digite a sua senha: ");
  scanf("%s",senha);

  if (strcmp(login, loginCa) == 0 && strcmp(senha, senhaCa) == 0) {
      printf("Bem vindo (a)!");
  } else {
      printf("Login ou senha inválido.");
  }
    return 0;
}