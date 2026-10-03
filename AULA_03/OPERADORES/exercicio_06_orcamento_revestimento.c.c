// exercicio_06.c[cite: 6]
#include<stdio.h>
#include<locale.h>
#include<math.h>

int main ()

{
    setlocale(LC_CTYPE, "");

    float largura, comprimento, valor_unitario, area, quantidade, valor_total;

    printf("Qual é a largura da área (em metros): ");
    scanf("%f", &largura);

    printf("Qual é o comprimento da área em metros: ");
    scanf("%f", &comprimento);

    printf("Qual é o valor de cada caixa: ");
    scanf("%f", &valor_unitario);

    area = (largura*comprimento);
    
    // Calcula quantas caixas são necessárias considerando que cada caixa cobre 2.5 m²[cite: 6]
    quantidade = (area/2.5);
    
    // A função ceil() arredonda a quantidade fracionada de caixas para o próximo número inteiro, garantindo que não falte material[cite: 6]
    valor_total = ceil(quantidade)*valor_unitario;

    printf("\nÁrea total a ser revestida: %.2f m²", area);
    printf("\nQuantidade de caixas necessárias: %.2f ", ceil(quantidade));
    printf("\nCusto total da compra: R$ %2.f", valor_total);


    return 0;
}