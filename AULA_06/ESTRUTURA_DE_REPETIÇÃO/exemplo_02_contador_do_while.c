#include <stdio.h>
#include <locale.h>

int main ()

{
    setlocale(LC_CTYPE, "");

   int i = 1;

   // Diferente do while convencional, a estrutura do-while garante que o bloco de código será executado pelo menos uma vez antes de testar a condição de continuação (i <= 5)
   do{
        printf("Número :%d\n", i);
        i++;
   }

   while (i<=5);



    return 0;
}
