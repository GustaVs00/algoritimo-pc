# PROJETO 1 — `exemplo01`

## 1. README DO PROJETO

### 1.1 Nome do projeto

"Teste de um número: múltiplo de 2 e 5, ou mensagem de 'ímpar'".

### 1.2 Descrição

Programa de **linha de comando** (roda em uma janela de texto, sem telas gráficas). Ele pede um número inteiro e escolhe entre duas mensagens:

- se o número for **divisível por 2 e também por 5**, mostra que ele é múltiplo de 2 e 5;
- caso contrário, mostra uma mensagem dizendo que o número é **ímpar**.

**Finalidade:** classificar um número digitado em uma de duas mensagens.

**Problema que resolve:** o objetivo não está descrito no código. *(Interpretação: o nome `exemplo01` sugere um exemplo didático de decisão com `if`/`else`.)*

**Como funciona:** lê um inteiro, testa com o operador `%` (resto da divisão) se ele é divisível por 2 e por 5 e imprime a mensagem correspondente.

**Atenção:** a mensagem do "caso contrário" diz sempre "ímpar", mas esse caminho também é seguido por números **pares** que não são múltiplos de 5 (por exemplo, 4). Isso é detalhado em 2.8.

### 1.3 Funcionalidades

1. Ler um número inteiro digitado pelo usuário.
2. Verificar se ele é múltiplo de 2 **e** de 5 ao mesmo tempo.
3. Se for, exibir: `O numero N e multiplo de 2 e 5`.
4. Se não for, exibir: `O número N é ímpar`.

Não existem: repetição (laço), verificação separada de "par", menus ou validação de dados.

### 1.4 Tecnologias utilizadas

| Tecnologia | Onde aparece | Função no projeto |
|---|---|---|
| Linguagem **C** | extensão `.c` e sintaxe | Linguagem do programa |
| `stdio.h` | `#include<stdio.h>` | Fornece `printf` (mostrar texto) e `scanf` (ler do teclado) |
| `locale.h` | `#include<locale.h>` | Fornece `setlocale` (configuração regional) |
| Estrutura `if`/`else` | corpo de `main` | Escolhe qual mensagem mostrar |

### 1.5 Funcionamento

- **Entrada:** um número inteiro digitado no teclado.
- **Processamento:** testa `num % 2 == 0 && num % 5 == 0`.
- **Saída:** uma de duas mensagens, ambas terminadas em quebra de linha.
- **Regra utilizada:** "divisível por 2 e por 5" → mensagem de múltiplo; qualquer outro caso → mensagem de "ímpar".

### 1.6 Exemplos de uso

*(Exemplos calculados manualmente a partir do código.)*

```
Digite um numero: 10
O numero 10 e multiplo de 2 e 5
```

```
Digite um numero: 7
O número 7 é ímpar
```

```
Digite um numero: 4
O número 4 é ímpar
```

No último exemplo, o programa afirma que 4 é ímpar, o que é incorreto (4 é par). Isso acontece porque 4 não é múltiplo de 5 e, portanto, cai no "caso contrário" do código.

### 1.7 Observações ou limitações

- A mensagem do "caso contrário" não distingue números ímpares de números pares que não são múltiplos de 5.
- Os textos misturam palavras sem acento (`numero`, `e`) e com acento (`número`, `é`, `ímpar`); veja 2.8.
- Só aceita números inteiros e não há tratamento para entradas inválidas.
- Sem instruções de compilação/execução nos arquivos.

---

# PROJETO 2 — `exercicio01`

## 1. README DO PROJETO

### 1.1 Nome do projeto

"Cálculo das raízes de uma equação a partir de a, b e c (fórmula de Bhaskara)".

### 1.2 Descrição

Programa de linha de comando que pede três valores (`a`, `b` e `c`), calcula o valor `delta = b² − 4·a·c` e, dependendo do resultado:

