# Aula 04 - Estruturas de Decisão

Este repositório contém a documentação atualizada para 6 algoritmos em C baseados em estruturas de controle de fluxo condicional (`if`/`else`), desenvolvidos para aplicar lógica de decisão, operadores lógicos e validações matemáticas elementares.

---

## 1. `exemplo01.c`

### 1.1 Nome do projeto

Teste de Múltiplos (2 e 5).

### 1.2 Descrição

Programa de linha de comando que tem a finalidade de classificar um número inteiro inserido pelo usuário através de estruturas de decisão simples.

* **Como funciona:** O código utiliza o operador de módulo (`%`) para extrair o resto da divisão do número lido. Caso seja divisível por 2 e por 5 simultaneamente, acusa o acerto; caso contrário, desvia para a condição secundária.



### 1.3 Funcionalidades

* Ler um número inteiro digitado no teclado.


* Verificar a divisibilidade conjunta usando o operador lógico AND (`&&`).


* Retornar a mensagem "O numero N e multiplo de 2 e 5" se a condição primária for atendida.


* Retornar "O número N é ímpar" para todos os outros casos.



### 1.4 Tecnologias utilizadas

* **C:** Linguagem estrutural.


* `<stdio.h>` e `<locale.h>`: Fornecem funções de I/O e localização.


* **Estrutura `if`/`else`:** Responsável por guiar qual mensagem será mostrada na tela.



### 1.5 Observações e Limitações (Bug Lógico)

* **Falha Semântica:** A instrução `else` agrupa qualquer número que não seja múltiplo de 10 (2 e 5) e os cataloga indiscriminadamente como "ímpar". Consequentemente, se o usuário digitar o número 4 (que é par), o programa afirmará de maneira incorreta que o número é ímpar.


* Há inconsistências estéticas nos textos exibidos, mesclando palavras com acentuação e sem acentuação.



---

## 2. `exercicio01.c`

### 2.1 Nome do projeto

Cálculo de Raízes (Fórmula de Bhaskara).

### 2.2 Descrição

Programa desenvolvido para encontrar as raízes reais de uma equação matemática do 2º grau (formato `ax² + bx + c = 0`) a partir da obtenção dos coeficientes `a`, `b` e `c`.

### 2.3 Funcionalidades

* Ler os três valores (números decimais) informados pelo usuário.


* Processar o discriminante matemático pela lógica `delta = b*b - 4*a*c`.


* Avaliar via `if` se o delta é positivo/nulo ou negativo.


* Exibir os resultados das duas raízes (`x1` e `x2`) formatadas com 2 casas decimais, ou avisar que "não existem raízes reais !!!" caso o delta seja menor que zero.



### 2.4 Tecnologias utilizadas

* **C, `<stdio.h>`, `<locale.h>**`.


* `<math.h>`: Incluída para o uso da função `sqrt` que realiza as extrações de raiz quadrada na montagem de Bhaskara.



### 2.5 Observações e Limitações

* Caso o usuário insira `0` na variável `a`, a divisão de processamento final (`/ (2*a)`) causará um erro de divisão por zero que não está prevenido no código.


* O algoritmo é restrito apenas a equações com raízes reais, ignorando cálculos de raízes complexas.



---

## 3. `exercicio02.c`

### 3.1 Nome do projeto

Aprovação Escolar por Média.

### 3.2 Descrição

Sistema escolar simplificado voltado para decidir o status acadêmico do usuário com base no preenchimento de duas notas sequenciais e no cálculo de sua média aritmética.

### 3.3 Funcionalidades

* Receber as variáveis decimais equivalentes à primeira e à segunda nota.


* Calcular a média somando e dividindo os resultados por 2.


* Utilizar controle de fluxo para julgar o resultado em cima do limite numérico estático de aprovação (nota 6).


* Exibir mensagem de parabéns com a média atingida se for `>= 6`, ou uma mensagem direta de reprovação.



### 3.4 Tecnologias utilizadas

* **C, `<stdio.h>`, `<locale.h>**`.


* **Estrutura `if`/`else`:** Faz o desvio de exibição no terminal.



### 3.5 Observações e Limitações

* A mensagem ativada no caso de reprovação oculta o número da média final do aluno na tela.


* Existem erros residuais de digitação no retorno (espaçamento duplo e falta de acento em "media").


* O código não impõe um limite lógico para as notas digitadas (ex: barra entradas maiores que 10).



---

