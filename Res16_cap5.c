#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");
  
  //Calcular área de um triangulo
  
  float base=0, altura=0;
  
 
  while(base<=0){
      printf("Insira uma entrada válida para base:\n>");
      scanf("%f", &base);
  }
  
   while( altura<=0){
      printf("Insira uma entrada válida para altura:\n>");
      scanf("%f", &altura);
  }
  
  
  printf("A área do triângulo é: %.2f", base*altura);
  
    return 0;
}