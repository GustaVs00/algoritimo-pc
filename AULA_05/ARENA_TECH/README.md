# Arena Tech — Calculadora de Custos de Eventos de E-Sports

Programa em linguagem C desenvolvido para simular o planejamento financeiro e logístico de um campeonato de e-sports. O software processa os dados do evento informados pelo usuário (participantes, computadores, consumo de energia, custos e orçamento) e gera um relatório abrangente contendo diagnósticos de infraestrutura, classificação de consumo de energia, análise de custos totais e uma decisão executiva final sobre a viabilidade de realização do torneio.

## Funcionalidades

* **Dimensionamento de Times:** Cálculo automatizado da quantidade de equipes necessárias dividindo o total de participantes pelos jogadores por time.


* **Estimativa Energética:** Processa o consumo total em kWh multiplicando os computadores pela potência de uso e o tempo de duração.


* **Avaliação Logística:** Verifica se a infraestrutura é classificada como **SUFICIENTE** ou **INSUFICIENTE** comparando os computadores disponíveis com a demanda de jogadores.


* **Categorização de Consumo:** Classifica o gasto energético do evento em três faixas: **BAIXO** (≤ 20 kWh), **MODERADO** (> 20 e < 40 kWh) ou **ALTO** (≥ 40 kWh).


* **Consolidação Financeira:** Entrega o cálculo de custo total (agregando energia, alimentação e despesas secundárias) juntamente com a divisão de custo per capita.


* **Status Orçamentário:** Indica a integridade do planejamento apontando se os custos estão **DENTRO DO ORÇAMENTO**, **NO LIMITE DO ORÇAMENTO** (gastos muito próximos do teto, com margem de segurança ≤ 5%) ou **ACIMA DO ORÇAMENTO**.


* **Veredito Executivo:** Emite uma decisão automatizada recomendando a execução do projeto (**APROVADO**, **APROVADO COM RESSALVAS** ou **NÃO RECOMENDADO**).



## Como Compilar e Executar

Requisitos básicos: Possuir um compilador para C (ex.: GCC) instalado e utilizar uma interface de terminal.

```bash
gcc projeto_arena_tech.c -o arena_tech
./arena_tech        # Para sistemas Linux/macOS
arena_tech.exe      # Para sistemas Windows

```

> **Nota técnica:** Apesar do arquivo importar a biblioteca `<math.h>`, as funções matemáticas desse cabeçalho não chegam a ser aplicadas na lógica do código. Portanto, não é exigida a utilização da flag `-lm` durante a etapa de compilação.
> 
> 

## Entradas do Programa

| Dado Solicitado | Tipo de Variável | Nome da Variável no Código |
| --- | --- | --- |
| Quantidade total de participantes | `int` | `qte_participantes` |
| Quantidade de jogadores em cada time | `int` | `qte_jogadores_por_time` |
| Quantidade de computadores disponíveis | `int` | `qte_computadores` |
| Potência média de cada computador (watts) | `float` | `potencia` |
| Duração do evento (horas) | `float` | `duracao` |
| Preço unitário (1 kWh) de energia | `float` | `preco_kwh` |
| Preço do kit de alimentação por pessoa | `float` | `preco_kit` |
| Despesas e custos paralelos do evento | `float` | `outros_custos` |
| Orçamento máximo estipulado | `float` | `orcamento` |

## Regras de Decisão Lógica

| Diagnóstico Aplicado | Critério e Condição |
| --- | --- |
| **Infraestrutura SUFICIENTE** | `qte_computadores >= qte_participantes` |
| **Consumo BAIXO** | `consumo_energia <= 20` |
| **Consumo MODERADO** | `consumo_energia > 20` e `< 40` |
| **Consumo ALTO** | `consumo_energia >= 40` |
| **Orçamento ACIMA** | `custo_total > orcamento` |
| **Orçamento NO LIMITE** | `custo_total <= orcamento` condicionado a um saldo marginal ≤ 5% do orçamento total |
| **Veredito: NÃO RECOMENDADO** | Falta de máquinas (`participantes > computadores`) **ou** custo superior à verba (`custo > orcamento`) |
| **Veredito: APROVADO COM RESSALVAS** | Logística aprovada e contas no azul, entretanto com uma sobrecarga de consumo elétrico (`> 40 kWh`) |
| **Veredito: APROVADO** | Ocorre quando nenhuma das inconsistências acima é detectada |

## Exemplo de Uso na Prática

**Inputs do Usuário:**

```
Qual sera a quantidade total de participantes? 20
Qual sera a quantidade de jogadores em cada time? 5
Qual a quantidade de computadores disponiveis? 18
Qual e a potencia media de cada computador(watts)? 300
Qual sera a duracao do evento(horas)? 6
Qual sera o preco de 1kWh de energia? 0.85
Qual sera o preco de um kit de alimentacao por participante? 25
Quais foram outros custos do evento? 400
Qual e o orcamento maximo disponivel para o evento? 1500

```

**Retorno do Sistema (Output):**

```
============== ARENA TECH ==============

Participantes: 20
Times necessarios: 4
Computadores disponiveis: 18

Infraestrutura: INSUFICIENTE!
Quantidade faltante: 2

Consumo estimado: 32.40 kWh
Classificacao do consumo: MODERADO

Custo da energia: R$27.54
Custo da alimentacao: R$500.00
Outros custos: R$400.00
CUSTO TOTAL: R$927.54
CUSTO POR PARTICIPANTE: R$46.38

Orcamento disponivel: R$1500.00
Saldo: R$572.46
Situacao do orcamento: DENTRO DO ORCAMENTO

DECISAO FINAL: NAO RECOMENDADO!
=========================================

```

## Estrutura de Arquivos

```
projeto_arena_tech.c   # Arquivo-fonte principal, hospedando a função main() e a integralidade da lógica do software.

```
