#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");

    float n1, n2, n3, p1, p2, p3, total;

    printf("Ol�, digite uma nota:\n");
    scanf("%f", &n1);
    printf("Qual o peso da nota?\n");
    scanf("%f", &p1);

    printf("Ol�, digite a segunda nota:\n");
    scanf("%f", &n2);
    printf("Qual o peso da nota?\n");
    scanf("%f", &p2);

    printf("Ol�, digite a terceira nota:\n");
    scanf("%f", &n3);
    printf("Qual o peso da nota?\n");
    scanf("%f", &p3);

    total = (n1*p1+n2*p2+n3*p3)/(p1+p2+p3);
    
    printf("Est� ser� a m�dia ponderada: %.2f\n", total);


    return 0;


}
