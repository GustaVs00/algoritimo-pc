#include<stdio.h>                                                                               
#include <locale.h>

// Define uma constante para o tamanho do vetor, facilitando a manutenção caso a quantidade de funcionários mude
#define TAM 8

int main ()
{
   setlocale(LC_CTYPE, "");

    // Declaração de um vetor para armazenar múltiplos salários em uma única variável
    float salarios[TAM];
    int i;

    for(i=0; i<TAM; i++) {
        printf("Digite o salário do funcionário %d: ", (i+1));
        scanf("%f", &salarios[i]);
    }
    
    // Segundo laço responsável apenas por percorrer o vetor preenchido e exibir os dados armazenados
    for (i=0; i<TAM; i++){
        printf("Salário funcionário %d: %.2f\n", (i+1), salarios[i]);
    }

    return 0;
}