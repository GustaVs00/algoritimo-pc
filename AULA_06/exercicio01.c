#include <stdio.h>
#include <locale.h>

int main ()

{
   setlocale(LC_CTYPE, "");

    int i, cpf;
    float preco, total_compras;


    printf("Digite o cpf: ");
    scanf("%d", &cpf);

    for (i=1; i<=5; i++){
        printf("Digite o preço dos produtos: ");
        scanf("%f", &preco);

        total_compras += preco;

    }
    printf("CPF: %d", cpf);
    printf("\nO valor total das compras foi: R$ %.2f", total_compras);

    return 0;
}

