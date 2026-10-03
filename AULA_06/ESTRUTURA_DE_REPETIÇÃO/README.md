#  AUla 06 - Estrutura de Repetição

Este repositório contém a documentação atualizada para a suíte de aplicações de linha de comando (CLI) focadas em laços de repetição. Desenvolvido na linguagem **C**, o projeto resolve a necessidade de material prático para o estudo e consolidação de estruturas de controle de fluxo, laços de repetição e lógica algorítmica aplicada à programação procedural.

### Arquitetura Geral e Fluxo de Dados

* **Padrão de Design:** O ecossistema adota o paradigma Procedural e Imperativo, característico do C nativo. A arquitetura é baseada no padrão de Entrypoint Único, onde cada arquivo fonte atua como um script autônomo possuindo sua própria função `main()` e sem dependências entre si.


* **Entrada (Input):** Os dados são capturados via *Standard Input* (teclado) utilizando a função nativa `scanf`.


* **Processamento:** Ocorre inteiramente em memória volátil (RAM) de forma síncrona. A biblioteca `<locale.h>` aplica a localização do sistema para garantir o suporte adequado a caracteres especiais e acentuação no terminal.


* **Saída (Output):** A resposta é devolvida no *Standard Output* através de formatações complexas executadas pela função `printf`.



---

## 1. `exercicio01.c`

### 1.1 Nome do projeto

Cálculo e Faturamento Linear.

### 1.2 Descrição e Funcionalidades

Módulo focado em acumulação financeira que utiliza uma lógica de iteração determinística (através de um laço `for`) para acumular valores de ponto flutuante vinculados a um identificador de usuário.

* **Responsabilidade estrutural:** Interações de I/O (entrada e saída) estritamente focadas na acumulação linear de valores financeiros.



---

## 2. `exercicio02.c`

### 2.1 Nome do projeto

Cálculo de Máximos e Médias.

### 2.2 Descrição e Funcionalidades

Programa projetado para processar um conjunto de dados e identificar o maior valor inserido dentre eles. Utiliza laços de repetição determinísticos (`for`) para varrer os inputs.

* **Responsabilidade estrutural:** Aplicar lógica condicional para a extração sistemática do valor máximo (guardado na variável `maior_nota`) dentro de um vetor imaginário que é processado em tempo real de execução.



---

## 3. `exercicio03.c`

### 3.1 Nome do projeto

Processamento Condicional e Módulo.

### 3.2 Descrição e Funcionalidades

Aplicativo que realiza a leitura contínua de números inteiros, aplicando filtros matemáticos durante o laço. O algoritmo isola exclusivamente os valores ímpares utilizando o operador de módulo (`%`) e realiza a totalização desses números sob uma condição de parada que é definida pelo próprio usuário durante a interação.

* **Responsabilidade estrutural:** Demonstrar na prática a quebra intencional de fluxo de execução (usando a instrução `break`) em conjunto com validações lógicas de paridade.



---

## 4. `exercicio04.c`

### 4.1 Nome do projeto

Validação Restritiva de Dados Acadêmicos.

### 4.2 Descrição e Funcionalidades

Algoritmo de processamento projetado para o lançamento de notas acadêmicas (limitadas ao intervalo de 0 a 10). Ele recusa ativamente quaisquer inputs inválidos em tempo de execução e, após garantir a integridade dos dados, calcula a média aritmética.

* **Responsabilidade estrutural:** Abordar a mecânica de laços aninhados (uma estrutura `for` contendo um laço secundário `do-while` em seu interior) para atuar como uma barreira de sanitização do dado de entrada.



---

## 5. `exercicio05.c`

### 5.1 Nome do projeto

Sistema de Controle de Acesso.

### 5.2 Descrição e Funcionalidades

Um simulador de segurança de acesso. Trata-se de um sistema de autenticação iterativo que monitora as falhas de login e aplica um bloqueio restritivo de segurança após 3 tentativas incorretas.

* **Responsabilidade estrutural:** Implementar o uso prático de variáveis de estado (como a variável `tentativa`) para controlar e limitar o ciclo de vida da execução da aplicação.



---

## 6. `exemplo.c` / `exemplo_do_while.c`

### 6.1 Nome do projeto

Geração Dinâmica de Dados.

### 6.2 Descrição e Funcionalidades

Módulos demonstrativos focados na automação de resultados matemáticos repetitivos. O programa atua como um algoritmo iterativo voltado primariamente para a criação e a formatação de tabuadas matemáticas complexas.
