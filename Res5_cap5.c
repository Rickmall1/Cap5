#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float main(float argc, char** argv) {

    float termos, x, num = 0, den = 1, mult = 0;

    printf("Digite o nº de termos: \n");
    scanf("%f", &termos);

    printf("Digite um valor positivo para X: \n");
    scanf("%f", &x);

    float aux = 0, i = 0, iter = 0;
    int expo;

    for (aux = 1; aux <= termos; aux++) {

        //Numerador
        expo = aux + 1;
        num = pow(x, expo);

        if ((expo % 2 == 0)) {
            num = num * (-1);
        }

        //Denominador
        den = den + iter;
        float cont = 1;

        for (float i = 1; i <= den; i++) {
            cont = i*cont;
        }

        if ((den == 1)) {
            iter = +1;
        } else if ((den == 4)) {
            iter = -1;
        }

        //Resultado
        mult = mult + (num / cont);
    }
    printf("S = %.2f\n", mult);

    return (EXIT_SUCCESS);
}

