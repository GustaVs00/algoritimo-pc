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


1.5 Funcionamento

    Entrada: dois números inteiros digitados no teclado (manhã e tarde).
    Processamento: qte_total = qte_manha + qte_tarde.
    Saída: mensagem com o total, na tela.
    Regras de negócio: nenhuma além da soma simples.

1.6 Exemplos de uso

(Exemplo calculado manualmente a partir do código, não extraído dos arquivos.)

Quantidade recebida pela manhã: 30
Qauntidade recebida pela tarde: 45
Total de produtos recebidos no dia: 75

1.7 Observações ou limitações

    Só aceita números inteiros (%d). Não há tratamento para letras ou valores inválidos.
    O programa não imprime uma quebra de linha no final da mensagem.
    Não existem instruções de compilação/execução nos arquivos.
    Enunciado original: não fornecido.

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    PROJETO 2 — exercicio_02

1.1 Descrição

Programa de linha de comando que pergunta hora e minuto, converte tudo para minutos (hora × 60 + minuto) e imprime a frase "Ja se passaram X minuto".

    Finalidade: calcular o total de minutos correspondente a um valor em horas mais minutos.
    Problema que resolve: o código não declara o objetivo. A frase "Ja se passaram…" sugere um cálculo de tempo transcorrido, mas o código não diz de quando o tempo é contado (interpretação).
    Como funciona: lê dois inteiros, faz a conversão e imprime.

Atenção: este programa tem um erro na leitura de minuto (falta o & no scanf), descrito em 2.8. Na forma como está, o funcionamento correto não é garantido.
1.3 Funcionalidades

    Ler a hora (inteiro).
    Ler o minuto (inteiro) — com o defeito descrito em 2.8.
    Calcular (hora * 60) + minuto.
    Exibir o total de minutos.

1.4 Tecnologias utilizadas
Tecnologia 	Função
Linguagem C 	Linguagem do programa
stdio.h 	printf e scanf
locale.h 	setlocale

1.5 Funcionamento

    Entrada: hora e minuto (inteiros).
    Processamento: minuto_total = (hora * 60) + minuto.
    Saída: Ja se passaram <minuto_total> minuto.

1.6 Exemplos de uso

(Exemplo do comportamento pretendido, calculado manualmente. Ele só vale se o & faltante for corrigido.)

hora?2
minuto?30
Ja se passaram 150 minuto

1.7 Observações ou limitações

    Falta o & em scanf("%d", minuto);.
    A mensagem usa "minuto" no singular mesmo para valores diferentes de 1, e "Ja" sem acento.
    Não há validação (por exemplo, aceitaria 90 como minuto ou números negativos).
    Não há instruções de compilação/execução nos arquivos.

 //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
