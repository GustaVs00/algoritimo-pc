#include<stdio.h>
#include<locale.h>

int main() {

    // Configura a localização para o padrão do sistema, permitindo a correta exibição de caracteres especiais e acentuação no terminal
    setlocale(LC_CTYPE, "");

    int rgm = 123456;
    float media = 4.567788;
    printf("Dados do aluno\n");
    printf("RGM: %d\n", rgm);
    printf("Média: %.2f", media);
    return 0;
}