#include <stdio.h>

int main (void) {

    int salario;
    int subsidioalimentaçao;
    int descontos;
    int salarioliquidos;

    printf("O seu salario: \n");
    scanf("%d", salario);
    printf("O seu subsidio de alimentaçao: \n");
    scanf("%d", subsidioalimentaçao);
    printf("Os seus descontos: \n");
    scanf("%d", descontos);
    printf("O salario liquido: \n");
    scanf("%d", salarioliquidos);

    salarioliquidos = salario + subsidioalimentaçao - descontos

}