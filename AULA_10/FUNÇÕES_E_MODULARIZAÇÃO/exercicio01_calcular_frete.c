#include <stdio.h>
#include <locale.h>

float calcular_frete(float peso) {
    return peso*4.5;
}
int main() {

    setlocale(LC_CTYPE, "");

    float peso;
    char resp;

    // Loop infinito que manterá o programa rodando até encontrar uma instrução de interrupção (break)
    while (1) {
        printf("\nDigite o peso (kg): ");
        scanf("%f", &peso);

        printf("Valor do frete: R$ %.2f\n", calcular_frete(peso));

        printf("Deseja calcular outro frete? ");
        
        // O espaço inserido antes de %c serve para limpar o buffer do teclado (consumir o 'Enter' da leitura anterior)
        scanf(" %c", &resp);
        
        // Condição de parada: encerra o loop caso o usuário digite 'n' minúsculo ou maiúsculo
        if (resp == 'n' || resp == 'N')
            break;

    }

    return 0;
}