#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int main() {
    int n_jogador, n_cpu, result;
    char choice_jogador[MAX];

    printf("JOGO DE PAR OU IMPAR\n\nInforme um numero, de 0 a 5: ");
    scanf("%d", &n_jogador);

    if ((n_jogador < 0) || (n_jogador > 5)) {
        printf("O numero escolhido eh invalido.\n\n");
    }
    else {
        srand(time(NULL));
        n_cpu = rand() % 6;

        printf("Par ou impar? ");
        scanf("%s", &choice_jogador);

        if((strcmp(choice_jogador, "par") == 0) || (strcmp(choice_jogador, "impar") == 0)) {
            result = n_jogador + n_cpu;

            if((strcmp(choice_jogador, "par") == 0) && (result % 2 == 0) || (strcmp(choice_jogador, "impar") == 0) && (result % 2 != 0)) {
                printf("\nSeu numero: %d\nNumero do CPU: %d\nSoma: %d. Voce ganhou!\n\n", n_jogador, n_cpu, result);
            }
            else {
                printf("\nSeu numero: %d\nNumero do CPU: %d\nSoma: %d. Voce perdeu.\n\n", n_jogador, n_cpu, result);
            }
        }
        else {
            printf("A escolha que informou eh invalida. Nao utilize acentos.\n\n");
        }
    }

    system("PAUSE");
    return 0;
}
