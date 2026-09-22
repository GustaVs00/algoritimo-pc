#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    int numero;
    int soma = 0;


    while (1) {
        printf("Digite um número: ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }


        if (numero % 2 != 0) {
            soma += numero;
        }
    }


    printf("Soma dos números ímpares: %d\n", soma);

    return 0;
}
