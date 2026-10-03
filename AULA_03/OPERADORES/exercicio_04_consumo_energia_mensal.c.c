// exercicio_04.c[cite: 4]
#include<stdio.h>
#include<locale.h>

int main ()

{
    setlocale(LC_CTYPE, "");

    float potencial, horas, consumo_mensal;

    printf(" Potência do equipamento (W)? ");
    scanf("%f", &potencial);

    printf("Horas de uso por dia: ");
    scanf("%f", &horas);

    // Estima o consumo mensal em kWh: multiplica a potência pelas horas diárias e por 30 dias, dividindo por 1000 para converter de Watts para Kilowatts[cite: 4]
    consumo_mensal = (potencial*horas*30)/1000;

    printf("consumo mensal: %.2f kwh", consumo_mensal);

    return 0;
}