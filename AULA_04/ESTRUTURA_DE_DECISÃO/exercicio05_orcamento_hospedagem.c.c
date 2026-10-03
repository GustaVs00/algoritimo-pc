// exercicio05.c[cite: 16]
#include<stdio.h>
#include<locale.h>

int main ()

{
    setlocale(LC_CTYPE, "");
    char opcao;
    int num_diarias;

    printf("Hospedagem Anália:\n");
    printf("[S] Quarto simples:\n");
    printf("[D] Quarto duplo:\n");
    printf("[T] Quarto triplo:\n");
    printf("DIgite uma opção: ");
    scanf(" %c", &opcao);

    printf("Qual a quantidade de diárias: ");
    scanf("%d", &num_diarias);

    // O operador lógico OR (||) garante que o sistema reconheça a escolha do usuário validando as opções independentemente se a letra inserida for minúscula ou maiúscula[cite: 16]
    if(opcao == 's' || opcao == 'S'){
        printf("Total a pagar R$ %.2d", (num_diarias*300));
    } else if (opcao == 'd' || opcao == 'D'){
        printf("Total a pagar R$ %.2d", (num_diarias*450));
    } else if (opcao == 't' || opcao == 'T'){
        printf("Total a pagar R$ %.2d", (num_diarias*600));
    } else {
        printf("Opção inválida!!!");

    }

    return 0;

   }