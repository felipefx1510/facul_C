#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <strings.h>

int main()
{

    setlocale(LC_ALL, "Portuguese_Brazil");

    char op;
    float n1, n2, resultado;

    printf("Ol�, seja bem-vindo(a)!\n");
    printf("Qual opera��o iremos utilizar agora?\n");
    printf("Adi��o - '+'\n");
    printf("Subtra��o - '-'\n");
    printf("Multiplica��o - 'x'\n");
    printf("Divis�o - '/'\n");
    scanf("%c", &op);

    printf("Digite um n�mero:\n");
    scanf("%f", &n1);

    printf("Digite outro n�mero:\n");
    scanf("%f", &n2);

    switch (op)
    {
    case '+':
        resultado = n1 + n2;
        printf("O resultado da soma �: %.2f", resultado);
        break;
    
    case '-':
        resultado = n1 - n2;
        printf("O resultado da subtra��o �: %.2f", resultado);
        break;

    case 'x':
        resultado = n1 * n2;
        printf("O resultado da multiplica��o �: %.2f", resultado);
        break;
        
    case '/':
        resultado = n1 / n2;
        printf("O resultado da divis�o �: %.2f", resultado);
        break;

    default:
        printf("A opera��o selecionada � inv�lida. Tente novamente!");
        break;
    }





}