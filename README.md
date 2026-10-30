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

## 📦 Aula 8 - Vetores e Matrizes

- **Foco:** Introdução às estruturas de dados homogêneas, superando a limitação das variáveis simples ao armazenar múltiplos valores do mesmo tipo sob um único identificador na memória.

- **Vetores (Arrays 1D):** Exercícios focados em armazenar dados lineares (como salários e notas), percorrer essas listas com laços `for` e processar algoritmos clássicos de média e identificação de valores acima da média.

- **Matrizes (Arrays 2D):** Evolução para tabelas de dados cruzados (Linhas x Colunas) utilizando laços de repetição aninhados. Focado na contagem isolada de dados por linha (ex: estoque diário de um produto) e identificação de valores máximos.

- **Técnicas Abordadas:** Utilização da constante `#define` para dimensionar as estruturas de forma segura e algoritmos de varredura focados em capturar os maiores valores de um conjunto e seus respectivos índices.

  ---

### AULA 8.1 (Desafio Operadoras)

## 📊 Desafio Prático - Relatório Anual de Operadoras

- **Foco:** Aplicação avançada de matrizes (Arrays Bidimensionais) na resolução de um cenário real focado no processamento de dados e geração de estatísticas corporativas.

- **Processamento de Dados:** Utilização de laços de repetição aninhados para extrair informações analíticas da matriz em duas direções estratégicas: varredura horizontal (para avaliar o desempenho anual de cada operadora) e varredura vertical (para identificar picos sazonais de vendas mês a mês).

- **Técnicas Abordadas:** Integração da biblioteca `<math.h>` com a função `ceil()` para garantir o arredondamento matemático para cima no cálculo das médias de vendas. Construção de blocos lógicos focados em capturar referências dinâmicas (como descobrir qual string de "mês" ou "operadora" corresponde ao maior número processado).

- **Resultado:** Geração automatizada de um relatório gerencial consolidado exibindo a média mensal geral, o desempenho médio individual de cada empresa, o mês de maior volume global e a operadora líder de vendas no ano.

---

## 📂 Aula 9 - Manipulação de Arquivos

- **Foco:** Persistência de dados. O módulo ensina como criar programas que interagem diretamente com o disco rígido do sistema operacional para salvar e recuperar informações de forma permanente utilizando ponteiros `FILE`.

- **Escrita e Criação (`w` e `a`):** Demonstrações de como criar arquivos de texto do zero (modo write) ou anexar novos registros sem sobrescrever o histórico (modo append) utilizando a função formatada `fprintf`.

- **Leitura de Dados (`r`):** Práticas de leitura de arquivos existentes. Inclui a extração contínua linha por linha com a função `fgets` e a separação inteligente de dados tipados (strings e floats) utilizando laços até o final do arquivo (`EOF`) com `fscanf`.

- **Processamento e Relatórios:** Exercícios que transformam dados de texto em inteligência. Os algoritmos processam listas externas de consumo e vendas para gerar relatórios com somatórias globais, médias e identificação de picos de registro.

  ---

 ## 📦 Aula 10 - Modularização, Ponteiros e Structs

Foco: Evolução da arquitetura de software em C. O módulo ensina a abandonar scripts monolíticos gigantes em prol de códigos organizados em pequenos blocos reutilizáveis (Funções), além de introduzir a criação de tipos de dados personalizados (Structs) e o acesso direto à memória do computador.

Modularização (Funções): Práticas que demonstram como encapsular lógica de cálculos (médias, fretes, áreas). O estudante aprende a desenhar funções que recebem parâmetros, processam informações e retornam resultados exatos, facilitando testes e evitando a duplicação de regras de negócio.

Ponteiros e Referência: Introdução ao conceito mais poderoso e temido do C: os ponteiros. Demonstra-se na prática como enviar o endereço de memória (&) de uma variável para que uma função externa consiga alterar seu valor original através do asterisco (*), quebrando o limite da passagem por valor.

Structs (Registros): Substituição de vetores paralelos por Estruturas de Dados coesas. O aluno aprende a declarar entidades do mundo real (como Aluno, contendo cadastro e notas) e manipulá-las diretamente através de ponteiros e do operador seta.

Desafio de Matrizes (Operadoras): Um laboratório analítico de revisão que testa a lógica de matrizes, ensinando a extrair métricas cruzadas. Exige processamento em dois eixos (leitura horizontal para consolidar dados anuais de empresas e leitura vertical para identificar tendências mensais do mercado).
