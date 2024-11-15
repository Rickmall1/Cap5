#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, m,i,soma;

    do{
        printf("\nInsira o valor de m e n:\n>");
        scanf("%d %*c %d", &m,&n);
        soma=0;
        
        for(i=m;i<=n;i++){
            soma+=i;
        }
        printf("\n Soma: %d", soma);
    }while(m<n);

    return (EXIT_SUCCESS);
}

