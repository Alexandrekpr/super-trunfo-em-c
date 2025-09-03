#include <stdio.h>
#include <string.h>

// Aqui a gente cria o nosso "molde" para as cartas do jogo.
struct Carta {
    char nomePais[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidade;
};

// Funcao para mostrar o menu de atributos na tela.
void exibirMenuDinamico(int excluirOpcao) {
    printf("\n--- Escolha um Atributo ---\n");
    if (excluirOpcao != 1) {
        printf("1. Populacao\n");
    }
    if (excluirOpcao != 2) {
        printf("2. Area\n");
    }
    if (excluirOpcao != 3) {
        printf("3. PIB\n");
    }
    if (excluirOpcao != 4) {
        printf("4. Pontos Turisticos\n");
    }
    if (excluirOpcao != 5) {
        printf("5. Densidade Demografica (menor vence)\n");
    }
    printf("---------------------------\n");
    printf("Digite sua opcao: ");
}

// Funcao para pegar o valor de um atributo da carta
float obterValorDoAtributo(struct Carta carta, int opcao) {
    switch (opcao) {
        case 1: return (float)carta.populacao;
        case 2: return carta.area;
        case 3: return carta.pib;
        case 4: return (float)carta.pontosTuristicos;
        case 5: return carta.densidade;
    }
    return 0.0;
}

// Funcao para pegar o nome de um atributo
const char* obterNomeDoAtributo(int opcao) {
    switch (opcao) {
        case 1: return "Populacao";
        case 2: return "Area";
        case 3: return "PIB";
        case 4: return "Pontos Turisticos";
        case 5: return "Densidade Demografica";
    }
    return "Invalido";
}

/*
   Esta funcao serve para limpar o lixo do teclado, principalmente o "Enter" (\n)
   que o scanf deixa para trás.
*/
void limparLixoDoTeclado() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}


int main() {

    // 1. Criando as cartas e colocando os dados dentro delas
    struct Carta carta1;
    strcpy(carta1.nomePais, "Japao");
    carta1.populacao = 125700000;
    carta1.area = 377975.0;
    carta1.pib = 4.941;
    carta1.pontosTuristicos = 210;
    carta1.densidade = (float)carta1.populacao / carta1.area; // Calculando a densidade

    struct Carta carta2;
    strcpy(carta2.nomePais, "Alemanha");
    carta2.populacao = 83240000;
    carta2.area = 357588.0;
    carta2.pib = 4.223;
    carta2.pontosTuristicos = 185;
    carta2.densidade = (float)carta2.populacao / carta2.area;

    int escolha1, escolha2;
    int sair = 0; // 0 significa 'falso', 1 significa 'verdadeiro'

    // 2. Loop principal do jogo. 'while' vai repetir o jogo ate o jogador pedir pra sair.
    while (sair == 0) {
        printf("\n========== NOVA RODADA ==========");
        printf("\nJogador, escolha o PRIMEIRO atributo (ou digite 0 para sair).\n");

        exibirMenuDinamico(0); // O 0 faz a funcao mostrar todas as opcoes
        scanf("%d", &escolha1);
        limparLixoDoTeclado(); // Limpa o Enter do primeiro scanf

        // Se o jogador digitou 0, a gente muda 'sair' pra 1 e o loop vai parar
        if (escolha1 == 0) {
            sair = 1;
            continue;
        }

        // Verifica se o numero digitado é valido
        if (escolha1 < 1 || escolha1 > 5) {
            printf("\nOpcao invalida! Tente novamente.\n");
            continue; // Volta para o inicio do 'while'
        }

        // 3. Pedindo o segundo atributo e garantindo que seja valido
        do {
            printf("\nAgora, escolha o SEGUNDO atributo.\n");
            exibirMenuDinamico(escolha1); // Mostra o menu sem a opcao que ja foi escolhida
            scanf("%d", &escolha2);
            limparLixoDoTeclado(); // Limpa o Enter do segundo scanf

            if (escolha2 == escolha1) {
                printf("\nErro: Voce nao pode escolher o mesmo atributo duas vezes.\n");
            } else if (escolha2 < 1 || escolha2 > 5) {
                printf("\nOpcao invalida! Escolha um numero da lista.\n");
            }
        // O loop repete se a escolha for igual a primeira ou se for um numero invalido
        } while (escolha2 == escolha1 || escolha2 < 1 || escolha2 > 5);


        // 4. Usando as funcoes para pegar os nomes e valores dos atributos
        const char* nomeAttr1 = obterNomeDoAtributo(escolha1);
        const char* nomeAttr2 = obterNomeDoAtributo(escolha2);

        float valor1_c1 = obterValorDoAtributo(carta1, escolha1);
        float valor2_c1 = obterValorDoAtributo(carta1, escolha2);
        float valor1_c2 = obterValorDoAtributo(carta2, escolha1);
        float valor2_c2 = obterValorDoAtributo(carta2, escolha2);

        // 5. Somando os valores e mostrando o resultado final na tela
        float soma_c1 = valor1_c1 + valor2_c1;
        float soma_c2 = valor1_c2 + valor2_c2;

        printf("\n============================================\n");
        printf("               RESULTADO FINAL\n");
        printf("============================================\n");
        printf("Cartas: %s vs %s\n", carta1.nomePais, carta2.nomePais);
        printf("Atributos: %s e %s\n", nomeAttr1, nomeAttr2);
        printf("--------------------------------------------\n");
        printf(">> %s: (Soma = %.2f)\n", carta1.nomePais, soma_c1);
        printf("   - %s: %.2f\n", nomeAttr1, valor1_c1);
        printf("   - %s: %.2f\n\n", nomeAttr2, valor2_c1);
        printf(">> %s: (Soma = %.2f)\n", carta2.nomePais, soma_c2);
        printf("   - %s: %.2f\n", nomeAttr1, valor1_c2);
        printf("   - %s: %.2f\n", nomeAttr2, valor2_c2);
        printf("--------------------------------------------\n");

        // Verificando quem ganhou
        if (soma_c1 > soma_c2) {
            printf("VENCEDOR: %s!\n", carta1.nomePais);
        } else if (soma_c2 > soma_c1) {
            printf("VENCEDOR: %s!\n", carta2.nomePais);
        } else {
            printf("RESULTADO: EMPATE!\n");
        }
        printf("============================================\n");

        printf("\nPressione Enter para jogar novamente...");
        getchar();
    }

    printf("\nObrigado por jogar!\n");

    return 0;
}