# 📂 Aula 08 - Estruturas de Dados Homogêneas: Vetores e Matrizes

Bem-vindo ao repositório da **Aula 08**! Este módulo representa um salto importante na sua jornada de programação em C. Até agora, trabalhávamos com variáveis simples (escalares), capazes de guardar apenas um valor por vez. Mas o que fazer quando precisamos gerenciar as notas de 50 alunos ou o controle de estoque de 100 produtos? Criar 100 variáveis manuais é inviável. 

É aqui que entram as **Estruturas de Dados Homogêneas** (coleções de dados do mesmo tipo). Neste repositório, você aprenderá a agrupar dezenas ou centenas de informações sob um único nome, acessando-as de forma inteligente através de índices.

---

## 🎯 Conceitos Fundamentais Abordados

Para dominar os códigos deste repositório, focamos em quatro pilares práticos:

1. **Vetores (Arrays Unidimensionais):** Imagine um vetor como uma estante com várias gavetas enfileiradas. Cada gaveta guarda um valor (como um salário ou uma nota) e possui um número de identificação (índice). Em C, o primeiro índice é sempre `0`.
2. **Matrizes (Arrays Bidimensionais):** Se o vetor é uma estante, a matriz é um armário inteiro com linhas e colunas (uma tabela). Usamos matrizes para cruzar informações, como "quantidade de um produto X vendida no dia Y".
3. **Laços de Repetição (`for`):** São os melhores amigos dos vetores e matrizes. Usamos o `for` para automatizar a leitura e a escrita em cada "gaveta", sem precisar digitar o código repetidas vezes. Para matrizes, usamos **laços aninhados** (um `for` dentro do outro).
4. **Constantes (`#define`):** Uma boa prática de programação. Em vez de espalhar o número "8" pelo código, definimos `#define TAM 8`. Se amanhã a empresa crescer para 50 funcionários, mudamos apenas uma linha no topo do programa.

---

## 📁 Trilha de Aprendizado (Arquivos do Repositório)

Os exercícios foram organizados em uma progressão lógica de dificuldade:

### Parte 1: Dominando os Vetores
* **`exercicio01.c`**: **Entrada e Saída Básica.** O primeiro passo para entender vetores. O programa aloca espaço para 8 salários e utiliza um laço `for` para coletar os dados digitados pelo usuário, seguido de outro laço para exibir o que foi salvo na memória.
* **`exercicio02.c`**: **Matemática e Filtros.** Avançamos para o processamento de dados. O script soma 8 valores durante a leitura para calcular a média global. Em seguida, usa uma condicional `if` dentro do laço para contar quantos desses valores superaram a média.
* **`exercicio03.c`**: **Busca de Extremos (Maior/Menor).** Introduz a lógica de "rei da montanha". O programa assume que o primeiro salário do vetor é o maior de todos e, ao longo do laço, compara os próximos salários com ele. Se encontrar um número maior, atualiza o topo do pódio e guarda a posição (índice) do funcionário correspondente.

### Parte 2: Desbravando as Matrizes
* **`exercicio04.c`**: **Introdução a Linhas e Colunas.** Utiliza uma matriz de 3 linhas (produtos) por 4 colunas (dias). O foco pedagógico aqui é o gerenciamento de subtotais: o código ensina a zerar a variável `total_produtos` a cada nova linha para calcular o estoque individual corretamente antes de somá-lo ao `total_geral`.
* **`exercicio05.c`**: **Matrizes com Tomada de Decisão.** Combina todos os conhecimentos anteriores. O programa armazena notas, calcula a média específica de cada aluno (por linha) e utiliza uma estrutura de decisão para identificar qual deles obteve o melhor desempenho acadêmico, exibindo seu identificador no final.
