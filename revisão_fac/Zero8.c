#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <strings.h>

int main()
{

    setlocale(LC_ALL, "Portuguese_Brazil");

    float real, resultado;
    double dolar;
    dolar = 4.86;  

    printf("Ol�! Seja bem-vindo ao sistema de convers�o de real para dol�r!\nQual � o valor que voc� deseja converter?\n");
    scanf("%f", &real);

    resultado = (real/dolar);

    printf("Na cota��o atual, R$ %.2f � equivalente a US$ %.2f", real, resultado);




}