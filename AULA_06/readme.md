# [INSERIR NOME DO PROJETO - Sugestão: C-Logic-Fundamentals]

![Version](https://img.shields.io/badge/version-1.0.0-blue.svg)
![License](https://img.shields.io/badge/license-MIT-green.svg)
![Build](https://img.shields.io/badge/build-passing-brightgreen.svg)
![Language](https://img.shields.io/badge/language-C-00599C.svg)

## 2. Descrição e Contexto

O **[INSERIR NOME DO PROJETO]** é uma suíte de aplicações de linha de comando (CLI) desenvolvida em **C**. O projeto resolve a necessidade de material prático para o estudo e consolidação de **estruturas de controle de fluxo, laços de repetição e lógica algorítmica** em programação procedural. 

A principal proposta de valor deste repositório é fornecer scripts independentes e autossuficientes que demonstram desde operações matemáticas simples até o controle de estado (máquinas de estado finitas básicas, como em simulações de login). O público-alvo abrange estudantes de Ciência da Computação, Engenharia de Software e desenvolvedores em nível júnior que buscam aprimorar seus fundamentos lógicos antes de migrarem para arquiteturas complexas.

## 3. Funcionalidades (Features)

O ecossistema é composto por pequenos módulos executáveis, entregando as seguintes capacidades:

* **Controle de Acesso (State Machine):** Sistema de autenticação iterativo com bloqueio de segurança após 3 tentativas falhas (`exercicio05.c`).
* **Validação Restritiva de Dados:** Algoritmo de processamento de notas acadêmicas (0 a 10) que recusa inputs inválidos em tempo de execução e calcula a média aritmética (`exercicio04.c`).
* **Processamento Condicional e Módulo:** Leitura contínua de inteiros, isolamento de valores ímpares utilizando o operador `%` e totalização sob condição de parada definida pelo usuário (`exercicio03.c`).
* **Cálculo de Máximos e Faturamento:** Lógica de iteração determinística (`for`) para identificar o maior valor em um conjunto (`exercicio02.c`) e acumulação de valores de ponto flutuante vinculados a um identificador (`exercicio01.c`).
* **Geração Dinâmica de Dados:** Algoritmo iterativo para criação e formatação de tabuadas matemáticas complexas (`exemplo.c` e `exemplo_do_while.c`).

## 4. Arquitetura e Explicação do Código

### Padrão de Design e Arquitetura
O projeto adota o paradigma **Procedural e Imperativo**, característico do desenvolvimento em C nativo. Dada a natureza do escopo, não se aplicam padrões multicamadas (como Clean Architecture ou MVC). A arquitetura é baseada no padrão de **Entrypoint Único** (Single Entrypoint), onde cada arquivo fonte possui sua própria função `main()`, atuando como um script *standalone*.

### Estrutura de Diretórios
Os arquivos possuem responsabilidades estritas e não possuem dependências entre si:

- `exercicio01.c`: Responsável por interações de I/O focadas em acumulação linear de valores financeiros.
- `exercicio02.c`: Responsável por lógica condicional de extração do valor máximo (`maior_nota`) em um vetor imaginário (processado em tempo de execução).
- `exercicio03.c`: Demonstra a quebra de fluxo de execução (`break`) e validações de paridade.
- `exercicio04.c`: Aborda laços aninhados (`for` contendo `do-while`) para garantir a sanitização do dado de entrada.
- `exercicio05.c`: Implementa variáveis de estado (`tentativa`) controlando o ciclo de vida da aplicação.

### Fluxo de Dados
1. **Input (Entrada):** Os dados são capturados via *Standard Input* (teclado) utilizando a função nativa `scanf`.
2. **Processamento:** Ocorre inteiramente em memória volátil (RAM), utilizando processamento síncrono. A biblioteca `<locale.h>` aplica a localização do sistema para garantir suporte adequado a caracteres especiais e acentuação no terminal.
3. **Output (Saída):** A resposta processada é devolvida no *Standard Output* através de formatações complexas na função `printf`.

## 5. Análise Técnica e Decisões

### Justificativas
Optou-se por **C** pela sua proximidade com o hardware e ausência de *Garbage Collector*, exigindo do desenvolvedor uma compreensão rigorosa dos tipos de dados primitivos (`int`, `float`) e seu comportamento na pilha de execução (Stack).

### Trade-offs Assumidos
- **Persistência de Dados:** Todos os dados são processados *in-memory* e perdidos ao término do processo. Optou-se por não implementar File I/O (`FILE *`) para manter a curva de aprendizado focada estritamente em lógica.
- **Tratamento de Buffer:** Foi assumido o uso de `scanf` sem tratamentos avançados de limpeza do buffer (`stdin`), priorizando a legibilidade para iniciantes, mesmo havendo o risco de comportamentos anômalos caso o usuário insira *strings* onde se esperam números.

### ⚠️ Relatório de Code Review (Análise de Qualidade)
Como Engenheiro de Software Sênior, destaco alguns pontos arquiteturais presentes no código atual que devem ser observados para escalabilidade futura:
1. **Uninitialized Variables (Lixo de Memória):** Em `exercicio01.c` (`total_compras`) e `exercicio02.c` (`total`, `maior_nota`), as variáveis acumuladoras não foram inicializadas com `0`. Em C, isso pode resultar em cálculos partindo de lixo residual na memória.
2. **Bug Lógico Restritivo:** Em `exercicio04.c`, a instrução `while(nota<0 || nota>=10)` impede que uma nota exatamente igual a `10` seja aceita. O operador ideal seria `nota > 10`.

## 6. Pré-requisitos

Para compilar e executar as aplicações, os seguintes componentes são necessários no ambiente host:

* **Sistema Operacional:** Compatível com Linux, macOS ou Windows (recomendado via WSL2 ou MinGW).
* **Compilador:** GNU Compiler Collection (`gcc`) versão 7.0 ou superior, ou `clang`.
* **Build Tools (Opcional):** `make` versão 4.0+.

## 7. Instalação e Execução

Siga os passos abaixo para preparar o ambiente:

1. **Clonar o Repositório**
```bash
git clone https://github.com/[SEU_USUARIO]/[NOME_DO_PROJETO].git
cd [NOME_DO_PROJETO]
```

2. **Variáveis de Ambiente (Environment)**
Atualmente, o projeto não exige injeção de dependências externas. Contudo, em integrações futuras, o padrão estrutural a seguir deve ser adotado (pode ser ignorado para uso local básico):

| Variável | Descrição | Exemplo de Valor |
|----------|-----------|------------------|
| `[ENV_MODE]` | Define o comportamento do logger do sistema. | `development` |
| `[DB_HOST]` | Placeholder para futura implementação de banco. | `localhost` |

3. **Compilando o Projeto**
Escolha o script desejado e compile-o usando o `gcc`:
```bash
# Exemplo compilando o exercicio 05
gcc exercicio05.c -o login_sim
```

4. **Executando**
```bash
./login_sim
```

## 8. Como Usar (Usage)

Aqui está um exemplo de caso de uso (Use Case) do **Exercício 05 (Sistema de Autenticação)**. O sistema exige a combinação de credenciais predefinidas na base lógica (User: `12345`, Pass: `123`).

**Exemplo de Interação no Terminal:**
```text
Digite o user: 12345

Digite a pass: 999

Dados incorretos
Você ainda tem 2 tentativas
Digite o user: 12345

Digite a pass: 123
Logado!!!
```

## 9. Testes

Os módulos deste projeto são avaliados via **Testes Funcionais Fim-a-Fim (E2E) Manuais** no emulador de terminal. 

**Roadmap de Qualidade:**
Para garantir um processo contínuo de integração (CI), recomendamos a futura implementação da framework **[Unity Test API](http://www.throwtheswitch.org/unity)** para testes unitários em C.

* **Cobertura (Coverage) Atual:** `[INSERIR PORCENTAGEM, ex: 0% automatizado]`
* **Ferramentas propostas:** `Unity`, `gcov` (GNU Coverage).

## 10. Contribuição e Licença

Adotamos a cultura Open Source. Para contribuir com melhorias de código, refatorações (especialmente os pontos levantados na Análise Técnica) ou novas funcionalidades:

1. Realize um **Fork** do repositório.
2. Crie uma branch descritiva (`git checkout -b feature/refatoracao-variaveis-ex02`).
3. Siga o padrão **Conventional Commits** (`git commit -m 'fix: inicializa variaveis acumuladoras em zero'`).
4. Envie suas mudanças (`git push origin feature/refatoracao-variaveis-ex02`).
5. Abra um **Pull Request (PR)** para revisão.

---
Distribuído sob a licença **[INSERIR LICENÇA - Ex: MIT License]**. Consulte o arquivo `LICENSE` para maiores detalhes.