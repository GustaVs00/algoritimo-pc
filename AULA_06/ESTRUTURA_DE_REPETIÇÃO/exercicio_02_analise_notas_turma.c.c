// exercicio02_media_de_notas.c[cite: 20]
#include <stdio.h>
#include <locale.h>

int main ()

{
   setlocale(LC_CTYPE, "");

    float nota, media, total, maior_nota;
    int i;

   for (i=1; i<=5; i++){
        printf("Digite a nota do %dº aluno: ", i);
        scanf("%f", &nota);
        total += nota;

        // Durante cada iteração da coleta de notas, esta condicional verifica se a nota recém-digitada é superior à maior já registrada, atualizando o valor máximo[cite: 20]
        if (nota > maior_nota) {
            maior_nota = nota;
        }
   }
        media = total/5;

        printf("\nMedia da turma: %.2f", media);
        printf("\nmaior nota: %.2f", maior_nota);

    return 0;
}