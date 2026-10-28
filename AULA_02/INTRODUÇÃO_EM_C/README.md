Este repositório contém os exercícios e programas de exemplo desenvolvidos durante as aulas introdutórias de lógica 
e algoritmos na linguagem C. O objetivo é abordar variáveis, tipos de dados, formatação de saída e entrada de dados via teclado.

---

🛠️ Conceitos Abordados

Biblioteca Padrão ("stdio.h"): Utilizada para manipulação de entradas e saídas de dados no console ("printf", "scanf").
Suporte a Idioma Local ("locale.h"): Uso de "setlocale(LC_CTYPE, "")" para garantir que acentos e caracteres
da língua portuguesa sejam renderizados adequadamente no terminal.

Tipos de Dados Essenciais:
   "Int": Armazenamento de números inteiros (ex: RGM, idades, semanas).
  "float": Armazenamento de números decimais/flutuantes (ex: notas, dimensões, preços).
  
  Formatadores de Entrada e Saída:
  "%d": Marcador para exibição e leitura de inteiros.
  "%f" / "%.2f": Marcador para exibição e leitura de números decimais (com restrição de casas decimais).

---

📂 Arquivos do Repositório

'Exemplos Guiados'

1. "ola_mundo.c": Exemplo básico demonstrando a declaração de variáveis inteiras e exibição de mensagens simples na tela.
2. "EXEMPLO1.c": Apresenta a formatação de inteiros e decimais com limite de duas casas decimais, além do uso de acentuação com "locale.h".
3. "EXEMPLO2.c": Demonstra a interação com o usuário lendo dados via teclado ("scanf") para calcular o custo total da compra de produtos.

'Exercícios Práticos'

1. "EXERCICIO1.c": Calcula o perímetro de uma circunferência com base na medida do raio fornecida pelo usuário.
2. "EXERCICIO2.c": Calcula a área total e o perímetro de um jardim retangular a partir das medidas de largura e comprimento.
3. "EXERCICIO3.c": Converte semanas de gestação informadas pelo usuário para um tempo estimado em meses.
4. "EXERCICIO4.c": Calcula a recomendação diária de água necessária (em litros) de acordo com o peso corporal em kg.
5. "EXERCICIO5.c": Lê duas notas escolares fornecidas pelo usuário e exibe a média aritmética simples final.

---

🚀 Como Executar os Programas

'Pré-requisitos'
Ter um compilador C instalado em sua máquina (como o "GCC") ou utilizar uma IDE como "Code::Blocks",
"Dev-C++",ou o "VS Code" com extensões de C/C++.

"Linha de Comando (GCC)'

1. 'Abra o terminal' na pasta do projeto.
2. **Compile o arquivo desejado**:
   ```bash
   gcc EXEMPLO1.c -o exemplo1
