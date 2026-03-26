# Calculadora Simples em C

## Descrição do Projeto

Este projeto implementa uma calculadora simples em linguagem C capaz de realizar operações matemáticas básicas entre dois números.

O usuário informa uma expressão no formato "número operador número" (por exemplo: 5 + 3), e o programa interpreta e executa a operação correspondente.

As operações suportadas são:

* Soma (+)
* Subtração (-)
* Multiplicação (*)
* Divisão (/)

---

## Funcionamento

O programa realiza os seguintes passos:

1. Solicita ao usuário uma expressão matemática
2. Lê dois números e um operador
3. Utiliza uma estrutura `switch` para identificar a operação
4. Executa o cálculo correspondente
5. Exibe o resultado na tela

---

## Exemplos de Execução

### Entrada:

Digite a expressao (ex: 5 + 3):
5 + 3

### Saída:

Resultado: 8

---

### Entrada:

Digite a expressao (ex: 5 + 3):
10 / 2

### Saída:

Resultado: 5

---

### Entrada:

Digite a expressao (ex: 5 + 3):
7 * 4

### Saída:

Resultado: 28

---

## Tratamento de Erros

O programa trata algumas situações inválidas:

* Divisão por zero:
  Exibe mensagem de erro e encerra o programa

* Operador inválido:
  Caso o operador não seja reconhecido, o programa informa erro

---

## Observações Importantes

* O formato de entrada deve ser exatamente: número operador número (ex: 5 + 3)
* O programa utiliza `double` para permitir números decimais
* O especificador `%lf` é usado para leitura de valores do tipo double
* O formato `%g` na saída remove zeros desnecessários
* O programa encerra imediatamente em caso de erro

---

## Conceitos Praticados

* Estruturas condicionais (`switch`)
* Entrada e saída de dados
* Tipos numéricos (`double`)
* Tratamento de erros
* Operações matemáticas básicas
