# Arena Tech — Calculadora de Custos de Evento de E-Sports

Programa em linguagem C que simula o planejamento financeiro e logístico de um campeonato de e-sports. O usuário informa os dados do evento (participantes, computadores, consumo de energia, custos e orçamento) e o programa exibe um relatório completo com diagnósticos de infraestrutura, consumo de energia, custos e uma decisão final sobre a viabilidade do evento.

## Funcionalidades

- Cálculo da quantidade de times necessários (participantes ÷ jogadores por time)
- Cálculo do consumo de energia em kWh (computadores × potência × duração)
- Verificação se a infraestrutura de computadores é **SUFICIENTE** ou **INSUFICIENTE**
- Classificação do consumo de energia: **BAIXO** (≤ 20 kWh), **MODERADO** (> 20 e < 40 kWh) ou **ALTO** (≥ 40 kWh)
- Cálculo do custo total (energia + alimentação + outros custos) e do custo por participante
- Análise do orçamento: **DENTRO DO ORÇAMENTO**, **NO LIMITE DO ORÇAMENTO** (quando o custo fica a até 5% do orçamento) ou **ACIMA DO ORÇAMENTO**
- Decisão final: **APROVADO**, **APROVADO COM RESSALVAS** ou **NÃO RECOMENDADO**

## Como Compilar e Executar

Requisitos: compilador C (ex.: GCC) e terminal.

```bash
gcc projeto_arena_tech.c -o arena_tech
./arena_tech        # Linux/macOS
arena_tech.exe      # Windows
```

> Observação: o cabeçalho `<math.h>` é incluído, mas nenhuma função matemática dele é utilizada, portanto a flag `-lm` não é necessária.

## Entradas do Programa

| Dado solicitado | Tipo | Variável |
|---|---|---|
| Quantidade total de participantes | `int` | `qte_participantes` |
| Quantidade de jogadores em cada time | `int` | `qte_jogadores_por_time` |
| Quantidade de computadores disponíveis | `int` | `qte_computadores` |
| Potência média de cada computador (watts) | `float` | `potencia` |
| Duração do evento (horas) | `float` | `duracao` |
| Preço de 1 kWh de energia | `float` | `preco_kwh` |
| Preço do kit de alimentação por participante | `float` | `preco_kit` |
| Outros custos do evento | `float` | `outros_custos` |
| Orçamento máximo disponível | `float` | `orcamento` |

## Regras de Decisão

| Diagnóstico | Condição |
|---|---|
| Infraestrutura SUFICIENTE | `qte_computadores >= qte_participantes` |
| Consumo BAIXO | `consumo_energia <= 20` |
| Consumo MODERADO | `consumo_energia > 20` e `< 40` |
| Consumo ALTO | `consumo_energia >= 40` |
| Orçamento ACIMA | `custo_total > orcamento` |
| Orçamento NO LIMITE | `custo_total <= orcamento` e saldo ≤ 5% do orçamento |
| NÃO RECOMENDADO | participantes > computadores **ou** custo > orçamento |
| APROVADO COM RESSALVAS | infraestrutura ok, custo ok e consumo > 40 kWh |
| APROVADO | demais casos |

## Exemplo de Uso

**Entrada:**
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

**Saída:**
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
projeto_arena_tech.c   # Código-fonte único do projeto (função main e toda a lógica)
```

## Limitações Conhecidas

- Não há validação de entrada: valores negativos ou zero podem gerar resultados sem sentido ou divisão por zero
- Erro de digitação em uma sequência de escape (`"\Classificação"` com `\C` inválido, sem o `n` de `\n`)
- Os textos do código-fonte apresentam problemas de codificação nos caracteres acentuados
- `<math.h>` é incluído, mas não é utilizado

---
