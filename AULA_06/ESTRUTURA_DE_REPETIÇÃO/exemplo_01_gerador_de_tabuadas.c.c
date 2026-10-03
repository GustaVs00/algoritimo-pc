// exemplo_algoritmo_tabuada.c[cite: 17]
#include <stdio.h>
#include <locale.h>

int main ()

{
    setlocale(LC_CTYPE, "");

        int i, num=1;

    // O loop while mantém o programa em execução contínua, permitindo calcular várias tabuadas até que o usuário digite zero ou um número negativo como condição de parada[cite: 17]
    while(num>0){
        printf("\nDigite um número inteiro (zero para sair:) ");
        scanf("%d", &num);

        printf("Tabuada do %d", num);
        
        // O loop for itera de 0 a 10 para processar e estruturar a multiplicação passo a passo para o número atual[cite: 17]
        for (i=0; i<=10; i++){
            printf("\n%d * %d = %d", num, i, (num*i));

        }
    }

    return 0;
}