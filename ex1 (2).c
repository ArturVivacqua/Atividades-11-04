//Exercício 1

#include <stdio.h>

float parametro(float x, float y){
 float maior;
  if (x>y){
    maior = x;
  }else{
    maior = y;
  }return maior;
    }

int main(void) {
  float n1, n2, nm;
  printf("\nDigite o primeiro numero:\t");
  scanf("%f", &n1);

  printf("\nDigite o segundo numero:\t");
  scanf("%f", &n2);

  nm = parametro(n1, n2);
  printf("\nO maior número é %.2f", nm);
  
  return 0;
}