# Questões de programação I do IFSC Criciúma do curso superior de Engenharia Mecatrônica (AV2)

### Tecnologias utilizadas:
- CodeBlocks -> [[Baixar aqui!]](https://www.codeblocks.org/)
- Linguagem de programação utilizada: C

## Enunciado da Questão 1
Dada a fórmula de conversão de temperatura de graus Celsius em graus Fahrenheit (abaixo), escreva um programa que calcule e informe uma tabela de graus Fahrenheit em função de graus Celsius. O programa deve ler as temperaturas inicial, final em graus Celsius e variação da temperatura.

Por exemplo: supondo que a temperatura inicial seja -3, a temperatura final seja 2, e a variação seja de 0.5, então a seguinte tabela é impressa:
- | tC      | tF
- | -3.00   | 26.60
- | -2.50   | 27.50
- | -2.00   | 28.40
- | -1.50   | 29.30
- | -1.00   | 30.20
- | -0.50   | 31.10
- | 0.00    | 32.00
- | 0.50    | 32.90
- | 1.00    | 33.80
- | 1.50    | 34.70
- | 2.00    | 35.60

**FÓRMULÁRIO: tempratura Fahrenheit = temperatura em Celsius*1.8 + 32**

## Enunciado da Questão 2
Faça um programa que compute os votos de uma eleição entre Gumercindo e Teodoro. O programa deve ler os votos de diversos eleitores, imprimir as quantidades de votos e o percentual que cada quantidade representa do total. Cada voto é realizado pela leitura do número do candidato:

- **1 - Voto em Gumercindo;**
- **2 - Voto em Teodoro;**
- **0 - Voto branco;**
- **qualquer outro número - Voto nulo.**

O programa finaliza a votação e imprime os resultados assim que a entrada dada não for um número int válido.

## Enunciado da Questão 3
Escreva um programa em C que leia 10 números inteiros do usuário e, em seguida, calcule e exiba a quantidade de números pares inseridos. O programa deve seguir os seguintes passos:
- Solicitar que o usuário insira 10 números inteiros, um de cada vez.
- Contar quantos desses números são pares.
- Exibir a quantidade de números pares encontrados.                  
## Enunciado da Questão 4
Faça um programa que leia uma matriz de 4 x 4 valores float e mais um valor float a ser procurado nesta matriz. Após, imprima as respectivas posições e valores encontrados no vetor conforme exemplificado abaixo.

A leitura de dados de entrada deve considerar que a primeira dimensão do vetor indica a linha, a segunda indica a coluna, e que a ordem de leitura é ler todas as colunas de cada linha. Assim, começa a leitura pela primeira coluna da primeira linha, depois a segunda coluna da primeira linha, assim até chegar a quarta coluna da primeira linha. Depois, a leitura passa para a segunda linha, começando pela primeira coluna, depois lendo a segunda e assim sucessivamente.

Para a seguinte matriz de entrada (os valores destacados são apenas para indicar que estes são os valores que depois serão procurados). Exemplo:

- Entrada: 61.23, 57.45, 66.26, 72.61, ...
- Valor a ser procurado: 72.61
- Saída: M[0][3]: 72.61,...

Para impressão dos valores float, utilize a máscara %0.2f para imprimir com precisão de 2 casas decimais. Observe que independente de haver ou não valores encontrados na matriz, deve-se imprimir a mensagem final "FIM DO PROGRAMA!"
