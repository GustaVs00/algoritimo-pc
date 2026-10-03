// exercicio_01.c[cite: 1]
#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");
    int qte_manha, qte_tarde, qte_total;

    printf("Quantidade recebida pela manhã: ");
    scanf("%d", &qte_manha);

    printf("Qauntidade recebida pela tarde: ");
    scanf("%d", &qte_tarde);

    // Soma as quantidades dos dois turnos para calcular o volume total diário[cite: 1]
    qte_total = qte_manha + qte_tarde;

    printf("Total de produtos recebidos no dia: %d", qte_total);

    return 0;
}