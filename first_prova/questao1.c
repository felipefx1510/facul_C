#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <locale.h>

int main(){

  setlocale(LC_ALL, "Portuguese_Brazil");

  float total, taxa, pessoas, fim, fimp, fimstx;

  printf("Ol�, qual foi o total da conta?\n");
  scanf("%f", &total);

  taxa = 0.10;

  printf("Quantas pessoas ir�o pagar a conta?\n");
  scanf("%f", &pessoas);

  fim = (total*taxa)+total;
  fimp = fim/pessoas;
  fimstx = total/pessoas;

  printf("Este � o valor total: R$ %.2f\n", fim);

  printf("Este � o valor que cada um ir� pagar com a taxa do gar�om: R$ %.2f\n", fimp);

  printf("Este � o valor que cada um ir� pagar sem a taxa do gar�om; R$ %.2f\n", fimstx);

}
