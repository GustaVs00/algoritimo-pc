#include <stdio.h>
#include <locale.h>

// Função que utiliza ponteiros (*a e *b) para acessar e modificar os valores diretamente em seus endereços de memória originais
void trocar(int *a, int *b) {
    int auxiliar;
    
    // A variável temporária 'auxiliar' guarda o valor de 'a' para que ele não se perca ao ser sobrescrito por 'b'
    auxiliar = *a;
    *a = *b;
    *b = auxiliar;
}

int main () {

    int *a, *b;
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("Antes: a=%d b=%d\n", a, b);
    
    // Passa o endereço de memória das variáveis (utilizando &) para a função poder operá-las
    trocar(&a, &b);
    printf("Depois: a=%d b=%d\n",a, b);

    return 0;
}