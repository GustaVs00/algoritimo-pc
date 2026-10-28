#include<stdio.h>
#include<locale.h>

int main ()
{
    setlocale(LC_CTYPE, "");
     int semanas;
     float tempo;

    printf("Qual  a quantidade de semanas de gestação? ");
    scanf("%d", &semanas);
    
    // Converte o tempo de gestação de semanas para meses: descobre o total em dias (semanas * 7) e divide pela média de dias em um mês (30)
    tempo = (semanas*7)/30;
    
    printf("Tempo de gestação aproximado: %.2f", tempo);
     return 0;
}