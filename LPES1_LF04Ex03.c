#include <stdio.h>
#include <stdlib.h>

int main() {
    float valorI, valorF;
    int mtd_pagamento;

    printf("Informe o valor total da compra: ");
    scanf("%f", &valorI);

    printf("\nTecle (e confirme) o numero respectivo ao metodo de pagamento que deseja utilizar:\n\t1: a vista, em dinheiro ou cheque\n\t2: a vista, no cartao de credito\n\t3: Em duas vezes\n\t4: Em tres vezes\n\n\t");
    scanf("%d", &mtd_pagamento);

    if(mtd_pagamento == 1) {
        valorF = valorI * 0.9;
        printf("\nSua condicao de pagamento condiz a um desconto de dez porcento.\nAssim, efetuando o desconto sobre o preco inicial, de %.1f reais, seu total a pagar sera: %.1f reais.\n\n", valorI, valorF);
    }

    if(mtd_pagamento == 2) {
        valorF = valorI * 0.95;
        printf("\nSua condicao de pagamento condiz a um desconto de cinco porcento.\nAssim, efetuando o desconto sobre o preco inicial, de %.1f reais, seu total a pagar sera: %.1f reais.\n\n", valorI, valorF);
    }

    if(mtd_pagamento == 3) {
        valorF = valorI;
        printf("\nSua condicao de pagamento condiz ao valor normal da etiqueta, sem juros.\nAssim, seu total a pagar sera: %.1f reais.\n\n", valorF);
    }

    if(mtd_pagamento == 4) {
        valorF = valorI + valorI/10;
        printf("\nSua condicao de pagamento condiz a um juros de dez porcento sobre o valor normal da etiqueta.\nAssim, com o juros somado ao preco inicial, de %.1f reais, seu total a pagar sera: %.1f reais.\n\n", valorI, valorF);
    }

    system("PAUSE");
    return 0;
}
