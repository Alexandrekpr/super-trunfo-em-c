# Super Trunfo em C - Desafio de Programação

![Status](https://img.shields.io/badge/status-conclu%C3%ADdo-brightgreen)

Este repositório representa a culminação do desafio de programação do Super Trunfo, implementado em Linguagem C. Esta versão final integra todas as funcionalidades dos níveis anteriores e introduz uma lógica avançada de comparação baseada em múltiplos atributos, menus dinâmicos e uma interface de usuário mais robusta.

## 🚀 Funcionalidades Principais

-   **Seleção de Dois Atributos:** O jogador seleciona dois atributos distintos para usar na comparação, adicionando uma camada extra de estratégia ao jogo.
-   **Menus Dinâmicos:** A interface de menu é inteligente. Após o jogador escolher o primeiro atributo, ele é removido da lista de opções para a segunda escolha, evitando seleções repetidas.
-   **Lógica de Vitória por Soma:** A decisão final da rodada é baseada na soma dos valores dos dois atributos escolhidos para cada carta. A carta com a maior soma total vence.
-   **Tratamento de Empate:** O sistema lida corretamente com situações onde a soma dos atributos é idêntica para ambas as cartas.
-   **Uso de Operador Ternário:** O código utiliza o operador ternário (`?:`) para uma atribuição de nomes de atributos mais concisa e elegante.
-   **Estrutura Modular:** O código é organizado em funções para tarefas específicas (exibir menu, obter valor do atributo), melhorando a legibilidade e a manutenibilidade.
-   **Interface Robusta:** O programa lida com entradas inválidas do usuário, como opções fora do menu ou a tentativa de selecionar o mesmo atributo duas vezes, solicitando uma nova entrada sem quebrar a execução.

## 📂 Estrutura do Repositório

```
.
├── bin/
├── src/
│   └── super_trunfo.c
├── .gitignore
└── README.md
```
-   `src/`: Contém o código-fonte final e completo do projeto.
-   `bin/`: Pasta de destino para o executável após a compilação (ignorada pelo Git).

## ⚙️ Como Compilar e Executar

É necessário um compilador C (como o GCC) para executar o projeto.

1.  **Clone o repositório:**
    ```sh
    git clone https://github.com/Alexandrekpr/super-trunfo-em-c
    cd super-trunfo-mestre-c
    ```

2.  **Compile o programa:**
    O comando a seguir compila o código-fonte e gera o executável na pasta `bin`.
    ```sh
    gcc src/super_trunfo.c -o bin/super_trunfo
    ```

3.  **Execute o jogo:**
    ```sh
    ./bin/super_trunfo
    ```
    Siga as instruções no console para escolher os dois atributos e ver o resultado da comparação. O jogo continuará em um loop até que você escolha a opção de sair.

## 🛠️ Tecnologias Utilizadas

-   **Linguagem C**

## 👨‍💻 Autor

**Alexandre Pacheco**
