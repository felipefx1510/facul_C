#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    char nome[20];
    printf("Oi, qual � o seu nome?\n");
    scanf("%s", &nome);
    
    printf("\nOl�, %s!!!!!\n\nSeja bem-vindo(a) ao nosso sistema!", nome);
}