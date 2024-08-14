<h1 align="center">Ft_printf</h1>

<div align="center">
 <img src="https://github.com/debsalbornoz/ft_printf/assets/119970138/bfc6c2e5-126e-4048-a6c7-fa247eb75ad6" alt="Ft_printf logo">
</div>
<div align="center">
<img alt="Static Badge" src="https://img.shields.io/badge/Status-Finished-green">
</div>

<h2>Sobre</h2>

O **ft_printf** é um projeto da escola de programação 42 que recria a função `printf` do zero. É utilizado para exibir dados formatados na saída padrão (terminal).

A função `ft_printf` recebe uma string de formato como argumento, onde os especificadores de formato começam com `%`. Os valores correspondentes para as variáveis ou dados a serem exibidos são fornecidos após a string de formato. Essa função oferece uma variedade de especificadores de formato para inteiros, strings, caracteres, ponteiros e até mesmo números em diferentes bases, como hexadecimal, permitindo uma formatação detalhada da saída.

É uma ferramenta essencial para exibir informações de maneira organizada e compreensível durante a execução do programa. Amplamente utilizada para depuração, exibição de resultados e interação com o usuário, tornou-se um componente indispensável nas tarefas de programação.

<h2>Conversões suportadas</h2>

| Especificador de formato | Descrição |
| :----------------------: | :-------- |
| %                      | Imprime um '%'. |
| c                      | Imprime um único caractere. |
| s                      | Imprime uma string. |
| p                      | Imprime uma sequência de caracteres definida pela implementação que representa o endereço de um ponteiro. |
| d ou i                 | Imprime um inteiro com sinal em representação decimal. |
| u                      | Imprime um inteiro sem sinal em representação decimal. |
| x ou X                  | Imprime um inteiro sem sinal em representação hexadecimal em minúsculas (x) ou maiúsculas (X). |

<h2>Como usar: </h2>

<h3>Requisitos:</h3>

Este projeto necessita do compilador `cc`.

<h3>Instruções:</h3>

- Clone o repositório:

    ```bash
    git clone https://github.com/debsalbornoz/ft_printf.git
    ```

- Para compilar a biblioteca, execute:

    ```bash
    make
    ```

- Para usar em seu código, inclua o cabeçalho:

    ```c
    #include "ft_printf.h"
    ```

- Compile a biblioteca junto com seu programa e execute:

    ```bash
    cc -Wall -Wextra -Werror seu_programa.c libftprintf.a && ./a.out
    ```
