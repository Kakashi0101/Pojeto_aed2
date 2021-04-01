#define ESTRUTURAS_H

#define TAMANHO_NOME 20
#define TAMANHO_CARRINHO 50

//structs

typedef struct roupas {
    int id;
    char nome_roupa[TAMANHO_NOME];
    float valor;
} roupas;

typedef struct carrinho {
    int num_itens;
    roupas roupas_carrinho[TAMANHO_CARRINHO];
    float valor_total;
} carrinho;

typedef struct pagamento {
    int tipo_pagamento;
    carrinho carrinho_final;
    float valor_final;
} pagamento;

// Protótipos das funcoes
void mostra_carrinho();
void inicia_programa();
void menu_inicial();
void menu_compra();
void menu_pagamento();
int menu_roupa(int);
void escolha(int);
void adicionar_roupa(int);

