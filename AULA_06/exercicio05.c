#include <stdio.h>
#include <locale.h>

int main ()

{
   setlocale(LC_CTYPE, "");

    int conta=12345, senha=123, user, pass, tentativa=3;

    while(1){
        printf("\nDigite o user: ");
        scanf("%d", &user);
        printf("\nDigite a pass: ");
        scanf("%d", &pass);

        if(user == conta && pass == senha){
            printf("Logado!!!");
            break;
        }else if (tentativa >0){
            tentativa--;
            printf("\nDados incorretos");
            printf("\nVocê ainda tem %d tentativas", tentativa);

         }else {
             printf("Usuário bloqueado");
             break;

        }

    }

    return 0;
}

