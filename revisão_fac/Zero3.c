#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <strings.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    float pol = 0.393701;
    float cent;
    printf("Ol�!\nSeja bem-vindo ao conversor de medidas.\nCent�metros ->> Polegadas\nDigite o tamanho, por favor:\n");
    scanf("%f", &cent);

    printf("Ok! Pelos meus c�lculos...\n%.2f cent�metros em polegadas � igual a:�%.2f polegadas", cent, (cent*pol));

}