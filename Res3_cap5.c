#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int n, j, i, num, fat;

  // N�MERO DE VEZES QUE VAI RODAR O FATORIAL DE QUALQUER N�MERO QUE VC ESCOLHER
  // EX: 5
  // O algoritmo vai soliciar 5 n�meros e vai calcular o valor de cada;
  printf("Digite um n�mero inteiro e positivo de vezes para saber o fatorial de outros n�meros: \n");
  scanf("%d", &n);

  // Acho muito complicado trabalhar com fatorial, vou me esfor�ar para aprender;
  for (i = 1; i <= n; i++)
  {
    printf("Digite o n�mero para saber seu fatorial: \n");
    scanf("%d", &num);
    fat = 1;
    for (j = 1; j <= num; j++)
    {
      fat = fat * j;
    }
    printf("fatorial de %d: %d\n", num, fat);
  }
  return 0;
}