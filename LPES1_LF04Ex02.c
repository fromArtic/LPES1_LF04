#include <stdio.h>
#include <stdlib.h>

int main() {
    int idade;
    float peso, gotas;

    printf("Informe sua idade: ");
    scanf("%d", &idade);

    printf("Agora, informe seu peso, em kg: ");
    scanf("%f", &peso);

    gotas = 500/20;

    if(peso < 5) {
        printf("\nO paciente esta abaixo do peso minimo necessario para utilizar o medicamento.\nFavor, consultar um especialista.\n\n");
    }
    else {
        if(idade >= 12) {
            if(peso >= 60) {
                printf("\nBaseado em sua faixa etaria e seu peso, a dosagem do medicamento devera ser de %.1f gotas.\n\n", 1000/gotas);
            }
            else {
                printf("\nBaseado em sua faixa etaria e seu peso, a dosagem do medicamento devera ser de %.1f gotas.\n\n", 875/gotas);
            }
        }
        else {
            if(peso <= 9) {
                printf("\nBaseado em sua faixa etaria e seu peso, a dosagem do medicamento devera ser de %.1f gotas.\n\n", 125/gotas);
            }
            if((peso <= 16) && (peso > 9)) {
                printf("\nBaseado em sua faixa etaria e seu peso, a dosagem do medicamento devera ser de %.1f gotas.\n\n", 250/gotas);
            }
            if((peso <= 24) && (peso > 16)) {
                printf("\nBaseado em sua faixa etaria e seu peso, a dosagem do medicamento devera ser de %.1f gotas.\n\n", 375/gotas);
            }
            if((peso <= 30) && (peso > 24)) {
                printf("\nBaseado em sua faixa etaria e seu peso, a dosagem do medicamento devera ser de %.1f gotas.\n\n", 500/gotas);
            }
            if(peso > 30) {
                printf("\nBaseado em sua faixa etaria e seu peso, a dosagem do medicamento devera ser de %.1f gotas.\n\n", 750/gotas);
            }
        }
    }

    system("PAUSE");
    return 0;
}
