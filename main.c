/*
49. Entrar com dois números e imprimir todos os inteiros no intervalo entre o menor e
o maior.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Portuguese");

    int numero1, numero2, menorValor, maiorValor;

    printf("Informe o 1o número: ");
    scanf("%d", &numero1);

    printf("Informe o 2o número: ");
    scanf("%d", &numero2);

    if (numero1 < numero2) {
        maiorValor = numero2;
        menorValor = numero1;
    } else {
        maiorValor = numero1;
        menorValor = numero2;
    }

    for ( int i = menorValor; i <= maiorValor; i++ ) {
            printf("%d\n", i);
        }


 /*       if (numero1 < numero2) {
                for ( int i = numero1; i <= numero2; i++) {
                printf("%d\n", i);
                }
        } else {
                for ( int i = numero2; i <= numero1; i++) {
                printf("%d\n", i);
                }
        }
*/


}
