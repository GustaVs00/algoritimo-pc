#include<stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_CTYPE, "");

    float raio, perimetro;
    printf(" Qual a medida do raio (cm)? ");
    scanf("%f", &raio);
    
    // Aplica a fórmula matemática do perímetro da circunferência (C = 2 * pi * r) adotando 3.14 como valor de pi
    perimetro = 2*3.14*raio;
    
    printf("O perímetro da circunferência é: %.2f", perimetro);
    return 0;
}