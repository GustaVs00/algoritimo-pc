#include<stdio.h>
#include<locale.h>

int main ()

{
   setlocale(LC_CTYPE, "");

    float media, frequencia;

    printf("Qual a média final do aluno? ");
    scanf("%f", &media);

    printf("Qual a frequência do aluno? ");
    scanf("%f", &frequencia);

    // Avalia os critérios de reprovação de forma sequencial: o aluno é penalizado se falhar na assiduidade ou se falhar na nota mínima
    if(frequencia < 75){
        printf("Reprovado por falta!!\n");

    }
    if(media < 6){
        printf("Reprovado por nota !!\n");

    }else{
        printf("Aprovado!!!");

    }
    return 0;
}