- se `delta` for **maior ou igual a zero**, calcula e mostra duas raízes (`x1` e `x2`);
- se `delta` for **negativo**, mostra a mensagem "não existem raízes reais".

**Finalidade:** encontrar as raízes reais de uma equação a partir dos coeficientes `a`, `b` e `c`.

**Problema que resolve:** o código diz apenas "Raízes da equação". *(Interpretação: pelos nomes `a`, `b`, `c`, `delta` e pelas contas, corresponde à equação do 2º grau `ax² + bx + c = 0` resolvida pela fórmula de Bhaskara. O código não menciona "2º grau" nem "Bhaskara".)*

**Como funciona:** lê os três valores, calcula `delta`, testa se é maior ou igual a zero e, se for, aplica `(-b ± raiz(delta)) / (2a)`.

### 1.3 Funcionalidades

1. Ler `a`, `b` e `c` (números decimais).
2. Calcular `delta = b*b - 4*a*c`.
3. Verificar se `delta >= 0`.
4. Calcular `x1 = (-b + sqrt(delta)) / (2*a)` e `x2 = (-b - sqrt(delta)) / (2*a)`.
5. Exibir `x1` e `x2` com 2 casas decimais.
6. Se `delta < 0`, exibir `não existem raízes reais !!!`.

Não há verificação de `a = 0`, nem tratamento especial para `delta = 0`.

### 1.4 Tecnologias utilizadas

| Tecnologia | Função |
|---|---|
| Linguagem **C** | Linguagem do programa |
| `stdio.h` | `printf` e `scanf` |
| `locale.h` | `setlocale` |
| `math.h` | Função `sqrt` (raiz quadrada) |
| `if`/`else` | Decide entre calcular as raízes ou avisar que não existem |

### 1.5 Funcionamento

- **Entrada:** `a`, `b` e `c`.
- **Processamento:** `delta = b*b - 4*a*c`; se `delta >= 0`, calcula `x1` e `x2`.
- **Saída:** duas raízes (uma por linha) ou a mensagem de que não existem raízes reais.

### 1.6 Exemplos de uso

*(Exemplos calculados manualmente.)*

Com raízes:

```
Digite o valor de a: 1
Digite o valor de b: -3
Digite o valor de c: 2
Raízes da equação:
x1: 2.00
x2: 1.00
```

Conta: delta = (−3)² − 4·1·2 = 9 − 8 = 1; x1 = (3 + 1) / 2 = 2; x2 = (3 − 1) / 2 = 1.

Sem raízes reais:

```
Digite o valor de a: 1
Digite o valor de b: 0
Digite o valor de c: 1
não existem raízes reais !!! 
```

### 1.7 Observações ou limitações

- Se `a` for 0, o programa divide por zero (ver 2.8).
- Se `delta` for 0, as duas raízes saem iguais (o código não trata esse caso de forma especial).
- O programa só trata raízes **reais**; não calcula raízes complexas.
- Sem validação de entrada e sem instruções de compilação/execução nos arquivos.

---

# PROJETO 3 — `exercicio02`

## 1. README DO PROJETO

### 1.1 Nome do projeto

"Aprovação por média de duas notas".

### 1.2 Descrição

Programa de linha de comando que pede **duas notas**, calcula a **média aritmética** `(nota1 + nota2) / 2` e diz se o aluno foi **aprovado** (média maior ou igual a 6) ou **reprovado** (média menor que 6).

- **Finalidade:** decidir aprovação ou reprovação com base na média de duas notas.
- **Problema que resolve:** o código não declara o objetivo. As mensagens ("aprovado", "reprovado") indicam um contexto escolar *(interpretação)*.
- **Como funciona:** lê as notas, calcula a média e usa `if`/`else` para escolher a mensagem.

### 1.3 Funcionalidades

1. Ler a primeira e a segunda nota (decimais).
2. Calcular a média aritmética.
3. Se a média for maior ou igual a 6: exibir mensagem de aprovação **com a média**.
4. Caso contrário: exibir mensagem de reprovação (**sem** mostrar a média).

