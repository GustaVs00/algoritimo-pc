# PROJETO 1 — `exercicio_01`

## 1. README DO PROJETO

### 1.1 Nome do projeto

"Total de produtos recebidos no dia".

### 1.2 Descrição

É um programa de **linha de comando** (roda em uma janela de texto, sem telas gráficas). Ele pergunta ao usuário:

1. a quantidade recebida **pela manhã**;
2. a quantidade recebida **pela tarde**.

Em seguida soma os dois valores e mostra a frase **"Total de produtos recebidos no dia"** com o resultado.

- **Finalidade:** calcular o total diário a partir de duas quantidades (manhã e tarde).
- **Problema que resolve:** o objetivo não está descrito em nenhum comentário. Pelas mensagens de tela, o programa parece servir para totalizar recebimentos de produtos em um dia *(interpretação)*.
- **Como funciona, em termos gerais:** lê dois números inteiros do teclado → soma → imprime o total.

### 1.3 Funcionalidades

1. Ler a quantidade recebida pela manhã (número inteiro).
2. Ler a quantidade recebida pela tarde (número inteiro).
3. Calcular o total (manhã + tarde).
4. Exibir o total na tela.

**Não existem** no código: validação dos dados digitados, repetição (loops), menus, gravação em arquivo ou qualquer outra funcionalidade além das listadas.

### 1.4 Tecnologias utilizadas

| Tecnologia | Onde aparece | Função no projeto |
|---|---|---|
| Linguagem **C** | extensão `.c` e sintaxe do código | Linguagem em que o programa foi escrito |
| `stdio.h` | `#include<stdio.h>` | Fornece `printf` (mostrar texto) e `scanf` (ler do teclado) |
| `locale.h` | `#include<locale.h>` | Fornece `setlocale` (configuração regional) |

Nenhum framework ou biblioteca externa foi identificado.


### 1.4 Funcionamento

- **Entrada:** dois números inteiros digitados no teclado (manhã e tarde).
- **Processamento:** `qte_total = qte_manha + qte_tarde`.
- **Saída:** mensagem com o total, na tela.
- **Regras de negócio:** nenhuma além da soma simples.

### 1.5 Exemplos de uso

*(Exemplo calculado manualmente a partir do código, não extraído dos arquivos.)*

```
Quantidade recebida pela manhã: 30
Qauntidade recebida pela tarde: 45
Total de produtos recebidos no dia: 75
```

O texto "Qauntidade" está escrito assim no código (erro de digitação, comentado em 2.8).

### 1.6 Observações ou limitações

- Só aceita números **inteiros** (`%d`). Não há tratamento para letras ou valores inválidos.
- O programa não imprime uma quebra de linha no final da mensagem.
- Não existem instruções de compilação/execução nos arquivos.
- Enunciado original: não fornecido.

---

# PROJETO 2 — `exercicio_02`

## 1. README DO PROJETO

### 1.1 Nome do projeto

"Conversão de horas e minutos para minutos totais".

### 1.2 Descrição

Programa de linha de comando que pergunta **hora** e **minuto**, converte tudo para minutos (`hora × 60 + minuto`) e imprime a frase **"Ja se passaram X minuto"**.

- **Finalidade:** calcular o total de minutos correspondente a um valor em horas mais minutos.
- **Problema que resolve:** o código não declara o objetivo. A frase "Ja se passaram…" sugere um cálculo de tempo transcorrido, mas o código não diz de quando o tempo é contado *(interpretação)*.
- **Como funciona:** lê dois inteiros, faz a conversão e imprime.

**Atenção:** este programa tem um **erro na leitura de `minuto`** (falta o `&` no `scanf`), descrito em 2.8. Na forma como está, o funcionamento correto não é garantido.

### 1.3 Funcionalidades

1. Ler a hora (inteiro).
2. Ler o minuto (inteiro) — **com o defeito descrito em 2.8**.
3. Calcular `(hora * 60) + minuto`.
4. Exibir o total de minutos.

### 1.4 Tecnologias utilizadas

