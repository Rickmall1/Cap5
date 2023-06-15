#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  float peso, altura;
  int idade = 0;
  int sub18 = 0;
  int mediaIdade = 0;
  float mediaAltura = 0;
  float sobrePeso = 0;

  // Variavel de controle
  int i = 0;

  while (i < 55)
  {
    i++;

    // USAR VIRGULA OU PONTO DEPENDENDO DO IDE;

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite o seu peso: \n");
    scanf("%f", &peso);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    if ((idade < 18))
    {
      sub18++;
    }

    mediaIdade = mediaIdade + idade;

    mediaAltura = mediaAltura + altura;

    if ((peso > 80))
    {
      sobrePeso++;
    }
  }

  // Calculando porcentagem com regra de 3
  sobrePeso = ((sobrePeso * 100.0) / 55.0);

  printf("Jogadores com menos de 18 anos: %d\n", sub18);
  printf("Media das idades: %d\n", mediaIdade);
  printf("Media das alturas: %.2f\n", mediaAltura);
  printf("Porcentagem de jogadores com mais de 80kg: %.2f%%\n", sobrePeso);

  return 0;
}