#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese_Brazil");

    int ano;


    printf("Ol�, digite um ano:");
    scanf("%i", &ano);

    if ((ano % 4 == 0 && ano % 100 !=0))
    {
        printf("� um ano bissexto!");
    }

    else
    {
        printf("N�o � um ano bissexto!");
    }
    

}