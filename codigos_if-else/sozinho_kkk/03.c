#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{

    setlocale(LC_ALL, "Portuguese_Brazil");

    float n1, n2, resultado;
    int oper;

    printf("Ol�, digite um n�mero!\n");
    scanf("%f", &n1);

    printf("Digite outro n�mero:\n");
    scanf("%f", &n2);
    
    printf("Digite a op��o desejada:\n1 - Adi��o\n2 - Subtra��o\n3 - Multiplica��o\n4 - Divis�o\n\n");
    scanf("%i", &oper);

    if (oper == 1)
    {
        resultado = n1 + n2;
        printf("O resultado da soma �: %.2f!", resultado);
    }

    else if (oper == 2)
    {
        resultado = n1 - n2;
        printf("O resultado da subtra��o �: %.2f", resultado);
    }

    else if (oper == 3)
    {
        resultado = n1 * n2;
        printf("O resultado da multiplica��o �: %.2f", resultado);
    }

    else
    {
        resultado = n1 / n2;
        printf("O resultado da divis�o �: %.2f", resultado);
    }
    
    
    
}