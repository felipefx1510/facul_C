#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <strings.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int a, b, aux;

    printf("Ol�, digite um n�mero que ser� 'a':\n");
    scanf("%i", &a);

    printf("Agora, digite outro n�mero que ser� 'b':\n");
    scanf("%i", &b);

    aux = a;
    a = b;
    b = aux;

    printf("HAHAHA!!\nPedadinha do malandro!\nAgora 'a' � igual a 'b' e 'b' igual a 'a'\nVeja:\na = %i\nb = %i", a, b);

}   
