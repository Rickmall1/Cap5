#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int num, i, cont = 0;

  // Esse algoritmo me fez pensar bastante
  // As vezes a resposta est� na ponta do nosso nariz
  // Tenho que lembrar de simplificar ao inv�s de "complexar"

  // Algoritmo para identificar n�meros primos
  printf("Digite um n�mero inteiro maior que 1: \n");
  scanf("%d", &num);

  for (i = 1; i <= num; i++)
  {

    if ((num % i == 0))
    {
      // Toda vez que um n�mero tiver resto inteiro (divis�o perfeita)
      // O contador � incrementado
      cont++;
    }
  }

  if ((cont <= 2))
  {
    printf("� primo\n");
  }
  else
  {
    printf("N�o � primo\n");
  }

  return 0;
}