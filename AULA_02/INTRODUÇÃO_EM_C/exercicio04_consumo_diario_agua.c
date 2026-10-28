#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_CTYPE,"");


    float massa, quant_agua;

    printf("Digite a massa corporal (em KG): ");
    scanf("%f", &massa);
    
    // Aplica a proporção de 35ml de água por kg de massa corporal, e o divisor 1000 converte o resultado final de mililitros para litros
    quant_agua = massa * 35 / 1000;
    
    printf("A quantidade aproximada de agua que voce deve beber é: %.2f", quant_agua);
    return 0;
}