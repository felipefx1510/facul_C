#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese_Brazil");

    int idade;

    printf("Ol�, seja bem-vindo ao sistema de vota��o!\nDigite a sua idade para comer�armos:\n");
    scanf("%i", &idade);

    if (idade >= 18)
    {
        printf("Maior de 18! Pode prosseguir.");
    }

    else
    {
        printf("Menor de 18! Infelizmente voc� n�o poder� votar.");
    }
    

}