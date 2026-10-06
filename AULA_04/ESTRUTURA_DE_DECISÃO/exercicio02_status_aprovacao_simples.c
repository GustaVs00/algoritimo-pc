#include<stdio.h>
#include<locale.h>

int main ()

{
   setlocale(LC_CTYPE, "");

    float nota1, nota2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1 );


    printf("Digite a segunda nota: ");
    scanf("%f", &nota2 );


    media = (nota1 + nota2)/2;

    // Estrutura de controle de fluxo que desvia a execução dependendo se o aluno atingiu, ou não, a média mínima exigida (6)
    if(media >= 6) {
        printf("Parábens! Você foi aprovado com  a media %.2f", media);

    } else {
        printf("Você foi reprovado ! ");

    }


    return 0;
}
