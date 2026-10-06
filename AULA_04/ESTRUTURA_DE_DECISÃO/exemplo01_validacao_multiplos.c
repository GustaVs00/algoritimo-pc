#include<stdio.h>
#include<locale.h>

int main ()

{
   setlocale(LC_CTYPE, "");

    int num;

    printf("Digite um numero: ");
    scanf("%d", &num );

    // Verifica simultaneamente se o número é divisível por 2 e por 5, utilizando o operador lógico AND (&&) e o resto da divisão (%)
    if (num % 2 == 0 && num % 5 == 0){

        printf("O numero %d e multiplo de 2 e 5\n", num);

    } else {
        printf("O número %d é ímpar\n", num);
    }
    return 0;
}
