#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese_Brazil");

    int n1;

    printf("Ol�, seja bem-vindo a ferramenta de verifica��o de n�meros inteiros primos!\nDigite seu n�mero:\n");
    scanf("%i", &n1); //tendi n

    if (n1 % 1 && n1 % n1)
    {
        printf("O n�mero %i � primo!", n1);
    }
    
    else
    {
        printf("O n�mero %i n�o � primo!", n1);
    }
}