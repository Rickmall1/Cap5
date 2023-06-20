#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char **argv)
{

    int num = 0, num2 = 1, cont = 0, result;

    // Varíavel de controle cont
    while (cont < 8)
    {
        cont++;

        // Sequencia de fibonnaci
        result = num + num2;
        num = num2;
        num2 = result;

        // Impressão
        printf("res: %d\n", result);
    }
    return (0);
}
