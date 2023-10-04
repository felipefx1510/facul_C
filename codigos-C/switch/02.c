#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <strings.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int unidadei, unidadef;
    float valor, conversao;

    printf("Ol�, seja bem-vindo a calculadora de convers�o de unidades de medida!\n");
    printf("Qual � a sua unidade inicial?\n1. Metros\n2. Cent�metros\n3. Polegadas\n");
    scanf("%i", &unidadei);

    switch (unidadei)
    {
        case 1: // metros
            printf("Ok, e qual � a unidade de destino?\n"); // selecao principal
            printf("1. Cent�metros\n2. Polegadas\n");
            scanf("%i", &unidadef);
            switch (unidadef)
            {
                case 1: // metros para cent�metros
                    printf("Digite o valor a ser convertido:\n");
                    scanf("%f", &valor);
                    conversao = valor * 100;
                    printf("%.2f metros convertido para cent�metros �: %.2f", valor, conversao);
                    break;

                case 2: // metros para polegadas
                    printf("Digite o valor a ser convertido:\n");
                    scanf("%f", &valor);
                    conversao = valor * 39.37;
                    printf("%.2f metros convertido para polegadas �: %.2f", valor, conversao);
                    break;
                
                default:
                    printf("Sele��o inv�lida. Tente novamente!");
                    break;
            }
            break;

        case 2: // cent�metros
            printf("Ok, e qual � a unidade de destino?\n"); // sele��o principal
            printf("1. Metros\n2. Polegadas\n");
            scanf("%i", &unidadef);
            switch (unidadef)
            {
                case 1: // cent�metros -> metros
                    printf("Digite o valor a ser convertido:\n");
                    scanf("%f", &valor);
                    conversao = valor / 100;
                    printf("%.2f cent�metros convertido para metros �: %.2f", valor, conversao);
                    break;

                case 2: // cent�metros -> polegadas
                    printf("Digite o valor a ser convertido:\n");
                    scanf("%f", &valor);
                    conversao = valor / 2.54;
                    printf("%.2f cent�metros convertidos para polegadas �: %.2f", valor, conversao);
                    break;

                default:
                    printf("Sele��o inv�lida. Tente novamente!");
                    break;
            }
            break;

        case 3: // polegadas
            printf("Ok, e qual � a unidade de destino?\n"); // sele��o principal
            printf("1. Metros\n2. Cent�metros\n");
            scanf("%i", &unidadef);
            switch (unidadef)
            {
                case 1: // polegadas -> metros
                printf("Digite o valor a ser convertido:\n");
                scanf("%f", &valor);
                conversao = valor / 39.37;
                printf("%.2f polegadas convertido para metros �: %.2f", valor, conversao);
                break;

                case 2: // polegadas -> cent�metros
                printf("Digite o valor a ser convertido:\n");
                scanf("%f", &valor);
                conversao = valor * 2.54;
                printf("%.2f polegadas convertido para cent�metros �: %.2f", valor, conversao);
                break;

                default:
                printf("Sele��o inv�lida. Tente novamente!");

            }
            break;
    }
}
