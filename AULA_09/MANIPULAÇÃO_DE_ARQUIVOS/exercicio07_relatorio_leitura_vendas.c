#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_CTYPE, "");
    int contador=0;
    char id[10];
    float valor, media,soma=0, maior_valor=0;
    FILE *arquivo = fopen("vendas.txt", "r");

    if(arquivo == NULL){
        printf("ERRO AO ABRIR O ARQUIVO\n");
        return 1;
    }

    // Faz a varredura do arquivo lendo identificadores e valores de vendas iterativamente até o final do documento (EOF)
    while(fscanf(arquivo,"%3s %f",id, &valor) != EOF){
        soma += valor;
        contador++;
        // Verifica cada valor lido e armazena o maior na variável 'maior_valor'
        if (valor> maior_valor){
            maior_valor = valor;
        }

    }

    printf("Quantidade de vendas:%d\n", contador);
    printf("Soma:R$ %.2f\n",soma);
    printf("Maior valor:R$ %.2f\n",maior_valor);


    fclose(arquivo);


return 0;
}