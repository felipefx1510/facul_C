#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    float tempi;
    printf("Ol�, seja bem-vindo a calculadora de convers�o de Fahrenheit para Kelvin!\nQual � a temperatura em Fahrenheit?\n");
    scanf("%f", &tempi);
    printf("Ok! Este � o valor convertido para Kelvin: %.2f", (tempi-32)*5/9+273.15);
}