### 1.4 Tecnologias utilizadas

| Tecnologia | Função |
|---|---|
| Linguagem **C** | Linguagem do programa |
| `stdio.h` | `printf` e `scanf` |
| `locale.h` | `setlocale` |
| `if`/`else` | Escolhe entre aprovado e reprovado |

### 1.5 Funcionamento

- **Entrada:** duas notas decimais.
- **Processamento:** `media = (nota1 + nota2)/2`; teste `media >= 6`.
- **Saída:** `Parabéns! Você foi aprovado com  a media X.XX` ou `Você foi reprovado ! `.
- **Regra identificada:** média mínima de aprovação = **6** (valor fixo no código).

### 1.6 Exemplos de uso

*(Exemplos calculados manualmente.)*

```
Digite a primeira nota: 7
Digite a segunda nota: 8
Parabéns! Você foi aprovado com  a media 7.50
```

```
Digite a primeira nota: 4
Digite a segunda nota: 6
Você foi reprovado ! 
```

No segundo exemplo, a média é 5, menor que 6. Com média exatamente 6, o aluno é aprovado, pois a condição usa `>=`.

### 1.7 Observações ou limitações

- A faixa válida das notas (por exemplo, 0 a 10): **informação não identificada nos arquivos fornecidos**; o código não valida.
- A mensagem de reprovação não mostra a média.
- Pequenas falhas de texto ("com  a media", com dois espaços e sem acento em "media"); veja 2.8.
- Sem instruções de compilação/execução nos arquivos.

---

# PROJETO 4 — `exercicio03`

## 1. README DO PROJETO

### 1.1 Nome do projeto

"Situação do aluno por média final e frequência".

### 1.2 Descrição

Programa de linha de comando que pede a **média final** e a **frequência** de um aluno e mostra mensagens de situação:

- se a frequência for **menor que 75**: "Reprovado por falta!!";
- em seguida, **separadamente**: se a média for **menor que 6**, "Reprovado por nota !!"; caso contrário, "Aprovado!!!".

**Finalidade:** informar se o aluno foi aprovado ou reprovado e por qual motivo.

**Problema que resolve:** não declarado no código *(interpretação: contexto escolar, pelas palavras "aluno", "média", "frequência" e "aprovado/reprovado")*.

**Atenção:** as duas verificações são **independentes**. Por isso, um aluno com frequência baixa e média alta recebe as mensagens "Reprovado por falta!!" **e** "Aprovado!!!". Veja 1.9 e 2.8.

### 1.3 Funcionalidades

1. Ler a média final (decimal).
2. Ler a frequência (decimal).
3. Se `frequencia < 75`: exibir "Reprovado por falta!!".
4. Se `media < 6`: exibir "Reprovado por nota !!"; senão, exibir "Aprovado!!!".

### 1.4 Tecnologias utilizadas

| Tecnologia | Função |
|---|---|
| Linguagem **C** | Linguagem do programa |
| `stdio.h` | `printf` e `scanf` |
| `locale.h` | `setlocale` |
| Dois blocos `if` (o segundo com `else`) | Verificam frequência e nota |

### 1.5 Funcionamento

- **Entrada:** média final e frequência.
- **Processamento:** dois testes separados: `frequencia < 75` e `media < 6`.
- **Saída:** de uma a duas linhas, conforme a tabela abaixo.
- **Regras identificadas:** limite de frequência = 75 e média mínima = 6 (valores fixos). A unidade da frequência (por exemplo, porcentagem) **não está indicada** no código.

| Frequência | Média | O que o programa imprime |
|---|---|---|
| menor que 75 | menor que 6 | `Reprovado por falta!!` e depois `Reprovado por nota !!` |
| menor que 75 | 6 ou mais | `Reprovado por falta!!` e depois `Aprovado!!!` (**contraditório**) |
| 75 ou mais | menor que 6 | `Reprovado por nota !!` |
| 75 ou mais | 6 ou mais | `Aprovado!!!` |

