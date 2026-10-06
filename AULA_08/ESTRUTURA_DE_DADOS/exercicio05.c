#include <stdio.h>
#include <locale.h>
#define LIN 3
#define COL 1

int main()
{
    setlocale(LC_CTYPE, "");

    int i, j, achei = 0;
    float notas[LIN][COL], media, soma_notas, maior_media = 0;

    for(i = 0; i < LIN; i++){
        for(j = 0; j < COL; j++){
            printf("Digite a %dª nota do estudante %d: ", j + 1, i + 1);
            scanf("%f", &notas[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < LIN; i++){
        soma_notas = 0;
            for(j = 0; j < COL; j++){
            soma_notas += notas[i][j];
        }

        media = soma_notas / COL;
        printf("Média do estudante %d: %.2f\n", i + 1, media);
        if(i == 0 || media > maior_media){
            maior_media = media;
            achei = i;
        }
    }

    printf("\nMaior média:\n");
    printf("Estudante %d - Média: %.2f", achei + 1, maior_media);

    return 0;
}
