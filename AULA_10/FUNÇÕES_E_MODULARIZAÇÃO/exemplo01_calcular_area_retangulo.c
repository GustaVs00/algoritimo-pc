#include <stdio.h>
#include <locale.h>

// Função que encapsula a lógica matemática de cálculo da área, permitindo seu reuso
float calcular_area(float base, float altura) {
    return base*altura;
}

int main() {

    setlocale(LC_CTYPE, "");

    // Chamadas sucessivas à mesma função passando diferentes argumentos diretamente no fluxo de impressão
    printf("A área do retângulo é: %.1f cm²\n", calcular_area(5, 7.8));
    printf("A área do retângulo é: %.1f cm²\n", calcular_area(3, 8));
    printf("A área do retângulo é: %.1f cm²\n", calcular_area(5, 9));

    return 0;
}