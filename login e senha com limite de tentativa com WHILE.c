#include <stdio.h>
#include <string.h>

int main() {
    char login_correto[] = "usuario";
    char senha_correta[] = "12345";
    char login[50], senha[50];
    int tentativas = 3;

    while (tentativas > 0) {
        printf("Login: ");
        scanf("%s", login);
        printf("Senha: ");
        scanf("%s", senha);

        if (strcmp(login, login_correto) == 0 && strcmp(senha, senha_correta) == 0) {
            printf("Acesso permitido!\n");
            break;
        } else {
            printf("Login ou senha incorretos. Tente novamente.\n");
            tentativas--;
        }
    }

    if (tentativas == 0) {
        printf("Você excedeu o número de tentativas. Programa encerrado.\n");
    }

    return 0;
}