## 4. `exercicio03.c`

### 4.1 Nome do projeto

Situação do Aluno (Média e Frequência).

### 4.2 Descrição

Versão mais robusta de um validador de aprovação. Em vez de depender exclusivamente da nota (mínimo de 6), ele cruza a avaliação incluindo um parâmetro de assiduidade do aluno, cuja frequência mínima exigida é de 75.

### 4.3 Funcionalidades

* Ler a média final e a frequência em formato decimal.


* Analisar os critérios de falta e desempenho em condicionalidades isoladas.


* Disparar avisos específicos alertando o usuário se o motivo da reprovação foi puramente por faltas ou por defasagem na nota.



### 4.4 Tecnologias utilizadas

* **C, `<stdio.h>`, `<locale.h>**`.


* **Dois blocos `if` separados (sendo um deles acoplado a um `else`):** Estrutura escolhida para aferir os dados individualmente.



### 4.5 Observações e Limitações (Bug Lógico)

* **Conflito de Retorno:** Devido à estrutura descentralizada (os `if`s das faltas e das notas não estão amarrados num mesmo bloco encadeado), um usuário que informa ter nota alta (ex: 8) mas frequência baixa (ex: 70) acionará os dois sistemas simultaneamente, fazendo o programa imprimir "Reprovado por falta!!" seguido de forma contraditória por "Aprovado!!!".



---

## 5. `exercicio04.c`

### 5.1 Nome do projeto

Classificação de Categoria por IMC.

### 5.2 Descrição

Ferramenta interativa de avaliação corporal que solicita peso (kg) e altura (m) para calcular o Índice de Massa Corporal (IMC). Uma vez processado, o sistema enquadra o usuário em um de cinco grupos nutricionais predeterminados.

### 5.3 Funcionalidades

* Efetuar a leitura do peso e altura digitados.


* Utilizar a fórmula `kg/pow(altura,2)` para estabelecer o número índice.


* Categorizar esse valor nas faixas: menor que 20 (Abaixo do peso), de 20 a <25 (Peso normal), de 25 a <30 (Sobrepeso), de 30 a <40 (Obeso) e acima de 40 (Mórbido).



### 5.4 Tecnologias utilizadas

* **C, `<stdio.h>`, `<locale.h>**`.


* **Cadeia múltipla de ramificação (`if` / `else if` / `else`):** Estrutura perfeita para gerir faixas exatas de intervalos.



### 5.5 Observações e Limitações (Erro Crítico)

* **Ausência de Dependência (Header Missing):** O código fonte invoca nativamente a função geométrica de potência (`pow`), no entanto, carece da inclusão essencial da diretiva `#include <math.h>`. Tal falha pode interromper o processo de compilação ou resultar em números corrompidos dependendo da IDE utilizada.


* O resultado retornado em tela exibe apenas a string de categoria da pessoa, sem jamais mostrar o número exato do IMC processado.



---

## 6. `exercicio05.c`

### 6.1 Nome do projeto

Orçamento de Hospedagem (Menu de Quartos).

### 6.2 Descrição

Trata-se de um sistema hoteleiro baseado em console. O software imprime as opções de acomodação disponíveis e aguarda a decisão e os dias de hospedagem do usuário para consolidar o relatório financeiro final da reserva.

### 6.3 Funcionalidades

* Exibir um menu de navegação detalhando quartos S (Simples), D (Duplo) e T (Triplo).


* Armazenar a categoria selecionada através de um dado em letra (tipo `char`).


* Suportar inserções com letras minúsculas ou maiúsculas através de validações encadeadas com o operador `||` (OU).


* Calcular o custo total multiplicando os dias pela taxa diária fixada em R$ 300, R$ 450 ou R$ 600, dependendo da tarifa.



### 6.4 Tecnologias utilizadas

* **C, `<stdio.h>`, `<locale.h>**`.


* **Tipo primitivo `char` e estruturas compostas condicionais (`if/else if`)**.



### 6.5 Observações e Limitações

* **Falha no UX do fluxo:** As requisições de digitação (tipo de quarto e número de dias) precedem o teste de validação condicional. Isso significa que, se um usuário errar a letra e acionar o status de erro "Opção inválida!!!", o sistema ainda assim cobrará e guardará o preenchimento de diárias primeiro.


* O valor em dinheiro final é impresso estaticamente sem zeros decimais pelo fato da formatação referenciar o total como um número de base unicamente inteira (`%.2d`).