### 1.6 Exemplos de uso

*(Exemplos calculados manualmente.)*

```
Qual a média final do aluno? 8
Qual a frequência do aluno? 70
Reprovado por falta!!
Aprovado!!!
```

```
Qual a média final do aluno? 5
Qual a frequência do aluno? 90
Reprovado por nota !!
```

```
Qual a média final do aluno? 7
Qual a frequência do aluno? 80
Aprovado!!!
```

### 1.7 Observações ou limitações

- Existe uma combinação de entradas (frequência menor que 75 e média 6 ou mais) em que o programa mostra "Reprovado por falta!!" e "Aprovado!!!" juntos.
- Se o comportamento desejado for outro (por exemplo, mostrar só uma mensagem), isso **não está descrito nos arquivos**.
- Sem validação de entrada e sem instruções de compilação/execução nos arquivos.

---

# PROJETO 5 — `exercicio04`

## 1. README DO PROJETO

### 1.1 Nome do projeto

"Classificação por IMC".

### 1.2 Descrição

Programa de linha de comando que pede o **peso (em kg)** e a **altura (em metros)**, calcula `imc = kg / altura²` e mostra em qual **categoria** o resultado se enquadra.

**Categorias identificadas no código:**

| Valor de `imc` | Mensagem exibida |
|---|---|
| menor que 20 | `Você está na categoria abaixo do peso` |
| de 20 até menos de 25 | `Você está na categoria peso normal` |
| de 25 até menos de 30 | `Você está na categoria sobrepeso` |
| de 30 até menos de 40 | `Você está na categoria obeso` |
| 40 ou mais | `Você está na categoria mórbido` |

**Finalidade:** calcular o índice e classificá-lo por faixas.

**Problema que resolve:** não declarado. A origem dos limites (20, 25, 30, 40) **não é citada** nos arquivos.

**Atenção:** o código usa a função `pow` **sem incluir** a biblioteca `math.h`. Isso é um problema técnico importante (ver 1.10 e 2.8).

### 1.3 Funcionalidades

1. Ler o peso (decimal).
2. Ler a altura (decimal).
3. Calcular o índice: `kg/pow(altura,2)`.
4. Classificar o índice em cinco categorias.
5. Exibir a mensagem da categoria.

### 1.4 Tecnologias utilizadas

| Tecnologia | Função |
|---|---|
| Linguagem **C** | Linguagem do programa |
| `stdio.h` | `printf` e `scanf` |
| `locale.h` | `setlocale` |
| Função `pow` | Eleva a altura ao quadrado. **Pertence à `math.h`, que não foi incluída no arquivo** |
| Cadeia `if` / `else if` / `else` | Escolhe a categoria |

### 1.5 Funcionamento

- **Entrada:** peso em kg e altura em metros.
- **Processamento:** `imc = kg/pow(altura,2)` e uma cadeia de comparações.
- **Saída:** uma única mensagem de categoria (sem mostrar o número calculado).

### 1.6 Exemplos de uso

*(Exemplos calculados manualmente. Valem para o comportamento **pretendido**, isto é, se o programa compilar e executar corretamente; veja 1.10.)*

```
Qual o peso (em Kg)? 70
Qual a altura(em metros)? 1.75
Você está na categoria peso normal
```

Conta: 1,75² = 3,0625; 70 ÷ 3,0625 ≈ 22,86 → entre 20 e 25.

```
Qual o peso (em Kg)? 50
Qual a altura(em metros)? 1.70
Você está na categoria abaixo do peso
```

Conta: 1,70² = 2,89; 50 ÷ 2,89 ≈ 17,30 → menor que 20.

### 1.7 Observações ou limitações

