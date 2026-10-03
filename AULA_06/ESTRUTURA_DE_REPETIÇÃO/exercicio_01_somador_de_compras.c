#include <stdio.h>
#include <locale.h>

int main ()

{
   setlocale(LC_CTYPE, "");

    int i, cpf;
    float preco, total_compras;


    printf("Digite o cpf: ");
    scanf("%d", &cpf);

    // Utiliza um laço de repetição definido para solicitar exatamente 5 preços, atuando como um acumulador que vai somando cada valor na variável total_compras[cite: 19]
    for (i=1; i<=5; i++){
        printf("Digite o preço dos produtos: ");
        scanf("%f", &preco);

        total_compras += preco;

    }
    printf("CPF: %d", cpf);
    printf("\nO valor total das compras foi: R$ %.2f", total_compras);

    return 0;
}
