#include <stdio.h>
#include <locale.h>
#define TAM 8
int main ()

{
   setlocale(LC_CTYPE, "");

    int i, contador;
    float media, valor[TAM], soma=0;

    for (i=0; i<TAM; i++){
        printf("Digite o  %d° valor: ", (i+1));
        scanf("%f", &valor[i]);
        
        // Acumula o total somando o valor recém-lido à variável 'soma' para o cálculo posterior da média
        soma += valor[i];
    }

    media = soma/TAM;

    // Percorre o vetor novamente para verificar e contar especificamente quais valores ultrapassam a média calculada
    for (i=0; i<TAM; i++){
        if(valor[i] > media)
            contador++;

        }

    printf("\nMédia dos valores: %.2f\n", media);
    printf("\nQuantidade de valores acima da média: %d\n", contador);

    return 0;
}