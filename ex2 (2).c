//Exercício 2
#include <stdio.h>

float media(float x, float y, float z){
 float total;
 total = (x+y+z)/3;
 return total;
}
 

int main(void) {
  float n1, n2, n3, resultado;
  int na;
  char aluno[30];



  printf("\nQuantos alunos fazem parte da turma?\t");
  scanf("%d", &na);
  
  for(int i = 0; i < na; i++){

   printf("\nQual o nome do aluno?\t");
   scanf("%s", aluno);
   printf("%s", aluno);
    
   printf("\nDigite a primeira nota:\t");
   scanf("%f", &n1);

   printf("\nDigite a segunda nota:\t");
   scanf("%f", &n2);

   printf("\nDigite a terceira nota:\t");
   scanf("%f", &n3);

   resultado = media(n1, n2, n3);
   printf("\na média do aluno é %.2f", resultado);
   printf("\n--------------------------------------------");
   
  }
  

  return 0;
}