#include <locale.h>
#include <strings.h>
#include <stdio.h>
#include <stdlib.h>

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil");

    char nome[20], estadoc[20], estudo[20], moradia[20];
    int idade;

    printf("Ol�!\nQual � o seu nome?\n");
    scanf("%s", &nome);

    printf("Quantos anos voc� tem?\n");
    scanf("%i", &idade);

    printf("Onde voc� estuda?\n");
    scanf("%s", &estudo);

    printf("Qual � o seu estado civil?\n");
    scanf("%s", &estadoc);

    printf("Onde voc� mora?\n");
    scanf("%s", &moradia);

    printf("Ok!\n%s, voc� tem %i anos, estuda no %s, voc� � %s e mora em %s!\nBoa sorte em sua vida!", nome, idade, estudo, estadoc, moradia);

}