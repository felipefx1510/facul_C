#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <strings.h>

int main()
{

    setlocale(LC_ALL, "Portuguese_Brazil");

    int n1;

    printf("Ol�! Seja bem-vindo a calculadora da tabuada dos n�meros!\nQual tabuada deseja ver?\n");
    scanf("%i", &n1);

    printf("Certo! A tabuada � a seguinte\n"); //n sei como faz uma �nica linha ou menos do que 10

    printf("%ix1 = %i\n", n1, (n1*1));
    printf("%ix2 = %i\n", n1, (n1*2));
    printf("%ix3 = %i\n", n1, (n1*3));
    printf("%ix4 = %i\n", n1, (n1*4));
    printf("%ix5 = %i\n", n1, (n1*5));
    printf("%ix6 = %i\n", n1, (n1*6));
    printf("%ix7 = %i\n", n1, (n1*7));
    printf("%ix8 = %i\n", n1, (n1*8));
    printf("%ix9 = %i\n", n1, (n1*9));
    printf("%ix10 = %i\n", n1, (n1*10));

}