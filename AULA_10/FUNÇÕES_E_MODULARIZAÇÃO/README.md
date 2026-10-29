# 📂 Aula 07 - Prática com Estruturas de Repetição

Bem-vindo ao repositório da **Aula 07**! Este módulo foca na aplicação prática dos conceitos de laços de repetição (`for` e `while`). Os exercícios aqui presentes demonstram como orquestrar interações contínuas com o usuário e aplicar padrões clássicos da programação, como contadores, acumuladores e validação de dados.

---

## 🎯 Visão Geral do Módulo

- **Foco:** Consolidação do uso de estruturas de iteração. O módulo ensina como evitar a repetição manual de código ao processar listas de dados, processar somas contínuas e obrigar o usuário a fornecer dados corretos.
- **Contadores e Acumuladores:** Exploração intensiva de variáveis que se auto-incrementam (ex: `i++`, `aprovados += 1`) e variáveis que somam montantes contínuos (ex: `soma += saldo`).
- **Validação de Entrada:** Demonstração prática de como o laço `while` pode ser usado para "travar" a execução do programa até que o usuário digite uma informação válida.
- **Rastreamento de Extremos:** Aplicação da lógica de inicializar uma variável com um número extremamente baixo (ex: `-99999999`) para usá-la como base de comparação e encontrar o maior número digitado em um laço.

---

## 📁 Detalhamento dos Projetos (Arquivos)

### 1. Classificação e Busca de Extremos
- **`exercicio01_positivo_negativo.c`**: Um analisador dinâmico de números. O usuário define quantas vezes o programa vai rodar. Dentro do laço `for`, o algoritmo implementa **contadores múltiplos** para classificar as entradas em Positivos, Negativos ou Neutros (zero). Além disso, introduz a lógica de rastreamento contínuo para identificar qual foi o maior valor lido durante toda a execução.

### 2. Acumuladores Financeiros
- **`exercicio02_loja_vendas.c`**: Simulação simples e direta do fechamento de caixa de uma loja. Utiliza um laço `for` predefinido para iterar exatamente 7 vezes (uma semana), onde cada entrada do usuário é somada imediatamente a uma variável **acumuladora** (`soma`), exibindo o faturamento bruto final.

### 3. Validação de Dados com `while`
- **`exercicio03_aprovacao_alunos.c`**: Sistema escolar que calcula aprovações de uma turma de 10 alunos, mas com um diferencial crucial de **segurança de dados**. Utiliza um laço `while` em que o contador de alunos (`i++`) só avança se a nota digitada for válida (entre 0 e 10). Se o usuário digitar algo como "-5" ou "11", o programa exibe um erro e exige a redigitação, impedindo a poluição dos resultados.

### 4. Processamento Misto (Strings e Números)
- **`exercicio04_temperatura_municipio.c`**: Algoritmo meteorológico que integra texto e matemática em um laço de repetição. Itera 5 vezes para ler o nome de uma cidade (utilizando formatação segura para strings `%49s`) e sua respectiva temperatura média. Ao final, utiliza um contador condicional para relatar quantas dessas cidades possuem clima frio (abaixo de 10°C).

---

## 🛠️ Como Compilar e Executar

Certifique-se de ter um compilador C (como o **GCC**) instalado em sua máquina.

**1. Navegue até a pasta pelo Terminal:**
```bash
# Exemplo compilando o exercicio 3
gcc exercicio03_aprovacao_alunos.c -o calcular_aprovacoes
```

**2. Execute o programa gerado:**

No Linux ou macOS:
```bash
./calcular_aprovacoes
```

No Windows:
```cmd
calcular_aprovacoes.exe
```

---

## 💡 Padrões Lógicos Aprendidos
- **Isolamento de Contadores:** No exercício 3, aprendemos que o incremento do laço (`i++`) não precisa, obrigatoriamente, acontecer sempre no final do bloco. Ele pode ficar protegido dentro de um `if`, atrelando o progresso do programa à colaboração do usuário.
- **Leitura Segura de Texto:** No exercício 4, o uso de `%49s` na função `scanf` impede falhas de segurança por *Buffer Overflow*, limitando a quantidade de caracteres que o usuário pode inserir na variável da cidade.