| Tecnologia | Função |
|---|---|
| Linguagem **C** | Linguagem do programa |
| `stdio.h` | `printf` e `scanf` |
| `locale.h` | `setlocale` |



### 1.5 Funcionamento

- **Entrada:** hora e minuto (inteiros).
- **Processamento:** `minuto_total = (hora * 60) + minuto`.
- **Saída:** `Ja se passaram <minuto_total> minuto`.

### 1.6 Exemplos de uso

*(Exemplo do comportamento **pretendido**, calculado manualmente. Ele só vale se o `&` faltante for corrigido.)*

```
hora?2
minuto?30
Ja se passaram 150 minuto
```

Com o código exatamente como foi enviado, esse resultado **não é garantido** (ver 2.8).

### 1.7 Observações ou limitações

- Falta o `&` em `scanf("%d", minuto);`.
- A mensagem usa "minuto" no singular mesmo para valores diferentes de 1, e "Ja" sem acento.
- Não há validação (por exemplo, aceitaria 90 como minuto ou números negativos).
- Não há instruções de compilação/execução nos arquivos.

---

# PROJETO 3 — `exercicio_03`

## 1. README DO PROJETO

### 1.1 Nome do projeto

"Soma, subtração e multiplicação de dois números".

### 1.2 Descrição

Programa de linha de comando que pede **dois números inteiros** e mostra três resultados: a **soma**, a **subtração** (primeiro − segundo) e a **multiplicação**.

- **Finalidade:** realizar três operações aritméticas básicas sobre dois números.
- **Problema que resolve:** objetivo não declarado. O programa funciona como uma calculadora simples de três operações *(interpretação)*.
- **Como funciona:** lê `num1` e `num2`, calcula as três operações e imprime os três resultados, um por linha.

### 1.3 Funcionalidades

1. Ler o primeiro número inteiro.
2. Ler o segundo número inteiro.
3. Calcular a soma (`num1 + num2`).
4. Calcular a subtração (`num1 - num2`).
5. Calcular a multiplicação (`num1 * num2`).
6. Exibir os três resultados.

Não há divisão, menu de escolha de operação, nem repetição.

### 1.4 Tecnologias utilizadas

| Tecnologia | Função |
|---|---|
| Linguagem **C** | Linguagem do programa |
| `stdio.h` | `printf` e `scanf` |
| `locale.h` | `setlocale` |

### 1.5 Funcionamento

- **Entrada:** dois inteiros.
- **Processamento:** três contas independentes entre `num1` e `num2`.
- **Saída:** três linhas: `soma total`, `subtracao total`, `multiplicacao total`.

### 1.6 Exemplos de uso

*(Exemplo calculado manualmente.)*

```
Digite o primeiro número: 8
Digite o segundo número: 3

soma total: 11
subtracao total: 5
multiplicacao total: 24
```

### 1.7 Observações ou limitações

- Aceita apenas inteiros; digitar um decimal como `2.5` causa comportamento inesperado (ver 2.8).
- Rótulos de saída sem acentos (`subtracao`, `multiplicacao`).
- Sem instruções de compilação/execução nos arquivos.

---

# PROJETO 4 — `exercicio_04`

## 1. README DO PROJETO

### 1.1 Nome do projeto

"Consumo mensal de energia de um equipamento".

### 1.2 Descrição

Programa de linha de comando que pergunta a **potência do equipamento em watts (W)** e as **horas de uso por dia**, e calcula o **consumo mensal em kWh**, usando a fórmula `(potência × horas × 30) / 1000`.

- **Finalidade:** estimar quanto um equipamento consome em um mês.
- **Problema que resolve:** o código não declara o objetivo. As mensagens ("Potência do equipamento (W)", "consumo mensal … kwh") indicam a estimativa de consumo de energia *(interpretação)*.
- **Como funciona:** lê dois números decimais, aplica a fórmula e mostra o resultado com 2 casas decimais.

### 1.3 Funcionalidades

1. Ler a potência em W (decimal).
2. Ler as horas de uso por dia (decimal).
3. Calcular o consumo mensal usando 30 dias fixos.
4. Exibir o resultado com 2 casas decimais, seguido de "kwh".