- **Falta `#include<math.h>`:** `pow` é usada sem a biblioteca que a declara. Dependendo do compilador, isso pode impedir a compilação, gerar avisos ou levar a um resultado incorreto (detalhes em 2.8).
- O número do índice não é exibido; só a categoria.
- Altura igual a 0 ou valores inválidos não são tratados (ver 2.8).
- A fonte dos limites das faixas: **informação não identificada nos arquivos fornecidos**.
- Sem instruções de compilação/execução nos arquivos.

---

# PROJETO 6 — `exercicio05`

## 1. README DO PROJETO

### 1.1 Nome do projeto

"Cálculo do valor de hospedagem por tipo de quarto".

### 1.2 Descrição

Programa de linha de comando que mostra um **menu** de tipos de quarto, pergunta a **opção** e a **quantidade de diárias**, e exibe o **total a pagar em reais**.

**Tipos de quarto e valores identificados no código:**

| Opção (maiúscula ou minúscula) | Quarto | Multiplicador usado no cálculo |
|---|---|---|
| `S` ou `s` | Quarto simples | 300 |
| `D` ou `d` | Quarto duplo | 450 |
| `T` ou `t` | Quarto triplo | 600 |

**Finalidade:** calcular o custo da hospedagem.

**Problema que resolve:** o código não descreve o objetivo. *(Interpretação: os multiplicadores são o valor por diária, já que o total é `quantidade de diárias × valor`.)*

**Como funciona:** lê a opção e o número de diárias; um `if`/`else if`/`else` escolhe o valor e o programa imprime `Total a pagar R$ ...`. Opção diferente de S, D e T resulta em "Opção inválida!!!".

### 1.3 Funcionalidades

1. Exibir o menu com três tipos de quarto.
2. Ler a opção (um caractere).
3. Ler a quantidade de diárias (inteiro).
4. Calcular o total conforme a opção (300, 450 ou 600 por diária).
5. Aceitar a opção em letra maiúscula ou minúscula.
6. Exibir "Opção inválida!!!" quando a opção não é S, D ou T.

### 1.4 Tecnologias utilizadas

| Tecnologia | Função |
|---|---|
| Linguagem **C** | Linguagem do programa |
| `stdio.h` | `printf` e `scanf` |
| `locale.h` | `setlocale` |
| Tipo `char` | Guarda a letra da opção |
| Cadeia `if` / `else if` / `else` e operador `||` | Escolhe o valor por opção |

### 1.5 Funcionamento

- **Entrada:** uma letra (opção) e um número inteiro (diárias).
- **Processamento:** compara a letra com S/D/T (maiúsculas e minúsculas) e multiplica as diárias por 300, 450 ou 600.
- **Saída:** `Total a pagar R$ <valor>` ou `Opção inválida!!!`.
- **Observação sobre a ordem:** as **duas** perguntas são feitas antes da verificação da opção. Portanto, a quantidade de diárias é pedida mesmo quando a opção é inválida.

### 1.6 Exemplos de uso

*(Exemplos calculados manualmente. O título e a palavra "DIgite" seguem o texto do código, com o acento restaurado por dedução.)*

```
Hospedagem Anália:
[S] Quarto simples:
[D] Quarto duplo:
[T] Quarto triplo:
DIgite uma opção: d
Qual a quantidade de diárias: 3
Total a pagar R$ 1350
```

Conta: 3 × 450 = 1350.

```
DIgite uma opção: X
Qual a quantidade de diárias: 2
Opção inválida!!!
```

### 1.7 Observações ou limitações

- Os valores (300, 450, 600) não aparecem no menu e estão fixos no código.
- O total é impresso com `%.2d` (que **não** mostra centavos; ver 2.5). Como os valores são inteiros, não há centavos a mostrar.
- Não há validação da quantidade de diárias (zero e negativos são aceitos).
- Texto com erro de digitação: "DIgite".
- Sem instruções de compilação/execução nos arquivos.

---
