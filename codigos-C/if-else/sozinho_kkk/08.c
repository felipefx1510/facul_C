#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{

    setlocale(LC_ALL, "Portuguese_Brazil");

    float n1, desconto, valor;
    desconto = 0.10;

    printf("Ol�, digite o pre�o do produto:\n");
    scanf("%f", &n1);

    if (n1 >= 100)
    {
        valor = (n1 * desconto) + n1;
        printf("V�lido para o desconto!\nO valor final com o desconto de dez por cento �: R$ %.2f.", valor);
    }
    
    else
    {
        printf("Infelizmente seu valor n�o � v�lido para o desconto! O valor ainda �: R$ %.2f.", n1);
    }
}