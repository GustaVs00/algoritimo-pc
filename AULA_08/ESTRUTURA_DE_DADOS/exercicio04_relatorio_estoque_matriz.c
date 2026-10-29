#include <stdio.h>
#include <locale.h>

// Constantes definindo as dimensões da matriz (3 linhas por 4 colunas)
#define LIN 3
#define COL 4

int main ()

{
   setlocale(LC_CTYPE, "");

    int i, j, total_produtos, total_geral=0;
    
    // Declaração de uma matriz bidimensional para armazenar a quantidade de produtos (linhas) em diferentes dias (colunas)
    int valores[LIN] [COL];

    for (i=0; i<LIN; i++){
        for (j=0; j<COL; j++){
            printf("Digite a quantidade do produto %d no dia %d: ", (i+1), (j+1));
            scanf("%d", &valores[i][j]);

        }
        printf("\n");
    }
    
    printf("!RELĮTORIO!\n");
    for(i=0; i<LIN; i++){
        // Zera o contador do produto atual antes de somar suas respectivas quantidades diárias
        total_produtos = 0;
        for(j=0; j<COL; j++){
            total_produtos += valores [i][j];
        }
        
        // Acumula o total geral somando a quantidade total recém-calculada de cada produto
        total_geral += total_produtos;
        printf("Produto %d: %d unidades.\n", (i+1), total_produtos);
    }
    printf("Total geral: %d unidades.\n", total_geral);

    return 0;
}