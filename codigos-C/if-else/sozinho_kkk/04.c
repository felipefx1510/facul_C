#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese_Brazil");

    float n1, n2, n3;

    printf("Ol�, digite as medidas do tri�ngulo separadamente por espa�o:\n");
    scanf("%f %f %f", &n1, &n2, &n3); // descobri que posso fazer assim

    if (n1 == n2 && n1 == n3)
    {
        printf("O tri�ngulo � equil�tero.");
    }
    
    else if (n1 == n2 || n1 == n3)
    {
        printf("O tri�ngulo � is�sceles.");
    }

    else
    {
        printf("O tri�ngulo � escaleno.");
    }    
}