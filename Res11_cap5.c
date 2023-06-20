#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int num, i, cont = 0;

  // Esse algoritmo me fez pensar bastante
  // As vezes a resposta está na ponta do nosso nariz
  // Tenho que lembrar de simplificar ao invés de "complexar"

  // Algoritmo para identificar números primos
  printf("Digite um número inteiro maior que 1: \n");
  scanf("%d", &num);

  for (i = 1; i <= num; i++)
  {

    if ((num % i == 0))
    {
      // Toda vez que um número tiver resto inteiro (divisão perfeita)
      // O contador é incrementado
      cont++;
    }
  }

  if ((cont <= 2))
  {
    printf("é primo\n");
  }
  else
  {
    printf("Não é primo\n");
  }

  return 0;
}