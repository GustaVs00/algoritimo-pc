# Aula 3 (Operadores)

Este repositório contém a documentação atualizada para os 10 algoritmos em C focados em operações aritméticas, entrada/saída de dados e manipulação de variáveis, desenvolvidos na referida disciplina.

---

## 1. `exercicio_01_total_produtos_diario.c`

### 1.1 Nome do projeto

Total de produtos recebidos no dia.

### 1.2 Descrição

É um programa de linha de comando que calcula o volume total diário de produtos recebidos com base em dois turnos (manhã e tarde).

* **Finalidade:** Realizar a soma de duas quantidades inteiras para consolidar o total diário.


* **Como funciona:** O sistema lê as entradas `qte_manha` e `qte_tarde`, realiza uma operação de soma básica, e atribui o valor à variável `qte_total`, imprimindo-a na tela.



### 1.3 Funcionalidades

* Ler a quantidade recebida pela manhã como número inteiro (`%d`).


* Ler a quantidade recebida pela tarde como número inteiro (`%d`).


* Processar a soma matemática das duas variáveis.


* Exibir a mensagem com o total de recebimentos formatado.



### 1.4 Tecnologias utilizadas

* **C:** Linguagem estrutural do código.


* `<stdio.h>:` Permite a utilização de funções de entrada/saída (`printf` e `scanf`).


* `<locale.h>:` Permite o uso de `setlocale(LC_CTYPE, "")` para exibir corretamente acentos.



### 1.5 Funcionamento

* **Processamento:** `qte_total = qte_manha + qte_tarde;`.


* **Saída:** O sistema exibe "Total de produtos recebidos no dia: " seguido do número correspondente.



### 1.6 Observações e Limitações

* Há um erro de digitação na saída de texto da tarde: "Qauntidade recebida pela tarde:".


* Aceita estritamente números inteiros; valores decimais ou letras não são tratados.



---

## 2. `exercicio_02_conversao_para_minutos.c`

### 2.1 Nome do projeto

Conversão para Minutos.

### 2.2 Descrição

Programa de linha de comando desenvolvido para converter uma marcação de tempo dividida em horas e minutos para um valor absoluto em minutos.

* **Finalidade:** Transformar o tempo em uma unidade única para simplificar contagens de tempo decorrido.


* **Como funciona:** Multiplica as horas inseridas por 60 e soma aos minutos restantes.



### 2.3 Funcionalidades

* Receber um valor de horas em formato inteiro.


* Receber um valor de minutos em formato inteiro.


* Calcular o total de minutos transcorridos.


* Imprimir o resultado do tempo em minutos na tela.



### 2.4 Tecnologias utilizadas

* **C:** Linguagem base.


* `<stdio.h>` e `<locale.h>:` Bibliotecas para IO e localização padrão.



### 2.5 Funcionamento

* **Processamento:** A operação utiliza a fórmula `minuto_total = (hora * 60) + minuto;`.


* **Saída:** Exibe a string de resultado "Ja se passaram %d minuto".



### 2.6 Observações e Limitações

* **Atenção (Bug Crítico):** A linha de leitura dos minutos está configurada como `scanf("%d", minuto);`, faltando o operador de endereço comercial (`&`), o que causará falha de execução ao ler os dados na memória.


* A mensagem de retorno utiliza a palavra "minuto" no singular mesmo para quantidades plurais, e omite o acento em "Já".



---

## 3. `exercicio_03_operacoes_aritmeticas.c`

### 3.1 Nome do projeto

Operações Aritméticas Básicas.

### 3.2 Descrição

O projeto funciona como uma calculadora simplificada que aceita dois valores inteiros e retorna o resultado simultâneo de três operações fundamentais: soma, subtração e multiplicação.

### 3.3 Funcionalidades

* Ler sequencialmente o primeiro e o segundo número.


* Executar três cálculos independentes com base nesses mesmos dois números inteiros.


* Imprimir, linha por linha, o total individual da soma, da subtração e da multiplicação.



### 3.4 Tecnologias utilizadas

* **C:** Linguagem base.


* `<stdio.h>` e `<locale.h>:` Bibliotecas padrão do projeto.



### 3.5 Funcionamento

* **Processamento:** As atribuições são feitas individualmente: `soma = num1 + num2;`, `subtracao = num1 - num2;`, `multiplicacao = num1 * num2;`.


* **Saída:** O sistema executa uma quebra de linha (`\n`) para cada exibição de resultado a fim de organizar o layout.



### 3.6 Observações e Limitações

* Os textos de saída perdem a acentuação (ex: `subtracao`, `multiplicacao`) apesar de importar a biblioteca local.


