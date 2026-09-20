PROJETO 1 — exercicio_01

1.2 Descrição

É um programa de linha de comando (roda em uma janela de texto, sem telas gráficas). Ele pergunta ao usuário:

    a quantidade recebida pela manhã;
    a quantidade recebida pela tarde.

Em seguida soma os dois valores e mostra a frase "Total de produtos recebidos no dia" com o resultado.

    Finalidade: calcular o total diário a partir de duas quantidades (manhã e tarde).
    Problema que resolve: o objetivo não está descrito em nenhum comentário. Pelas mensagens de tela, o programa parece servir para totalizar recebimentos de produtos em um dia (interpretação).
    Como funciona, em termos gerais: lê dois números inteiros do teclado → soma → imprime o total.

1.3 Funcionalidades

    Ler a quantidade recebida pela manhã (número inteiro).
    Ler a quantidade recebida pela tarde (número inteiro).
    Calcular o total (manhã + tarde).
    Exibir o total na tela.

1.4 Tecnologias utilizadas
Tecnologia 	Onde aparece 	Função no projeto
Linguagem C 	extensão .c e sintaxe do código 	Linguagem em que o programa foi escrito
stdio.h 	#include<stdio.h> 	Fornece printf (mostrar texto) e scanf (ler do teclado)
locale.h 	#include<locale.h> 	Fornece setlocale (configuração regional)


1.8 Funcionamento

    Entrada: dois números inteiros digitados no teclado (manhã e tarde).
    Processamento: qte_total = qte_manha + qte_tarde.
    Saída: mensagem com o total, na tela.
    Regras de negócio: nenhuma além da soma simples.

1.9 Exemplos de uso

(Exemplo calculado manualmente a partir do código, não extraído dos arquivos.)

Quantidade recebida pela manhã: 30
Qauntidade recebida pela tarde: 45
Total de produtos recebidos no dia: 75

1.10 Observações ou limitações

    Só aceita números inteiros (%d). Não há tratamento para letras ou valores inválidos.
    O programa não imprime uma quebra de linha no final da mensagem.
    Não existem instruções de compilação/execução nos arquivos.
    Enunciado original: não fornecido.