Não existe cálculo de custo em dinheiro, tarifa nem cadastro de vários equipamentos.

### 1.4 Tecnologias utilizadas

| Tecnologia | Função |
|---|---|
| Linguagem **C** | Linguagem do programa |
| `stdio.h` | `printf` e `scanf` |
| `locale.h` | `setlocale` |

### 1.5 Funcionamento

- **Entrada:** potência (W) e horas por dia.
- **Processamento:** `consumo_mensal = (potencial * horas * 30) / 1000`.
- **Saída:** `consumo mensal: X.XX kwh`.
- **Regras de negócio:** o mês é considerado com **30 dias** (valor fixo no código) e a divisão por 1000 converte watts em quilowatts *(interpretação da conversão: 1 kW = 1000 W)*.

### 1.6 Exemplos de uso

*(Exemplo calculado manualmente.)*

```
 Potência do equipamento (W)? 1000
Horas de uso por dia: 2
consumo mensal: 60.00 kwh
```

Conta: (1000 × 2 × 30) / 1000 = 60.

### 1.7 Observações ou limitações

- O número de dias (30) está fixo no código.
- A variável de potência chama-se `potencial` (ver 2.8).
- A unidade é escrita "kwh" em minúsculas (a grafia usual é kWh; ver 2.8).
- Sem validação de entrada e sem instruções de compilação/execução nos arquivos.

---

# PROJETO 5 — `exercicio_05`

## 1. README DO PROJETO

### 1.1 Nome do projeto

"Índice de Massa Corporal", então o título é **"Cálculo do Índice de Massa Corporal (IMC)"**.

### 1.2 Descrição

Programa de linha de comando que pede o **peso (kg)** e a **altura (m)** de uma pessoa e calcula o **IMC** pela fórmula `peso / (altura × altura)`, mostrando o resultado com 2 casas decimais e a unidade `kg/m²`.

- **Finalidade:** calcular o IMC.
- **Problema que resolve:** não declarado; o programa apenas calcula o número.
- **Como funciona:** lê dois decimais, aplica a fórmula e imprime.

### 1.3 Funcionalidades

1. Ler o peso em kg (decimal).
2. Ler a altura em metros (decimal).
3. Calcular o IMC.
4. Exibir o IMC com 2 casas decimais.

**Não há** classificação do resultado (por exemplo, "abaixo do peso", "normal") no código.

### 1.4 Tecnologias utilizadas

| Tecnologia | Função |
|---|---|
| Linguagem **C** | Linguagem do programa |
| `stdio.h` | `printf` e `scanf` |
| `locale.h` | `setlocale` |

### 1.5 Funcionamento

- **Entrada:** peso (kg) e altura (m).
- **Processamento:** `imc = peso / (altura*altura)`.
- **Saída:** `O Índice de Massa Corporal é: X.XX kg/m²`.

### 1.6 Exemplos de uso

*(Exemplo calculado manualmente.)*

```
Qual é o peso da pessoa em kg: 70
Qual é a altura da pessoa em metros: 1.75
O Índice de Massa Corporal é: 22.86 kg/m²
```

Conta: 1,75 × 1,75 = 3,0625; 70 ÷ 3,0625 ≈ 22,857 → 22,86.

### 1.7 Observações ou limitações

- A altura deve ser informada em **metros**, com **ponto** decimal (ver 2.8).
- Altura 0 gera divisão por zero (ver 2.8).
- Sem classificação do IMC e sem instruções de compilação/execução nos arquivos.
- O caractere final da unidade (depois de "kg/m") chega com o símbolo de substituição nos arquivos; foi lido como `²` *(interpretação)*.

---

# PROJETO 6 — `exercicio_06`

## 1. README DO PROJETO

### 1.1 Nome do projeto

"Cálculo de caixas e custo para revestir uma área".

### 1.2 Descrição

Programa de linha de comando que pede a **largura** e o **comprimento** de uma área (em metros) e o **valor de cada caixa**. Com isso, calcula:

