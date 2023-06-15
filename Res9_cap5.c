#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int nota1, nota2, media;

  int i = 0;
  int aprov = 0;
  int exame = 0;
  int reprov = 0;
  int cont = 0;

  while (i < 6)
  {
    i++;

    printf("Digite a primeira nota: \n");
    scanf("%d", &nota1);

    printf("Digite a segunda nota: \n");
    scanf("%d", &nota2);

    media = nota1 + nota2 / 2;

    // Contador para a classe
    cont = cont + nota1 + nota2;
    printf("Sua média é: %d\n", media);

    if ((media < 3))
    {
      printf("Reprovado\n");
      reprov++;
    }
    else if ((media >= 3 && media < 7))
    {
      printf("Exame\n");
      exame++;
    }
    else
    {
      printf("Aprovado\n");
      aprov++;
    }
  }

  // Media total da classe
  cont = cont / 6;

  printf("Total de aprovados: %d\n", aprov);
  printf("Total de exame: %d\n", exame);
  printf("Total de reprovados: %d\n", reprov);
  printf("Média da classe: %d", cont);

  return 0;
}