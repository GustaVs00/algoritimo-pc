# 📂 Aula 09 - Manipulação de Arquivos em C 

Bem-vindo ao repositório da **Aula 09**! Este material é dedicado ao estudo de persistência de dados utilizando a linguagem C. Aqui, você encontrará exemplos práticos de como os programas podem interagir com o sistema operacional para criar, ler, editar e processar arquivos de texto de forma definitiva.

---

## 🎯 Visão Geral

Ao longo destes exercícios, exploramos a biblioteca padrão `<stdio.h>` para manipular ponteiros do tipo `FILE`. Os principais conceitos abordados incluem:
- **Modos de Abertura:** Escrita (`w`), Leitura (`r`) e Anexação (`a`).
- **Escrita de Dados:** Como utilizar a função `fprintf` para gravar dados formatados no disco.
- **Leitura de Dados:** Diferenças práticas entre ler linhas inteiras com `fgets` e extrair dados tipados (strings, inteiros, floats) com `fscanf`.
- **Tratamento de Arquivos:** Verificação de erros na abertura (ponteiros `NULL`) e a importância de fechar arquivos com `fclose`.

---

## 📁 Estrutura do Repositório e Arquivos

Abaixo está o detalhamento de cada código-fonte presente neste repositório:

### 1. Escrita e Criação (`w` - Write)
* **`exemplo1.c`**: Demonstra a criação do arquivo `tabuada.txt` a partir do zero[cite: 9]. O usuário informa um número inteiro, e o programa utiliza um laço de repetição com `fprintf` para calcular e gravar a tabuada (de 0 a 10) diretamente no arquivo de texto. Se o arquivo já existir, ele será reescrito.

### 2. Anexação de Dados (`a` - Append)
* **`exercico2.c`**: Mostra como adicionar dados ao final de um arquivo existente sem apagar seu histórico. Abre (ou cria) o arquivo `consumo.txt` e utiliza um laço para inserir múltiplos registros informados pelo usuário, contendo o dia da semana e o respectivo valor de consumo (ex: `seg 15.5`).

### 3. Leitura de Linhas Completas (`r` - Read / `fgets`)
* **`exercicio3.c`**: Focado na leitura simples de texto. Abre o arquivo `tabuada.txt` criado anteriormente e utiliza a função `fgets` dentro de um laço `while` para ler o documento linha por linha, exibindo o conteúdo no console até atingir o fim do arquivo (`NULL`).

### 4. Leitura Formatada e Relatórios (`r` - Read / `fscanf`)
* **`exercicio5.c`**: Script de processamento de dados. Abre o arquivo `consumo.txt` e utiliza o `fscanf` para separar dinamicamente as strings (dias) dos floats (valores de consumo). O programa varre o documento até o final (`EOF`), acumulando os valores para calcular o **consumo médio**, contabilizar a **quantidade de registros** e identificar o **maior consumo** registrado.
* **`exercicio7.c`**: Segue uma lógica analítica semelhante, mas voltada para o arquivo `vendas.txt`. Lê identificadores e valores financeiros de forma iterativa (`EOF`) para gerar um relatório final contendo: **total de vendas realizadas**, **soma do faturamento** e o **maior valor** de uma venda única.

---

## 🛠️ Como Compilar e Executar

Certifique-se de ter um compilador C (como o **GCC**) instalado em sua máquina.

**1. Pelo Terminal (Linux / macOS / Windows com MinGW):**

Navegue até a pasta onde os arquivos estão salvos e compile o código desejado:
```bash
# Exemplo compilando o exercicio5.c
gcc exercicio5.c -o relatorio_consumo
