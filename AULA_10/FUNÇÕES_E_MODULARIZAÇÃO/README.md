# 📂 Aula 10 - Funções, Ponteiros e Structs (Modularização)

Bem-vindo ao repositório da **Aula 10**! Este módulo marca um dos momentos mais importantes na sua evolução com a linguagem C. Até aqui, escrevíamos todo o nosso código dentro de um único bloco (`main`). Agora, aprenderemos a técnica de **Dividir para Conquistar**, separando a lógica em blocos independentes (Funções), além de manipularmos diretamente a memória (Ponteiros) e criarmos nossos próprios tipos de dados (Structs).

Também incluímos neste repositório o **Desafio das Operadoras**, um projeto robusto que consolida o processamento avançado de Matrizes.

## 🎯 Conceitos Fundamentais Abordados

1. **Funções (Modularização):** Criação de subprogramas que executam tarefas específicas (como calcular uma área ou uma média). Isso evita a repetição de código e deixa o programa mais limpo.
2. **Passagem por Valor vs. Referência:** Entendimento de que, por padrão, o C envia apenas "cópias" das variáveis para as funções. Para alterar a variável original, precisamos aprender a usar **Ponteiros** (endereços de memória).
3. **Structs (Registros):** Uma evolução dos vetores. Enquanto um vetor guarda vários dados do *mesmo* tipo, uma struct permite agrupar dados de *tipos diferentes* (ex: uma `struct Aluno` contendo Inteiro para RGM, e Float para as Notas).
4. **Operador Seta (`->`):** Aprender a acessar os dados de uma struct quando estamos lidando com ponteiros, substituindo o tradicional operador de ponto (`.`).

## 📁 Trilha de Aprendizado (Arquivos do Repositório)

### Parte 1: Funções e Reutilização de Código
* **`exemplo1_2.c`**: **Introdução às Funções.** Demonstra como criar uma função matemática que calcula a área de um retângulo e retorna um valor `float`. O foco é mostrar como a mesma lógica pode ser chamada múltiplas vezes no `main` apenas mudando os parâmetros.
* **`exercicio4.c`**: **Funções em Loop.** Expande o conceito do arquivo anterior. Coloca a função de cálculo de área dentro de um laço `while (1)` infinito, permitindo que o usuário processe cálculos continuamente até escolher a opção de parada (`break`).
* **`exercicio1.c`**: **Processamento Comercial.** Utiliza uma função para calcular valores de fretes com base no peso. Também demonstra o tratamento do *buffer* do teclado ao usar um espaço antes do `%c` no `scanf`, evitando que o programa pule a leitura de caracteres.
* **`exercicio3_2.c`**: **Encadeamento de Funções.** Mostra que uma função pode chamar outra. A função `analisar_situacao` invoca internamente a função `calcular_media` antes de decidir se o aluno foi aprovado ou reprovado.

### Parte 2: Acesso à Memória (Ponteiros e Structs)
* **`exercicio2.c`**: **Passagem por Referência (Ponteiros).** Resolve o problema clássico de trocar os valores de duas variáveis (`a` e `b`). Mostra como enviar o endereço de memória usando `&` e como alterar o dado original utilizando ponteiros `*` dentro da função `trocar`.
* **`exercicio5_2.c`**: **Structs na Prática.** Criação do tipo `Aluno` agrupando RGM, notas e média. O maior aprendizado é a junção de Struct com Ponteiros: a função `calcular_media` recebe o endereço da struct e atualiza a média diretamente na memória usando o operador `->` (seta).

### Parte 3: Desafio Integrador (Matrizes Avançadas)
* **`desafio_operadoras.c`**: **Business Intelligence (BI) no Terminal.** Um algoritmo analítico completo que varre uma matriz de `3x12` (3 operadoras, 12 meses). Utiliza laços duplos aninhados para cruzar informações complexas:
  * Calcula a média geral utilizando a função matemática `ceil()` para arredondamento.
  * Varre a matriz por *linhas* para descobrir qual operadora vendeu mais chips no ano.
  * Varre a matriz invertida (por *colunas*) para identificar em qual mês específico ocorreu o pico de vendas globais.
    
---

# ⚡ Projeto 10 — Monitoramento de Consumo de Energia de Laboratórios

Programa em **C** que analisa o consumo semanal de energia elétrica de quatro laboratórios de informática e gera um relatório completo, com o código **modularizado em funções**.

## 📋 Contexto

Uma universidade quer acompanhar o consumo de energia (em kWh) dos laboratórios **Lab A, Lab B, Lab C e Lab D** durante uma semana. Os dados ficam em uma matriz `float consumo[4][7]`:

- **cada linha** = um laboratório
- **cada coluna** = um dia da semana (seg a dom)

## 🎯 O que o programa calcula

1. Consumo **total geral** da semana
2. Consumo **médio** de cada laboratório (2 casas decimais)
3. **Dia** com maior consumo total (somando todos os laboratórios)
4. **Laboratório** com maior consumo total na semana
5. Quantidade de registros **acima de 100 kWh**

## 🧩 Decomposição em funções

```
main()
  │
  └── gerar_relatorio()
          │
          ├── calcular_total()
          ├── calcular_media_laboratorio()
          ├── buscar_dia_maior_consumo()
          ├── buscar_laboratorio_maior_consumo()
          └── contar_acima_limite()
```

| Função | Percorre | Retorna |
|---|---|---|
| `calcular_total` | todos os elementos | soma geral (`float`) |
| `calcular_media_laboratorio` | uma **linha** | média do laboratório (`float`) |
| `buscar_dia_maior_consumo` | as **colunas** | índice do dia (`int`) |
| `buscar_laboratorio_maior_consumo` | as **linhas** | índice do laboratório (`int`) |
| `contar_acima_limite` | todos os elementos | quantidade de registros (`int`) |
| `gerar_relatorio` | — | imprime o relatório (`void`) |

Funções auxiliares: `total_do_laboratorio()` e `total_do_dia()`, que evitam repetição de código nas buscas e no relatório.

O tamanho da matriz é controlado pelas constantes `LABS` e `DIAS` (`#define`), sem "números mágicos" espalhados pelo código.

## 🚀 Como compilar e executar

```bash
gcc -Wall -Wextra -std=c99 -o consumo main.c
./consumo
```

## 🖥️ Saída

```
===== RELATORIO DE CONSUMO =====

Consumo total geral: 2725.00 kWh

Media do Lab A: 97.14 kWh
Media do Lab B: 92.14 kWh
Media do Lab C: 115.00 kWh
Media do Lab D: 85.00 kWh

Dia com maior consumo total:
sex - 460.00 kWh

Laboratorio com maior consumo semanal:
Lab C - 805.00 kWh

Registros acima de 100 kWh: 10
```

> **Nota:** o enunciado original indicava 9 registros acima de 100 kWh, mas a contagem correta para os dados de teste é **10** (Lab A: 2, Lab B: 2, Lab C: 6, Lab D: 0). Os valores exatamente iguais a 100 não contam, pois o critério é *acima de* 100.

## 📚 Conceitos praticados

- Matrizes bidimensionais e passagem de matriz como parâmetro (`float consumo[][DIAS]`)
- Decomposição de problemas e modularização
- Percorrer linhas, colunas e todos os elementos
- Busca de maior valor retornando **índice**
- Vetores de strings (`const char *`) para nomes de dias e laboratórios
- Constantes com `#define`
- Formatação de saída com `printf` (`%.2f`)
