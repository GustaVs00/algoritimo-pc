# [INSERIR NOME DO PROJETO - Sugestão: C-Logic-Fundamentals]

## 1. Descrição e Contexto

O **[INSERIR NOME DO PROJETO]** é uma suíte de aplicações de linha de comando (CLI) desenvolvida em **C**. O projeto resolve a necessidade de material prático para o estudo e consolidação de **estruturas de controle de fluxo, laços de repetição e lógica algorítmica** em programação procedural. 

## 3. Funcionalidades

O ecossistema é composto por pequenos módulos executáveis, entregando as seguintes capacidades:

* **Controle de Acesso :** Sistema de autenticação iterativo com bloqueio de segurança após 3 tentativas falhas (`exercicio05.c`).
* **Validação Restritiva de Dados:** Algoritmo de processamento de notas acadêmicas (0 a 10) que recusa inputs inválidos em tempo de execução e calcula a média aritmética (`exercicio04.c`).
* **Processamento Condicional e Módulo:** Leitura contínua de inteiros, isolamento de valores ímpares utilizando o operador `%` e totalização sob condição de parada definida pelo usuário (`exercicio03.c`).
* **Cálculo de Máximos e Faturamento:** Lógica de iteração determinística (`for`) para identificar o maior valor em um conjunto (`exercicio02.c`) e acumulação de valores de ponto flutuante vinculados a um identificador (`exercicio01.c`).
* **Geração Dinâmica de Dados:** Algoritmo iterativo para criação e formatação de tabuadas matemáticas complexas (`exemplo.c` e `exemplo_do_while.c`).

## 4. Arquitetura e Explicação do Código

### Padrão de Design e Arquitetura
O projeto adota o paradigma **Procedural e Imperativo**, característico do desenvolvimento em C nativo. Dada a natureza do escopo, não se aplicam padrões multicamadas. A arquitetura é baseada no padrão de **Entrypoint Único**, onde cada arquivo fonte possui sua própria função `main()`, atuando como um script.

### Estrutura de Diretórios
Os arquivos possuem responsabilidades estritas e não possuem dependências entre si:

- `exercicio01.c`: Responsável por interações de I/O focadas em acumulação linear de valores financeiros.
- `exercicio02.c`: Responsável por lógica condicional de extração do valor máximo (`maior_nota`) em um vetor imaginário (processado em tempo de execução).
- `exercicio03.c`: Demonstra a quebra de fluxo de execução (`break`) e validações de paridade.
- `exercicio04.c`: Aborda laços aninhados (`for` contendo `do-while`) para garantir a sanitização do dado de entrada.
- `exercicio05.c`: Implementa variáveis de estado (`tentativa`) controlando o ciclo de vida da aplicação.

### Fluxo de Dados
1. **Input (Entrada):** Os dados são capturados via *Standard Input* (teclado) utilizando a função nativa `scanf`.
2. **Processamento:** Ocorre inteiramente em memória volátil (RAM), utilizando processamento síncrono. A biblioteca `<locale.h>` aplica a localização do sistema para garantir suporte adequado a caracteres especiais e acentuação no terminal.
3. **Output (Saída):** A resposta processada é devolvida no *Standard Output* através de formatações complexas na função `printf`.
