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

        // Sistema de autenticação estruturado em estágios: permite acesso se correto, decrementa o contador se falhar com saldo de tentativas, ou bloqueia ao esgotar as chances[cite: 23]
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
