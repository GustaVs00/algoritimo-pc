#include <stdio.h>
#include <locale.h>
#define TAM 10

int main ()

{
   setlocale(LC_CTYPE, "");

    int i, contador, achei_maior;
    float salarios[TAM];
    float soma=0, media, maior_salario;

    for (i=0; i<TAM; i++){
        printf("Digite o salario do funcionario %d: ", (i+1));
        scanf("%f", &salarios[i]);
        soma += salarios[i];
    }

    media = soma/TAM;
    
    // Define o primeiro salário do vetor como o maior inicial e guarda o seu índice (1) como referência de partida
    maior_salario = salarios[0];
    achei_maior = 1;

    for (i=0; i<TAM; i++){
        if(salarios[i] > media)
            contador++;//conta os salário acima da média
            
        if (salarios[i]>maior_salario){
            maior_salario = salarios[i];//verifica o maior salário
            
            // Atualiza o identificador do funcionário que possui o maior salário (soma-se 1 pois o índice 'i' começa em 0)
            achei_maior = (i+1);//indice do maior salário
        }

    }

    printf("\nMédia dos salários: R$ %.2f\n", media);
    printf("\nQuantidade de sálarios acima da média: %d\n", contador);
    printf("\nMaior salário: R$ %.2f\n", maior_salario, achei_maior);
    printf("\nFuncionário: %d\n", achei_maior);

    return 0;
}