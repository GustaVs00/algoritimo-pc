# include<stdio.h>
# include<locale.h>

int main(){

    // Abre o arquivo "tabuada.txt" no modo de leitura ("r")
    FILE * arquivo = fopen("tabuada.txt","r");
    setlocale(LC_CTYPE, "");
    char linha[100];

    if(arquivo == NULL) {
        printf("Erro ao ao abrir o arquivo\n");
        return 1;
    }

    // Lê o arquivo linha por linha armazenando os dados na string 'linha', parando apenas quando atinge o final do arquivo (NULL)
    while(fgets(linha,sizeof(linha),arquivo)!=NULL) {
        printf("%s", linha);
    }

    fclose(arquivo);
    return 0;

}