# Algoritmos em Linguagem C 



Este repositório contém uma coleção estruturada de projetos e exercícios práticos desenvolvidos em linguagem C. A documentação abaixo apresenta o resumo de cada módulo explorado, evidenciando a progressão da complexidade lógica e técnica do código.

---

## 📚 Aula 2 - Introdução à Linguagem C



* **Foco:** Sintaxe básica, declaração de variáveis, exploração dos tipos de dados essenciais e manipulação de entrada/saída no terminal utilizando `printf`, `scanf` e `<locale.h>`.


* **Exemplos Guiados:** Programas introdutórios (como o tradicional "Olá Mundo") e demonstrações focadas na formatação visual de números inteiros e decimais.


* **Exercícios Práticos:** Resolução de problemas do quotidiano através de algoritmos simples, incluindo o cálculo de perímetros, conversão de semanas de gestação, planeamento e recomendação de consumo de água, além do cálculo de médias.



---

## 🧮 Aula 3 - Operadores



* **Foco:** Aplicação prática de operadores aritméticos, resolução de expressões matemáticas diretas e integração das funções da biblioteca matemática (`<math.h>`).


* **Estrutura:** O módulo é composto por 10 miniprojetos, organizados nas seguintes categorias:


* **Gestão e Custos:** Algoritmo para controlo de receção diária de produtos e uma calculadora logística focada na estimativa de materiais (quantidade de caixas e custo final) para o revestimento de superfícies.


* **Fórmulas e Conversões:** Calculadora médica de Índice de Massa Corporal (IMC), conversor absoluto de horas para minutos e uma ferramenta para estimativa mensal de consumo de energia em kWh.


* **Estatística Simples:** Calculadora elementar, processamento de médias aritméticas de múltiplos valores e estruturação matemática para o cálculo de médias ponderadas.


* **Física e Geometria:** Sistema analítico para o cálculo da distância entre dois pontos cartesianos e um estimador físico de alcance horizontal em cenários de lançamentos oblíquos.





---

## ⚖️ Aula 4 - Estruturas de Decisão



* **Foco:** Domínio do controlo de fluxo de execução, utilização de operadores relacionais e implementação de tomadas de decisão através de blocos `if`, `else if` e `else`.


* **Estrutura:** O módulo é composto por 6 miniprojetos de aplicação lógica:


* **Validações Matemáticas:** Um identificador de divisibilidade (múltiplos simultâneos de 2 e 5) e um calculador de raízes para equações do 2º grau através da Fórmula de Bhaskara.


* **Sistemas Escolares:** Simuladores focados em validar aprovações ou reprovações de alunos, cruzando critérios exclusivos de nota com exigências de taxas de frequência académica.


* **Saúde e Negócios:** Classificador que detalha as categorias do IMC e um sistema automatizado para reservas de hotel capaz de orçamentar uma estadia com base num menu de tipologia de quartos.





---

## 🎮 Aula 5 - Projeto Arena Tech



* **Foco:** Integração profunda e prática de todos os conceitos adquiridos aplicados num cenário empresarial realista e complexo.


* **O que é:** Um simulador construído para o planeamento logístico e orçamental de um grande evento de E-sports.


* **Como funciona:** O utilizador insere as variáveis do evento em tempo real (número total de jogadores, volume de máquinas disponíveis, tempo previsto de duração e o orçamento máximo disponível).


* **Resultado:** O algoritmo processa as métricas e devolve um relatório completo que diagnostica a suficiência da infraestrutura, avalia as classificações do consumo energético e emite um parecer financeiro final automatizado (evento aprovado, aprovado com ressalvas ou não recomendado).



---

## 🔄 Aula 6 - Estrutura de Repetição



* **Foco:** Demonstrar na prática como orquestrar interações contínuas e ininterruptas com o utilizador via terminal através da biblioteca `<stdio.h>`, processando de forma cíclica as entradas e saídas de dados numéricos.


* **Base Técnica:** O projeto alicerça-se na aplicação estruturada de ramificações condicionais (`if`/`else`) combinadas com o poder dos laços de repetição mecânica (`for`, `while`, `do-while`), com o intuito de solucionar desafios algorítmicos habituais do dia a dia.



---

## 📝 Aula 7 - Cheat Sheet: Estrutura de Repetição



* **Foco:** Um material de consulta consolidado que resume o comportamento, a sintaxe e o funcionamento técnico das estruturas `while`, `do...while` e `for` na linguagem C.


* **Padrões de Algoritmos:** O documento relembra a aplicação de padrões lógicos recorrentes, como a implementação técnica de contadores, acumuladores financeiros/numéricos e a mecânica de laços de iteração aninhados.


* **Manipulação de Strings:** Inclui secções de explicação direcionadas especificamente para a declaração, leitura e tratamento de sequências de caracteres textuais (texto sem espaços inseridos) recorrendo à utilização da função `scanf`.


---

# 📂 Aula 08 - Vetores e Matrizes em C (Estruturas de Dados)

Bem-vindo ao repositório da **Aula 08**! Este material aborda a utilização de estruturas de dados homogêneas na linguagem C: os vetores (arrays unidimensionais) e as matrizes (arrays multidimensionais). Estes recursos permitem armazenar e manipular múltiplas variáveis do mesmo tipo de forma eficiente sob um único nome.

---

## 🎯 Visão Geral

