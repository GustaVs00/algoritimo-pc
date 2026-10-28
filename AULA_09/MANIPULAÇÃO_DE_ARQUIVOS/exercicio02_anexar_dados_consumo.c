# include<stdio.h>
# include<locale.h>

int main(){

    FILE * arquivo;
    setlocale(LC_CTYPE, "");

    char dia[4];
    int i,num;
    float consumo;

    // Abre o arquivo em modo de anexação ("a" - append), que adiciona os novos registros ao final sem sobrescrever os dados anteriores
    arquivo = fopen("consumo.txt", "a");

    if(arquivo == NULL) {
        printf("Erro ao criar o arquivo! \n");
        return 1;
    }
     printf("Digite a quantidade de registros: ");
     scanf("%d",&num);

    for(i=0;i<num;i++){
        printf("Digite o dia da semana (ex:seg):");
        scanf("%3s", dia);
        printf("Qual o consumo da %s: ",dia);
        scanf("%f",&consumo);

        // Insere as informações recém-digitadas no arquivo com o formato predefinido de string e float
        fprintf(arquivo,"%s %.1f\n", dia, consumo);

    }

    printf("\n Arquivo criado com sucesso");
    fclose(arquivo);

    return 0;
}