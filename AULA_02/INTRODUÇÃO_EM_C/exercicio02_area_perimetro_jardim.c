#include<stdio.h>
#include<locale.h>

int main ()

{
    setlocale(LC_CTYPE, "");

    float largura;
    float comprimento;
    float perimetro;
    float area;

    printf ("Qual o comprimento do jardim (m)?  ");
    scanf("%f", &comprimento);
    printf("Qual a largura do jardim (m)? ");
    scanf("%f", &largura);

    // Calcula o perímetro do retângulo somando os lados (dobro do comprimento + dobro da largura)
    perimetro = 2 * (comprimento+largura);
    // Calcula a área da superfície multiplicando a base pela altura
    area = comprimento*largura;

    printf("\nPerímetro do jardim: %.2f m\n\n", perimetro);
    printf("Área do jardim: %.2f m²\n", area);

    return 0;
}