Os códigos deste repositório exploram a alocação estática de memória utilizando constantes e a iteração sobre conjuntos de dados. Os principais conceitos aplicados incluem:
- **Vetores (Arrays 1D):** Declaração, preenchimento e leitura de dados utilizando laços de repetição simples.
- **Matrizes (Arrays 2D):** Manipulação de tabelas bidimensionais (linhas e colunas) utilizando laços de repetição aninhados.
- **Constantes (`#define`):** Boas práticas para definir o tamanho de vetores e matrizes, facilitando a manutenção do código.
- **Lógica de Processamento:** Algoritmos para cálculo de médias, identificação de valores máximos/mínimos e contagem condicional dentro de conjuntos de dados.

---

## 📁 Estrutura do Repositório e Arquivos

Abaixo está o detalhamento de cada código-fonte presente neste repositório:

### 1. Vetores (Arrays Unidimensionais)
* **`exercicio01.c`**: Demonstra a criação básica de um vetor de tamanho 8 definido pela constante `TAM`. O programa utiliza um laço `for` para preencher os salários de funcionários e outro laço independente para imprimi-los no terminal.
* **`exercicio02.c`**: Processa os dados de um vetor para calcular a média de 8 valores. Após o cálculo, percorre a estrutura novamente com uma condicional `if` para contabilizar a quantidade exata de valores que ficaram acima da média.
* **`exercicio03.c`**: Expande a lógica anterior em um vetor de 10 posições. Além de calcular a média e contar os valores superiores a ela, o algoritmo guarda dinamicamente o maior salário registrado e captura o índice (identificador) do funcionário que o recebe.

### 2. Matrizes (Arrays Bidimensionais)
* **`exercicio04.c`**: Introduz matrizes com laços aninhados, gerenciando 3 linhas e 4 colunas (`LIN 3` e `COL 4`). O programa armazena a quantidade de produtos vendidos em diferentes dias e calcula tanto o subtotal de cada produto (soma das linhas) quanto o volume total geral de itens.
* **`exercicio05.c`**: Aplica matrizes para gerenciar notas de estudantes. Calcula as médias individuais dividindo a soma das notas pela quantidade de colunas e inclui uma estrutura de decisão para armazenar e exibir exclusivamente o aluno com o maior desempenho acadêmico.

---

# 📂 Aula 09 - Manipulação de Arquivos em C (File I/O)

Bem-vindo ao repositório da **Aula 09**! Este material é dedicado ao estudo de persistência de dados utilizando a linguagem C. Aqui, você encontrará exemplos práticos de como os programas podem interagir com o sistema operacional para criar, ler, editar e processar arquivos de texto de forma definitiva.

---

## 🎯 Visão Geral

Ao longo destes exercícios, exploramos a biblioteca padrão `<stdio.h>` para manipular ponteiros do tipo `FILE`. Os principais conceitos abordados incluem:
- **Modos de Abertura:** Escrita (`w`), Leitura (`r`) e Anexação (`a`).
- **Escrita de Dados:** Como utilizar a função `fprintf` para gravar dados formatados no disco.
- **Leitura de Dados:** Diferenças práticas entre ler linhas inteiras com `fgets` e extrair dados tipados (strings, inteiros, floats) com `fscanf`.
- **Tratamento de Arquivos:** Verificação de erros na abertura (ponteiros `NULL`) e a importância de fechar arquivos com `fclose`.

---

## 📁 Estrutura do Repositório e Arquivos

Abaixo está o detalhamento de cada código-fonte presente neste repositório:

### 1. Escrita e Criação (`w` - Write)
- **`exemplo1.c`**: Demonstra a criação do arquivo `tabuada.txt` a partir do zero. O usuário informa um número inteiro, e o programa utiliza um laço de repetição com `fprintf` para calcular e gravar a tabuada (de 0 a 10) diretamente no arquivo de texto. Se o arquivo já existir, ele será reescrito.

### 2. Anexação de Dados (`a` - Append)
- **`exercico2.c`**: Mostra como adicionar dados ao final de um arquivo existente sem apagar seu histórico. Abre (ou cria) o arquivo `consumo.txt` e utiliza um laço para inserir múltiplos registros informados pelo usuário, contendo o dia da semana e o respectivo valor de consumo (ex: `seg 15.5`).

### 3. Leitura de Linhas Completas (`r` - Read / `fgets`)
- **`exercicio3.c`**: Focado na leitura simples de texto. Abre o arquivo `tabuada.txt` criado anteriormente e utiliza a função `fgets` dentro de um laço `while` para ler o documento linha por linha, exibindo o conteúdo no console até atingir o fim do arquivo (`NULL`).

### 4. Leitura Formatada e Relatórios (`r` - Read / `fscanf`)
- **`exercicio5.c`**: Script de processamento de dados. Abre o arquivo `consumo.txt` e utiliza o `fscanf` para separar dinamicamente as strings (dias) dos floats (valores de consumo). O programa varre o documento até o final (`EOF`), acumulando os valores para calcular o **consumo médio**, contabilizar a **quantidade de registros** e identificar o **maior consumo** registrado.
- **`exercicio7.c`**: Segue uma lógica analítica semelhante, mas voltada para o arquivo `vendas.txt`. Lê identificadores e valores financeiros de forma iterativa (`EOF`) para gerar um relatório final contendo: **total de vendas realizadas**, **soma do faturamento** e o **maior valor** de uma venda única.

---
