#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{

    setlocale(LC_ALL, "Portuguese_Brazil");

    int n1;

    printf("Ol�, digite um n�mero inteiro qualquer!\n"); 
    scanf("%i", &n1);

    if (n1 >= 0)
    {
        printf("Seu n�mero � positivo!!");
    }

    else if (n1 < 0)
    {
        printf("Seu n�mero � negativo!");
    }
      
}