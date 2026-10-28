#include<stdio.h>
#include<locale.h>


int main(){

    FILE *arquivo;
    setlocale(LC_CTYPE, "");
    int i,num;

    // Abre o arquivo "tabuada.txt" em modo de escrita ("w"); se o arquivo não existir, ele será criado
    arquivo = fopen("tabuada.txt", "w");

    if (arquivo == NULL){
        printf("ERRO AO CRIAR ARQUIVO!\n");
        return 1;
    }

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    // Grava o cabeçalho no arquivo utilizando formatação semelhante ao printf
    fprintf(arquivo, "Tabuada do %d\n",num);//tem um f pra mais arquivos

    // Loop que calcula a tabuada de 0 a 10 e grava cada resultado em uma nova linha no arquivo
    for (i=0; i<11; i++){
        fprintf(arquivo,"%d * %d = %d\n", num, i, (num*i));
    }
    printf("Arquivo criado\n");
    
    // Fecha o arquivo para liberar os recursos do sistema e garantir que os dados sejam salvos
    fclose(arquivo);
    return 0;
}