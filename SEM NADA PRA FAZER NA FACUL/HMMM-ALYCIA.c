#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
  setlocale (LC_ALL, "");
  float valor, juros, vc, meses, total;
  printf("Ol�, bem-vindo � calculadora de juros\nQual o valor que ser� pago?\n");
  scanf("%f", &valor);

  printf("Certo, agora me diga qual o valor do juros:\n");
  scanf("%f", &juros);
  juros = juros/100;
  vc = valor*juros;
  
  printf("Quantos meses voc� ficar� pagando?\n");
  scanf("%f", &meses);
  total = (vc*meses)+valor;
  printf("Obrigado pelas informa��es, este ser� o valor que voc� pagar� no final:%.2f\n", total);

}