1. a **área total** a ser revestida (largura × comprimento);
2. a **quantidade de caixas** necessárias, **arredondada para cima**;
3. o **custo total** da compra.

- **Finalidade:** estimar quantas caixas comprar e quanto vai custar para cobrir uma área.
- **Problema que resolve:** o texto do programa fala em "área a ser revestida" e "caixas", o que indica compra de material de revestimento vendido em caixas *(interpretação; o tipo de material não é dito)*.
- **Como funciona:** o código divide a área por **2,5** para achar o número de caixas. O código **não explica** o que 2,5 representa *(interpretação: metros quadrados cobertos por caixa)*.

### 1.3 Funcionalidades

1. Ler a largura da área (metros).
2. Ler o comprimento da área (metros).
3. Ler o valor de cada caixa.
4. Calcular a área (`largura*comprimento`).
5. Calcular caixas (`área/2.5`) e arredondar para cima com `ceil`.
6. Calcular o custo total (`caixas arredondadas × valor da caixa`).
7. Exibir área, caixas e custo.

### 1.4 Tecnologias utilizadas

| Tecnologia | Função |
|---|---|
| Linguagem **C** | Linguagem do programa |
| `stdio.h` | `printf` e `scanf` |
| `locale.h` | `setlocale` |
| `math.h` | Função `ceil` (arredonda para cima) |

### 1.5 Funcionamento

- **Entrada:** largura, comprimento e valor unitário (decimais).
- **Processamento:**
  - `area = largura*comprimento`
  - `quantidade = area/2.5`
  - `valor_total = ceil(quantidade)*valor_unitario`
- **Saída:** três linhas: área (2 casas), caixas (2 casas) e custo (**sem casas decimais**; ver 2.8).
- **Regra de negócio identificada:** as caixas são compradas **inteiras** (arredondamento para cima), e o custo usa o número inteiro de caixas.

### 1.6 Exemplos de uso

*(Exemplo calculado manualmente. Mostra o arredondamento para cima.)*

```
Qual é a largura da área (em metros): 3
Qual é o comprimento da área em metros: 3
Qual é o valor de cada caixa: 10

Área total a ser revestida: 9.00 m²
Quantidade de caixas necessárias: 4.00 
Custo total da compra: R$ 40
```

Conta: área = 9; 9 ÷ 2,5 = 3,6; `ceil(3.6)` = 4; 4 × 10 = 40.

### 1.7 Observações ou limitações

- O valor `2.5` está fixo no código, sem explicação.
- O custo é impresso com `%2.f` (sem centavos) e a quantidade de caixas aparece com casas decimais (`4.00`). Ver 2.8.
- Não considera perdas, sobras ou qualquer outro fator (o código não trata disso).
- Sem instruções de compilação/execução nos arquivos.

---

# PROJETO 7 — `exercicio__07`

## 1. README DO PROJETO

### 1.1 Nome do projeto

**"Média aritmética de quatro valores"**.

### 1.2 Descrição

Programa de linha de comando que pede **quatro valores decimais** e mostra a **média aritmética** deles (soma dividida por 4), com 2 casas decimais.

- **Finalidade:** calcular a média de quatro números.
- **Problema que resolve:** não declarado. Os valores são chamados de "valor" (não "nota"), então o programa não é necessariamente sobre notas escolares.
- **Como funciona:** lê quatro `float`, soma, divide por 4 e imprime.

### 1.3 Funcionalidades

1. Ler quatro valores decimais (primeiro a quarto).
2. Calcular a média aritmética.
3. Exibir a média com 2 casas decimais.

### 1.4 Tecnologias utilizadas

| Tecnologia | Função |
|---|---|
| Linguagem **C** | Linguagem do programa |
| `stdio.h` | `printf` e `scanf` |
| `locale.h` | `setlocale` |

### 1.5 Funcionamento

- **Entrada:** quatro números decimais.
- **Processamento:** `media = (num1+num2+num3+num4)/4`.
- **Saída:** `A média aritmética é: X.XX`.

### 1.6 Exemplos de uso

