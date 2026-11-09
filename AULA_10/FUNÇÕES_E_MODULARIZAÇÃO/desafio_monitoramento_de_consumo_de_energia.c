/*
 * Projeto 10 - Monitoramento de consumo de energia de laboratorios
 *
 * Matriz de consumo (kWh): cada LINHA = um laboratorio, cada COLUNA = um dia.
 * O programa e dividido em funcoes, cada uma com uma responsabilidade:
 *
 *   main()
 *     |
 *     +-- gerar_relatorio()
 *            |-- calcular_total()
 *            |-- calcular_media_laboratorio()
 *            |-- buscar_dia_maior_consumo()
 *            |-- buscar_laboratorio_maior_consumo()
 *            +-- contar_acima_limite()
 */

#include <stdio.h>

#define LABS   4
#define DIAS   7
#define LIMITE 100.0f

/* ---------- Prototipos ---------- */

/* Funcoes principais do projeto */
float calcular_total(float consumo[][DIAS], int laboratorios);
float calcular_media_laboratorio(float consumo[][DIAS], int laboratorio);
int   buscar_dia_maior_consumo(float consumo[][DIAS], int laboratorios);
int   buscar_laboratorio_maior_consumo(float consumo[][DIAS], int laboratorios);
int   contar_acima_limite(float consumo[][DIAS], int laboratorios, float limite);

/* Funcoes auxiliares (evitam repetir codigo nas buscas e no relatorio) */
float total_do_laboratorio(float consumo[][DIAS], int laboratorio);
float total_do_dia(float consumo[][DIAS], int laboratorios, int dia);

/* Desafio extra: relatorio modularizado */
void gerar_relatorio(float consumo[][DIAS],
                     const char *laboratorios[],
                     const char *dias[],
                     int quantidade_laboratorios);

/* ---------- main ---------- */

int main(void)
{
    const char *dias[] =
    {
        "seg", "ter", "qua", "qui",
        "sex", "sab", "dom"
    };

    const char *laboratorios[] =
    {
        "Lab A", "Lab B", "Lab C", "Lab D"
    };

    float consumo[LABS][DIAS] =
    {
        {  80,  90,  95, 110, 120, 100,  85 },  /* Lab A */
        {  75,  85,  90, 105, 115,  95,  80 },  /* Lab B */
        { 100, 110, 120, 130, 125, 115, 105 },  /* Lab C */
        {  70,  80,  85,  90, 100,  95,  75 }   /* Lab D */
    };

    gerar_relatorio(consumo, laboratorios, dias, LABS);

    return 0;
}

/* ---------- Funcoes auxiliares ---------- */

/* Soma uma LINHA da matriz: total semanal de um laboratorio. */
float total_do_laboratorio(float consumo[][DIAS], int laboratorio)
{
    float soma = 0.0f;

    for (int d = 0; d < DIAS; d++)
    {
        soma += consumo[laboratorio][d];
    }

    return soma;
}

/* Soma uma COLUNA da matriz: total de um dia somando todos os laboratorios. */
float total_do_dia(float consumo[][DIAS], int laboratorios, int dia)
{
    float soma = 0.0f;

    for (int l = 0; l < laboratorios; l++)
    {
        soma += consumo[l][dia];
    }

    return soma;
}

/* ---------- Funcoes principais ---------- */

/* Percorre TODOS os elementos e retorna o consumo total geral. */
float calcular_total(float consumo[][DIAS], int laboratorios)
{
    float total = 0.0f;

    for (int l = 0; l < laboratorios; l++)
    {
        for (int d = 0; d < DIAS; d++)
        {
            total += consumo[l][d];
        }
    }

    return total;
}

/* Interessa uma LINHA: media diaria de um laboratorio. */
float calcular_media_laboratorio(float consumo[][DIAS], int laboratorio)
{
    return total_do_laboratorio(consumo, laboratorio) / DIAS;
}

/* Interessam as COLUNAS: retorna o INDICE do dia de maior consumo total. */
int buscar_dia_maior_consumo(float consumo[][DIAS], int laboratorios)
{
    int   indice_maior = 0;
    float maior = total_do_dia(consumo, laboratorios, 0);

    for (int d = 1; d < DIAS; d++)
    {
        float total = total_do_dia(consumo, laboratorios, d);

        if (total > maior)
        {
            maior = total;
            indice_maior = d;
        }
    }

    return indice_maior;
}

/* Interessam as LINHAS: retorna o INDICE do laboratorio de maior consumo. */
int buscar_laboratorio_maior_consumo(float consumo[][DIAS], int laboratorios)
{
    int   indice_maior = 0;
    float maior = total_do_laboratorio(consumo, 0);

    for (int l = 1; l < laboratorios; l++)
    {
        float total = total_do_laboratorio(consumo, l);

        if (total > maior)
        {
            maior = total;
            indice_maior = l;
        }
    }

    return indice_maior;
}

/* Percorre TODOS os elementos e conta os registros acima do limite. */
int contar_acima_limite(float consumo[][DIAS], int laboratorios, float limite)
{
    int contador = 0;

    for (int l = 0; l < laboratorios; l++)
    {
        for (int d = 0; d < DIAS; d++)
        {
            if (consumo[l][d] > limite)
            {
                contador++;
            }
        }
    }

    return contador;
}

/* ---------- Relatorio ---------- */

void gerar_relatorio(float consumo[][DIAS],
                     const char *laboratorios[],
                     const char *dias[],
                     int quantidade_laboratorios)
{
    int dia = buscar_dia_maior_consumo(consumo, quantidade_laboratorios);
    int lab = buscar_laboratorio_maior_consumo(consumo, quantidade_laboratorios);

    printf("===== RELATORIO DE CONSUMO =====\n\n");

    printf("Consumo total geral: %.2f kWh\n\n",
           calcular_total(consumo, quantidade_laboratorios));

    for (int l = 0; l < quantidade_laboratorios; l++)
    {
        printf("Media do %s: %.2f kWh\n",
               laboratorios[l],
               calcular_media_laboratorio(consumo, l));
    }

    printf("\nDia com maior consumo total:\n");
    printf("%s - %.2f kWh\n",
           dias[dia],
           total_do_dia(consumo, quantidade_laboratorios, dia));

    printf("\nLaboratorio com maior consumo semanal:\n");
    printf("%s - %.2f kWh\n",
           laboratorios[lab],
           total_do_laboratorio(consumo, lab));

    printf("\nRegistros acima de %.0f kWh: %d\n",
           LIMITE,
           contar_acima_limite(consumo, quantidade_laboratorios, LIMITE));
}
