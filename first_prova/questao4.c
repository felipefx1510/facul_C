#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int seginicial, minutos, segfinal;

    printf("Quantos segundos o v�deo possui?\n");
    scanf("%d", &seginicial);

    minutos = seginicial/60;
    segfinal = seginicial-(minutos*60);

    printf("O tempo em minutos �: %d:%02d\n", minutos, segfinal);
}