#include<stdio.h>
#include<locale.h>

int main ()
{
    setlocale(LC_CTYPE, "");

    int hora, minuto, minuto_total;

    printf("hora?");
    scanf("%d", &hora );

    printf("minuto?");
    scanf("%d", minuto);

    // Converte as horas inteiras para minutos (multiplicando por 60) e soma aos minutos restantes para obter o tempo absoluto[cite: 2]
    minuto_total = (hora * 60) + minuto;
    printf("Ja se passaram %d minuto", minuto_total);



    return 0;
}
