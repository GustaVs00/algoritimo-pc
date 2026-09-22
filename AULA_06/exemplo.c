#include <stdio.h>
#include <locale.h>

int main ()

{
    setlocale(LC_CTYPE, "");

        int i, num=1;

    while(num>0){
        printf("\nDigite um número inteiro (zero para sair:) ");
        scanf("%d", &num);

        printf("Tabuada do %d", num);
        for (i=0; i<=10; i++){
            printf("\n%d * %d = %d", num, i, (num*i));

        }
    }

    return 0;
}
