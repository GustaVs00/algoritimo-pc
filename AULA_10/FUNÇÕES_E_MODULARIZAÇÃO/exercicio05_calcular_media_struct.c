#include <stdio.h>
#include <locale.h>

// Definição de um tipo estruturado de dados (struct) para agrupar variáveis interligadas em um único formato chamado 'Aluno'
typedef struct {
    int rgm;
    float nota1;
    float nota2;
    float media;
} Aluno;

// A função recebe um ponteiro para a struct Aluno, permitindo alterar os dados originais ao invés de trabalhar com uma cópia
float calcular_media(Aluno *aluno) {
    // O operador seta '->' é obrigatório no lugar do ponto '.' quando se acessam membros de uma struct através de um ponteiro
    aluno -> media = (aluno -> nota1 + aluno -> nota2)/2;
}

void exibir_aluno(Aluno *aluno) {

}

int main () {

    setlocale(LC_CTYPE, "");

    Aluno aluno1;

    // Preenchimento dos membros da struct 'aluno1' acessando as variáveis pelo operador de ponto '.'
    printf("RGM: ");
    scanf("%d", &aluno1.rgm);
    printf("Nota 1: ");
    scanf("%f", &aluno1.nota1);
    printf("Nota 2: ");
    scanf("%f", &aluno1.nota2);

    // Passa o endereço de memória de aluno1 para a função gravar a média calculada diretamente nela
    calcular_media(&aluno1);

    printf("\nRGM: %d", aluno1.rgm);
    printf("\nMédia: %.2f\n", aluno1.media);

    return 0;
}