* A operação de divisão não foi incluída no programa.



---

## 4. `exercicio_04_consumo_energia_mensal.c`

### 4.1 Nome do projeto

Cálculo de Consumo de Energia Mensal.

### 4.2 Descrição

Um estimador utilitário para calcular a taxa de consumo de energia (em quilowatts-hora) de um equipamento em um período fechado de 30 dias.

* **Finalidade:** Prover um relatório de gasto em kWh a partir da potência do produto e das horas de uso.


* **Como funciona:** Calcula o produto da potência por horas diárias por 30 dias, e converte de W para kW dividindo por 1000.



### 4.3 Funcionalidades

* Receber a potência do aparelho usando variáveis flutuantes (decimais).


* Receber o tempo de uso do aparelho por dia, também em float.


* Realizar o cálculo de energia convertida.



### 4.4 Tecnologias utilizadas

* **C:** Linguagem base.


* `<stdio.h>` e `<locale.h>:` Bibliotecas padrão de sistema e linguagem.



### 4.5 Funcionamento

* **Processamento:** `consumo_mensal = (potencial*horas*30)/1000;`.


* **Saída:** O programa formata a exibição do consumo de energia para apenas duas casas decimais utilizando `%.2f`.



### 4.6 Observações e Limitações

* A variável de potência do equipamento é nomeada como `potencial` no código, o que desvia um pouco da terminologia física exata.


* O número de dias mensais é estabelecido estaticamente como 30 dias no algoritmo.



---

## 5. `exercicio_05_calculo_imc.c`

### 5.1 Nome do projeto

Calculadora de Índice de Massa Corporal (IMC).

### 5.2 Descrição

Ferramenta voltada para análise corporal que pede o peso em quilogramas e a altura em metros para entregar um panorama padronizado do IMC.

### 5.3 Funcionalidades

* Ler o peso (`float`) e a altura (`float`).


* Calcular o índice dividindo o peso pelo quadrado da altura informada.


* Apresentar ao usuário a medida padronizada em `kg/m²`.



### 5.4 Tecnologias utilizadas

* **C:** Linguagem base.


* `<stdio.h>` e `<locale.h>:` Importações principais.



### 5.5 Funcionamento

* **Processamento:** O programa emula o cálculo quadrático multiplicando a variável da altura por ela mesma no denominador: `imc = peso / (altura*altura);`.


* **Saída:** O texto de exibição já inclui a unidade da medição ao final, resultando em: "O Índice de Massa Corporal é: %.2f kg/m²".



### 5.6 Observações e Limitações

* O programa finaliza após entregar o valor do IMC sem classificar em categorias de saúde (ex: Sobrepeso, Obeso).



---

## 6. `exercicio_06_orcamento_revestimento.c`

### 6.1 Nome do projeto

Orçamento e Dimensionamento de Revestimento.

### 6.2 Descrição

O projeto automatiza o orçamento logístico para revestir uma superfície, estimando metragem, o número de unidades de caixas de piso que devem ser compradas e o preço de custo total final.

### 6.3 Funcionalidades

* Obter dados lineares (largura e comprimento em metros) para calcular área.


* Calcular a quantidade de embalagens com capacidade estimada de 2.5m² cada.


* Forçar o arredondamento numérico superior garantindo a compra de unidades inteiras (caixas fechadas).


* Calcular o custo cruzando as caixas arredondadas com o valor unitário.



### 6.4 Tecnologias utilizadas

* **C:** Linguagem base.


* `<math.h>:` Essencialmente aplicada para fazer a invocação da função `ceil()`, que faz o arredondamento sempre para cima.



### 6.5 Funcionamento

* **Processamento:** Baseia-se em 3 fórmulas lógicas: `area = (largura*comprimento);`, `quantidade = (area/2.5);` e `valor_total = ceil(quantidade)*valor_unitario;`.


* **Saída:** Impressão de três faturamentos, com o total utilizando a formatação `R$ %2.f`.



### 6.6 Observações e Limitações

* A capacidade métrica por caixa não é dinâmica, está inserida rigidamente no divisor `2.5` do código fonte.



---

## 7. `exercicio_07_media_aritmetica.c`

### 7.1 Nome do projeto

Média Aritmética Simples.

### 7.2 Descrição

Algoritmo estritamente matemático desenvolvido para processar quatro inserções decimais do usuário (`num1`, `num2`, `num3`, `num4`) e entregar uma média equalizada entre eles.

### 7.3 Funcionalidades

* Captar quatro números inteiros ou flutuantes em sequência.


