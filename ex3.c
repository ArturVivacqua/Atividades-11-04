#include <stdio.h>
//Exercício 3
float cf(float x){
float temperatura;
temperatura = (9*x/5)+32;
return temperatura;
}
float fc(float x){
float temperatura;
temperatura = (x-32)*5/9;
return temperatura;
}
float ck(float x){
float temperatura;
temperatura = x + 273.15;
return temperatura;
}
float kc(float x){
float temperatura;
temperatura = x - 273.15;
return temperatura;
}
float cr(float x){
float temperatura;
temperatura = x*4/5;
return temperatura;
}
float rc(float x){
float temperatura;
temperatura = x*5/4;
return temperatura;
}
float kr(float x){
float temperatura;
temperatura = x * 1.8;
return temperatura;
}
float rk(float x){
float temperatura;
temperatura = x/1.8;
return temperatura;
}

int main(){
 float t, tf;
 int m1, m2;

 printf("\nDigite o valor da temperatura:\t");
 scanf("%f", &t);

printf("\n1 - Celsius");
printf("\n2 - Fahrenheit");
printf("\n3 - Kelvin");
printf("\n4 - Réaumur");
printf("\n5 - Rankine");
 
  
 printf("\nO valor da temperatura está em qual escala?\t");
 scanf("%d", &m1);

 printf("\nDeseja converter o valor para qual escala?\t");
 scanf("%d", &m2);

while (m1>5||m2>5||m1<1||m2<1){

  printf("\nValor inválido, tente novamente\t");

  printf("\nO valor da temperatura está em qual escala?\t");
  scanf("%d", &m1);

  printf("\nDeseja converter o valor para qual escala?\t");
  scanf("%d", &m2);
  
}

  if (m1 == 1&& m2 ==2){
    tf = cf(t);
    printf("A temperatura é de %.2fF", tf);
  } else if (m1 == 2&& m2 ==1){
    tf = fc(t);
    printf("A temperatura é de %.2fC", tf);
  } else if (m1 == 1&& m2 ==3){
    tf = ck(t);
    printf("A temperatura é de %.2fK", tf);
  }else if (m1 == 3&& m2 ==1){
    tf = kc(t);
    printf("A temperatura é de %.2fC", tf);
  }
  else if (m1 == 1&& m2 ==4){
    tf = cr(t);
    printf("A temperatura é de %.2fRe", tf);
  }else if (m1 == 4&& m2 ==1){
    tf = rc(t);
    printf("A temperatura é de %.2fC", tf);
  }else if (m1 == 3&& m2 ==5){
    tf = kr(t);
    printf("A temperatura é de %.2fR", tf);
  }else if (m1 == 5&& m2 ==3){
    tf = rk(t);
    printf("A temperatura é de %.2fK", tf);
  }else{
    printf("Operação inválida");
  }
  
  
  
  
  
  
  
return 0;
}