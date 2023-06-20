#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float kid_born, time_life, gender, kid_m = 0, kid_f = 0, kid24 = 0;

    printf("Digite o número de crianças nascidas no período: \n");
    scanf("%f", &kid_born);

    int i = 0;

    for (; i < kid_born; i++) {

        printf("Digite o sexo da criança:\n1--MASCULINO\n2--Feminino\n");
        scanf("%f", &gender);

        printf("Digite o tempo de vida da criança em meses: \n");
        scanf("%f", &time_life);

        if ((time_life <= 24)) {
            kid24++;
        }

        if ((gender == 1)) {
            kid_m++;
        } else if ((gender == 2)) {
            kid_f++;
        }
    }

    kid_m = (kid_m * kid_born) / 100.0;
    kid_f = (kid_f * kid_born) / 100.0;
    kid24 = (kid24 * kid_born) / 100.0;

    printf("Porcentagem de crianças do sexo feminino mortas: %.2f%%\n", kid_f);
    printf("Porcentagem de crianças do sexo masculino mortas: %.2f%%\n", kid_m);
    printf("Porcentagem de crianças que viveram 24 meses ou menos no período: %.2f%%\n", kid24);

    return 0;
}