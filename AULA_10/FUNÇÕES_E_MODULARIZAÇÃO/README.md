# 📂 Aula 10 - Funções, Ponteiros e Structs (Modularização)

Bem-vindo ao repositório da **Aula 10**! Este módulo marca um dos momentos mais importantes na sua evolução com a linguagem C. Até aqui, escrevíamos todo o nosso código dentro de um único bloco (`main`). Agora, aprenderemos a técnica de **Dividir para Conquistar**, separando a lógica em blocos independentes (Funções), além de manipularmos diretamente a memória (Ponteiros) e criarmos nossos próprios tipos de dados (Structs).

Também incluímos neste repositório o **Desafio das Operadoras**, um projeto robusto que consolida o processamento avançado de Matrizes.

## 🎯 Conceitos Fundamentais Abordados

1. **Funções (Modularização):** Criação de subprogramas que executam tarefas específicas (como calcular uma área ou uma média). Isso evita a repetição de código e deixa o programa mais limpo.
2. **Passagem por Valor vs. Referência:** Entendimento de que, por padrão, o C envia apenas "cópias" das variáveis para as funções. Para alterar a variável original, precisamos aprender a usar **Ponteiros** (endereços de memória).
3. **Structs (Registros):** Uma evolução dos vetores. Enquanto um vetor guarda vários dados do *mesmo* tipo, uma struct permite agrupar dados de *tipos diferentes* (ex: uma `struct Aluno` contendo Inteiro para RGM, e Float para as Notas).
4. **Operador Seta (`->`):** Aprender a acessar os dados de uma struct quando estamos lidando com ponteiros, substituindo o tradicional operador de ponto (`.`).

## 📁 Trilha de Aprendizado (Arquivos do Repositório)

### Parte 1: Funções e Reutilização de Código
* **`exemplo1_2.c`**: **Introdução às Funções.** Demonstra como criar uma função matemática que calcula a área de um retângulo e retorna um valor `float`. O foco é mostrar como a mesma lógica pode ser chamada múltiplas vezes no `main` apenas mudando os parâmetros.
* **`exercicio4.c`**: **Funções em Loop.** Expande o conceito do arquivo anterior. Coloca a função de cálculo de área dentro de um laço `while (1)` infinito, permitindo que o usuário processe cálculos continuamente até escolher a opção de parada (`break`).
* **`exercicio1.c`**: **Processamento Comercial.** Utiliza uma função para calcular valores de fretes com base no peso. Também demonstra o tratamento do *buffer* do teclado ao usar um espaço antes do `%c` no `scanf`, evitando que o programa pule a leitura de caracteres.
* **`exercicio3_2.c`**: **Encadeamento de Funções.** Mostra que uma função pode chamar outra. A função `analisar_situacao` invoca internamente a função `calcular_media` antes de decidir se o aluno foi aprovado ou reprovado.

### Parte 2: Acesso à Memória (Ponteiros e Structs)
* **`exercicio2.c`**: **Passagem por Referência (Ponteiros).** Resolve o problema clássico de trocar os valores de duas variáveis (`a` e `b`). Mostra como enviar o endereço de memória usando `&` e como alterar o dado original utilizando ponteiros `*` dentro da função `trocar`.
* **`exercicio5_2.c`**: **Structs na Prática.** Criação do tipo `Aluno` agrupando RGM, notas e média. O maior aprendizado é a junção de Struct com Ponteiros: a função `calcular_media` recebe o endereço da struct e atualiza a média diretamente na memória usando o operador `->` (seta).

### Parte 3: Desafio Integrador (Matrizes Avançadas)
* **`desafio_operadoras.c`**: **Business Intelligence (BI) no Terminal.** Um algoritmo analítico completo que varre uma matriz de `3x12` (3 operadoras, 12 meses). Utiliza laços duplos aninhados para cruzar informações complexas:
  * Calcula a média geral utilizando a função matemática `ceil()` para arredondamento.
  * Varre a matriz por *linhas* para descobrir qual operadora vendeu mais chips no ano.
  * Varre a matriz invertida (por *colunas*) para identificar em qual mês específico ocorreu o pico de vendas globais.

## 🛠️ Como Compilar e Executar

1. Abra o seu terminal ou prompt de comando.
2. Navegue até a pasta onde os arquivos `.c` estão salvos.
3. Utilize o compilador GCC para gerar o executável. Exemplo para compilar o desafio:
   ```bash
   gcc desafio_operadoras.c -o relatorio_operadoras -lm
   ```
   *(Nota: O uso do `-lm` no final é necessário em ambientes Linux para vincular a biblioteca matemática `<math.h>` do `ceil()`)*
4. Execute o programa gerado:
   * No Windows: `relatorio_operadoras.exe`
   * No Linux/Mac: `./relatorio_operadoras`