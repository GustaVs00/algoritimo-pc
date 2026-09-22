#include <stdio.h>
#include <locale.h>

int main ()

{
    setlocale(LC_CTYPE, "");

   int i = 1;

   do{
        printf("Número :%d\n", i);
        i++;
   }

   while (i<=5);



    return 0;
}
