#include <stdio.h>

 int main (void) {
     int valoresrecebidos;
     int valorespagos;
     int saldo;


     printf("Qual o valor das receitas em um mês?: \n");
     scanf("%d", valoresrecebidos);
     printf("Qual o valor das despesas em um mês?: \n");
     scanf("%d", valorespagos);
     printf("O seu saldo vais ser: \n");
     scanf("%d", saldo);

     saldo = valoresrecebidos - valorespagos;

     



     
 }