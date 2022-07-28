#include <stdio.h>
#include <stdlib.h>

int main() {
    int mes, placa, n_final;

    printf("Informe o mes atual: ");
    scanf("%d", &mes);

    if((mes > 12) || (mes < 0)) {
        printf("Por favor, informe um mes valido.\n\n");
    }
    else {
    printf("Agora, informe os quatro digitos numericos da placa de seu veiculo: ");
    scanf("%d", &placa);

    n_final = placa % 10;

    if((n_final == mes) || (n_final == 0) && (mes == 10)) {
        printf("\nVence nesse mes o IPVA de seu veiculo.\n\n");
    }
    else {
        printf("\nNao eh esse o mes condizente a data de expiracao do IPVA de seu veiculo.\n\n");
    }}

    system("PAUSE");
    return 0;
}
