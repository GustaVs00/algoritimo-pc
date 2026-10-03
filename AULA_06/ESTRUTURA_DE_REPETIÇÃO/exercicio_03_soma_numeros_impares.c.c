// exercicio03_calculo_impar_e_par.c[cite: 21]
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    int numero;
    int soma = 0;

    // Cria um loop infinito intencional que se baseia na instrução "break" para ser interrompido caso o usuário atenda à condição de parada (digitar 0)[cite: 21]
    while (1) {
        printf("Digite um número: ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        // Utiliza a operação de módulo (%) para filtrar os dados: se o resto da divisão por 2 for diferente de zero (ímpar), o número é somado ao total[cite: 21]
        if (numero % 2 != 0) {
            soma += numero;
        }
    }


    printf("Soma dos números ímpares: %d\n", soma);

    return 0;
}