*(Exemplo calculado manualmente.)*

```
Digite o primeiro valor: 7
Digite o segundo valor: 8
Digite o terceiro valor: 6
Digite o quarto valor: 9
A média aritmética é: 7.50
```

Conta: (7+8+6+9) ÷ 4 = 30 ÷ 4 = 7,5.

### 1.7 Observações ou limitações

- A quantidade de valores (4) é fixa.
- Sem validação de entrada e sem instruções de compilação/execução nos arquivos.
- O nome do arquivo difere do padrão dos demais (`exercicio__07.c`).

---

# PROJETO 8 — `exercicio_08`

## 1. README DO PROJETO

### 1.1 Nome do projeto

 **"Média ponderada de três notas"**.

### 1.2 Descrição

Programa de linha de comando que pede **três notas** e calcula a **média ponderada** com **pesos 1, 2 e 4** (primeira, segunda e terceira nota, respectivamente).

- **Finalidade:** calcular uma média em que cada nota tem importância (peso) diferente.
- **Problema que resolve:** não declarado. O programa não informa ao usuário quais são os pesos.
- **Como funciona:** multiplica cada nota pelo seu peso, soma tudo e divide pela soma dos pesos (1+2+4 = 7).

### 1.3 Funcionalidades

1. Ler a primeira, a segunda e a terceira nota (decimais).
2. Calcular a média ponderada com pesos fixos 1, 2 e 4.
3. Exibir o resultado com 2 casas decimais.

### 1.4 Tecnologias utilizadas

| Tecnologia | Função |
|---|---|
| Linguagem **C** | Linguagem do programa |
| `stdio.h` | `printf` e `scanf` |
| `locale.h` | `setlocale` |

### 1.5 Funcionamento

- **Entrada:** três notas decimais.
- **Processamento:** `media = ((nota1*1)+(nota2*2)+(nota3*4))/(1+2+4)`.
- **Saída:** `A média ponderada é: X.XX`.
- **Regra identificada:** pesos 1, 2 e 4 fixos no código.

### 1.6 Exemplos de uso

*(Exemplo calculado manualmente.)*

```
Digite a primeira nota: 6
Digite a segunda nota: 7
Digite a terceira nota: 8
A média ponderada é: 7.43
```

Conta: (6×1 + 7×2 + 8×4) ÷ 7 = (6 + 14 + 32) ÷ 7 = 52 ÷ 7 ≈ 7,43.

### 1.7 Observações ou limitações

- Os pesos não são informados ao usuário durante a execução.
- Faixa válida das notas (por exemplo, 0 a 10): **informação não identificada nos arquivos fornecidos**; o código não valida.
- Sem instruções de compilação/execução nos arquivos.

---

# PROJETO 9 — `exercicio_09`

## 1. README DO PROJETO

### 1.1 Nome do projeto

**"Distância entre dois pontos"**.

### 1.2 Descrição

Programa de linha de comando que pede as coordenadas **(x, y)** de **dois pontos** e calcula a **distância** entre eles usando a fórmula `raiz_quadrada((x1−x2)² + (y1−y2)²)`.

- **Finalidade:** calcular a distância em linha reta entre dois pontos de um plano.
- **Problema que resolve:** não declarado. O texto do programa ("coordenada x", "coordenada y") indica pontos em um plano com dois eixos *(interpretação)*.
- **Como funciona:** lê quatro decimais, aplica a fórmula com as funções `pow` e `sqrt` e imprime o resultado.

### 1.3 Funcionalidades

1. Ler `x` e `y` do 1º ponto.
2. Ler `x` e `y` do 2º ponto.
3. Calcular a distância entre os pontos.
4. Exibir a distância com 2 casas decimais.

### 1.4 Tecnologias utilizadas

| Tecnologia | Função |
|---|---|
| Linguagem **C** | Linguagem do programa |
| `stdio.h` | `printf` e `scanf` |
| `locale.h` | `setlocale` |
| `math.h` | `pow` (potência) e `sqrt` (raiz quadrada) |

### 1.5 Funcionamento