* Processar a lógica de média simples agregando os números num agrupamento de 4.


* Mostrar o cálculo reduzido em 2 pontuações decimais (`%.2f`).



### 7.4 Tecnologias utilizadas

* **C:** Linguagem base.


* `<stdio.h>` e `<locale.h>`.



### 7.5 Funcionamento

* **Processamento:** Exige encapsulamento com parênteses para ditar a prioridade de operação na linha `media = (num1+num2+num3+num4)/4;`.


* **Saída:** Retorna a string informativa com o dado unificado: "A média aritmética é: %.2f".



---

## 8. `exercicio_08_media_ponderada.c`

### 8.1 Nome do projeto

Sistema de Média Ponderada.

### 8.2 Descrição

Diferente da média comum, este projeto de sistema classifica três notas atribuindo pesos específicos predeterminados (1, 2 e 4) para cada uma, de modo que notas sucessivas impactam o boletim mais do que as iniciais.

### 8.3 Funcionalidades

* Realizar a leitura isolada de três notas `float` na memória.


* Condicionar as três variáveis à sua respectiva carga de peso.


* Retornar a média final validada pelos critérios acadêmicos do algoritmo.



### 8.4 Tecnologias utilizadas

* **C:** Linguagem base.


* `<stdio.h>` e `<locale.h>`.



### 8.5 Funcionamento

* **Processamento:** Aplica a multiplicação estrutural cruzando cada item lido no código `media = ((nota1*1)+(nota2*2)+(nota3*4))/(1+2+4);` dividindo tudo por 7 (a soma das ponderações).



### 8.6 Observações e Limitações

* Os pesos (1, 2 e 4) estão intrínsecos de forma estática no código-fonte, não podendo ser reajustados pelo usuário e sequer são relatados visualmente em tela.



---

## 9. `exercicio_09_distancia_entre_pontos.c`

### 9.1 Nome do projeto

Teorema Cartesiano de Distância Entre Dois Pontos.

### 9.2 Descrição

Ferramenta de geometria analítica projetada para extrair o raio de distância de dois pontos formados por eixos X e Y flutuantes.

### 9.3 Funcionalidades

* Coletar o eixo X e Y correspondente ao primeiro ponto espacial.


* Coletar o eixo X e Y correspondente ao segundo ponto espacial.


* Executar a lei euclidiana calculando as potências de diferenças e extraindo a raiz geral de tudo.



### 9.4 Tecnologias utilizadas

* **C:** Linguagem base.


* `<math.h>:` Fundamental para empregar a função de raiz quadrada matemática `sqrt()` e as operações de potenciação `pow()` em ambos os eixos.



### 9.5 Funcionamento

* **Processamento:** O código utiliza as funções matemáticas do cabeçalho C para emular Pitágoras: `distancia = sqrt (pow((x1-x2),2)+ pow((y1-y2),2));`.


* **Saída:** Fornece a medida bruta de distância entre os vértices exibida na precisão de `%.2f`.



---

## 10. `exercicio_10_alcance_horizontal_projetil.c`

### 10.1 Nome do projeto

Cálculo Físico de Alcance de Projéteis.

### 10.2 Descrição

Um simulador simplificado de cinemática base que, partindo de um cenário de lançamento oblíquo, utiliza o ângulo e a velocidade inicial para prever a metragem estimada do deslocamento horizontal percorrido antes do impacto no chão.

### 10.3 Funcionalidades

* Obter o dado numérico `float` de uma velocidade expressa em m/s.


* Obter a angulação de lançamento medida em graus.


* Converter as medições de angulação de graus para formato de radiano a fim de serem matematicamente utilizáveis pelas equações em linguagem C.


* Retornar o alcance horizontal.



### 10.4 Tecnologias utilizadas

* **C:** Linguagem base.


* `<math.h>:` Carregada no cabeçalho para utilização das funções avançadas de potenciação via `pow()` e aplicação de trigonometria de seno com a função `sin()`.



### 10.5 Funcionamento

* **Processamento:**
1. Conversão de medidas de lançamento: `angulo_radiano = (angulo*3.14)/180;`.


2. Equação física com base na velocidade elevada e gravidade fixada em 9.8 m/s²: `alcance_horizontal = (pow(velocidade, 2) *sin (2*angulo_radiano))/9.8;`.




* **Saída:** Notifica com a mensagem "O alcance horizontal estimado é: %.2f metros".



### 10.6 Observações e Limitações

* A aproximação da constante Pi está fixa como `3.14`.


* A aceleração da gravidade utilizada como base do ambiente é delimitada rigidamente em `9.8` como padrão estático.