#include<stdio.h>                                                                               
#include <locale.h>
#define TAM 8
int main ()

{
   setlocale(LC_CTYPE, "");

    float salarios[TAM];
    int i;

    for(i=0; i<TAM; i++) {
        printf("Digite o salário do funcionário %d: ", (i+1));
        scanf("%f", &salarios[i]);
    }
    for (i=0; i<TAM; i++){
        printf("Salário funcionário %d: %.2f\n", (i+1), salarios[i]);
    }

    return 0;
}
