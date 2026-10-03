#include<stdio.h>
#include<locale.h>

int main ()
{
    setlocale(LC_CTYPE, "");

    int num1, num2, soma, subtracao, multiplicacao;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1 );

    printf("Digite o segundo número: ");
    scanf("%d", &num2 );

    // Realiza as operações aritméticas fundamentais entre os dois números fornecidos[cite: 3]
    soma = num1 + num2;

    subtracao = num1 - num2;

    multiplicacao = num1 * num2;

    printf("\nsoma total: %d", soma);
    printf("\nsubtracao total: %d", subtracao);
    printf("\nmultiplicacao total: %d", multiplicacao);

    return 0;
}
