#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0)); // Seed for random number generation
    int numero_secreto = 1 + rand() % 100; // Generate a random number between 1 and 100
    int palpite = 0;

    printf("Adivinhe o número secreto entre 1 e 100.\n");

    while (palpite != numero_secreto) {
        printf("Digite seu palpite: ");
        scanf("%d", &palpite);

        if (palpite < numero_secreto) {
            printf("O número secreto é maior. Tente novamente.\n");
        } else if (palpite > numero_secreto) {
            printf("O número secreto é menor. Tente novamente.\n");
        }
    }

    printf("Parabéns! Você acertou o número secreto %d.\n", numero_secreto);

    return 0;
}
           