- **Entrada:** `x1`, `y1`, `x2`, `y2` (decimais).
- **Processamento:** `distancia = sqrt(pow(x1-x2,2) + pow(y1-y2,2))`.
- **Saída:** `A distância entre os pontos é: X.XX`.

### 1.6 Exemplos de uso

*(Exemplo calculado manualmente.)*

```
Digite a coordenada x do 1º ponto:0
Digite a coordenada y do 1º ponto:0
Digite a coordenada x do 2º ponto:3
Digite a coordenada y do 2º ponto:4
A distância entre os pontos é: 5.00
```

Conta: (0−3)² = 9; (0−4)² = 16; 9 + 16 = 25; √25 = 5.

### 1.7 Observações ou limitações

- A unidade de medida das coordenadas não é informada (**informação não identificada nos arquivos fornecidos**).
- Sem validação de entrada e sem instruções de compilação/execução nos arquivos.
- Pequenas inconsistências de indentação e falta de espaço após os `:` nas perguntas (estético).

---

# PROJETO 10 — `exercicio_10`

## 1. README DO PROJETO

### 1.1 Nome do projeto

*"Alcance horizontal estimado de um lançamento"**.

### 1.2 Descrição

Programa de linha de comando que pede a **velocidade inicial (m/s)** e o **ângulo de lançamento (em graus)** e calcula o **alcance horizontal estimado (em metros)** com a fórmula `(velocidade² × sen(2 × ângulo)) / 9,8`.

- **Finalidade:** estimar a distância horizontal atingida por um lançamento.
- **Problema que resolve:** o código não descreve o contexto. Pelas mensagens ("velocidade inicial", "ângulo de lançamento", "alcance horizontal") trata-se de um lançamento oblíquo *(interpretação)*.
- **Como funciona:** converte o ângulo de graus para radianos (usando 3,14 como valor de π), aplica a fórmula e imprime o resultado.

### 1.3 Funcionalidades

1. Ler a velocidade inicial (m/s).
2. Ler o ângulo de lançamento (graus).
3. Converter o ângulo para radianos.
4. Calcular o alcance horizontal.
5. Exibir o alcance com 2 casas decimais, seguido de "metros".

### 1.4 Tecnologias utilizadas

| Tecnologia | Função |
|---|---|
| Linguagem **C** | Linguagem do programa |
| `stdio.h` | `printf` e `scanf` |
| `locale.h` | `setlocale` |
| `math.h` | `pow` (potência) e `sin` (seno) |

### 1.5 Funcionamento

- **Entrada:** velocidade (m/s) e ângulo (graus).
- **Processamento:**
  1. `angulo_radiano = (angulo*3.14)/180`
  2. `alcance_horizontal = (pow(velocidade, 2) * sin(2*angulo_radiano)) / 9.8`
- **Saída:** `O alcance horizontal estimado é: X.XX metros`.
- **Constantes identificadas:** `3.14` (aproximação de π) e `9.8` (valor usado na divisão; *interpretação:* aceleração da gravidade em m/s², já que o programa fala em lançamento).

### 1.6 Exemplos de uso

*(Exemplo calculado manualmente.)*

```
Qual a velocidade inicial (m/s): 20
Qual o ângulo de lançamento em graus: 45
O alcance horizontal estimado é: 40.82 metros
```

Conta: 45 × 3,14 ÷ 180 = 0,785 rad; 2 × 0,785 = 1,57; sen(1,57) ≈ 1; 20² = 400; 400 × 1 ÷ 9,8 ≈ 40,82.

### 1.7 Observações ou limitações

- O uso de `3.14` no lugar de π exato torna o resultado uma **estimativa**, coerente com a palavra "estimado" da mensagem.
- Ângulos negativos ou acima de 90° são aceitos sem alerta.
- As suposições físicas da fórmula (por exemplo, altura de lançamento e de chegada iguais, sem resistência do ar) **não estão descritas no código**. Sobre isso: *informação não identificada nos arquivos fornecidos.*
- Sem instruções de compilação/execução nos arquivos.

---
