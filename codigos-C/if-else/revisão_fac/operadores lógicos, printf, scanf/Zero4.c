#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <strings.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    char nome[20];
    float valinicial, taxa, tempo;


    printf("Ol�! Qual � o seu nome?\n");
    scanf("%s", nome);

    printf("%s, veja bem...\nPara calcularmos o seu juros, precisaremos de alguns dados, ok?\nPrimeiro, qual � o valor principal?\n");
    scanf("%f", &valinicial);

    printf("Ok! E qual � a porcentagem anual de juros?\n");
    scanf("%f", &taxa);

    printf("E por quantos anos voc� ficar� pagando?\n");
    scanf("%f", &tempo);

    printf("Entendi. S� um momento...\nConforme informado, o valor total do que voc� pagar� �: R$ %.2f", (valinicial+(valinicial*(taxa/100)*tempo)));

}