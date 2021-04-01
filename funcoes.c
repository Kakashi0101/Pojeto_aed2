#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <SDL2-2.0.12/x86_64-w64-mingw32/include/sdl2>


//#include "estruturas.h"

int numRoupa = 0;

roupas camisetas[3], calcas[3], sapatos[3];
carrinho carrinho_compras;

void inicia_programa(){


    camisetas[1].id = 1;
    strcpy(camisetas[1].nome_roupa, "camiseta 1");
    camisetas[1].valor = 10.00;

    camisetas[2].id = 2;
    strcpy(camisetas[2].nome_roupa, "camiseta 2");
    camisetas[2].valor = 20.00;

    camisetas[3].id = 3;
    strcpy(camisetas[3].nome_roupa, "camiseta 3");
    camisetas[3].valor = 30.00;

    calcas[1].id = 4;
    strcpy(calcas[1].nome_roupa, "calcas 1");
    calcas[1].valor = 10.00;

    calcas[2].id = 5;
    strcpy(calcas[2].nome_roupa, "calcas 2");
    calcas[2].valor = 20.00;

    calcas[3].id = 6;
    strcpy(calcas[3].nome_roupa, "calcas 3");
    calcas[3].valor = 30.00;

    sapatos[1].id = 7;
    strcpy(sapatos[1].nome_roupa, "sapatos 1");
    sapatos[1].valor = 10.00;

    sapatos[2].id = 8;
    strcpy(sapatos[2].nome_roupa, "sapatos 2");
    sapatos[2].valor = 20.00;

    sapatos[3].id = 9;
    strcpy(sapatos[3].nome_roupa, "sapatos 3");
    sapatos[3].valor = 30.00;

}//Peças de roupa disponíveis na loja


void menu_inicial() {
    printf("\n1.Colocar produtos no carrinho");
    printf("\n2.Pagar");
    printf("\n3.Ver carrinho");
    printf("\n4.Sair\n");
}//Opcões do menu inicial


void menu_compra() {
    printf("\nO que gostaria de visitar?");
    printf("\n1.Camisetas");
    printf("\n2.Calças");
    printf("\n3.Sapatos\n");
}//escolher qual tipo de peça de roupa irá comprar


void menu_pagamento() {
    printf("\n1.Ver pagamentos pendentes");
    printf("\n2.Pagar");

}//formas de pagamento


int menu_roupa(int escolha) {

int escolha_peca;
int escolha_imagem;

switch (escolha) {
    case 1:
        printf("\nEscolha uma camiseta: ");
        printf("\nCamiseta 1 - R$10,00");
        printf("\nCamiseta 2 - R$20,00");
        printf("\nCamiseta 3 - R$30,00\n");
        scanf("%d", &escolha_peca);
        switch(escolha_peca) {
            case 1:
                printf("você deseja ver uma imagem da camisa 1 ?");
                printf("1-sim 2-não");
                scanf("%d",&escolha_imagem);
                if(escolha_imagem==1){

                }
                else{
                    return 1;
                }
            return 1;
            break;

            case 2:
            return 2;
            break;

            case 3:
            return 3;
            break;


        }
        break;

    case 2:
        printf("\nEscolha uma calça: ");
        printf("\nCalça 1 - R$10,00");
        printf("\nCalça 2 - R$20,00");
        printf("\nCalça 3 - R$30,00\n");
        scanf("%d", &escolha_peca);
        switch(escolha_peca){
            case 1:
            return 4;
            break;

            case 2:
            return 5;
            break;

            case 3:
            return 6;
            break;


        }
        break;

    case 3:
        printf("\nEscolha um sapato: ");
        printf("\nSapato 1 - R$10,00");
        printf("\nSapato 2 - R$20,00");
        printf("\nSapato 3 - R$30,00\n");
        scanf("%d", &escolha_peca);

        switch(escolha_peca){
            case 1:
            return 7;
            break;

            case 2:
            return 8;
            break;

            case 3:
            return 9;
            break;


        }
        break;

    }
return 0;
}//escolher peça de roupa que dejesa comprar


void escolha(int escolhaInicial) {
    int escolha_compra;
    int escolha_pagamento;

    switch (escolhaInicial) {
        case 1:
            menu_compra();
            scanf("\n%d",&escolha_compra);
            adicionar_roupa(escolha_compra);

        break;
        case 2:
            menu_pagamento();
        break;

        case 3:
        mostra_carrinho();
            break;
        case 4:
            break;
    }
    switch (escolha_pagamento) {
    case 1:
        printf("\nem construção!");
        break;

    case 2:
        printf("\nem construção!");
        break;

    }
}//Menu inicial


void adicionar_roupa(int escolha) {
    int id_roupa;
    id_roupa = menu_roupa(escolha);

    switch(id_roupa) {
        case 1:
        numRoupa ++;
        carrinho_compras.num_itens ++;
        carrinho_compras.roupas_carrinho[numRoupa].id = camisetas[1].id;
        strcpy(carrinho_compras.roupas_carrinho[numRoupa].nome_roupa, camisetas[1].nome_roupa);
        carrinho_compras.roupas_carrinho[numRoupa].valor = camisetas[1].valor;
        carrinho_compras.valor_total = carrinho_compras.valor_total + camisetas[1].valor;
           break;
        case 2:
        numRoupa ++;
        carrinho_compras.num_itens ++;
        carrinho_compras.roupas_carrinho[numRoupa].id = camisetas[2].id;
        strcpy(carrinho_compras.roupas_carrinho[numRoupa].nome_roupa, camisetas[2].nome_roupa);
        carrinho_compras.roupas_carrinho[numRoupa].valor = camisetas[2].valor;
        carrinho_compras.valor_total = carrinho_compras.valor_total + camisetas[2].valor;
            break;
        case 3:
        numRoupa ++;
        carrinho_compras.num_itens ++;
        carrinho_compras.roupas_carrinho[numRoupa].id = camisetas[3].id;
        strcpy(carrinho_compras.roupas_carrinho[numRoupa].nome_roupa, camisetas[3].nome_roupa);
        carrinho_compras.roupas_carrinho[numRoupa].valor = camisetas[3].valor;
        carrinho_compras.valor_total = carrinho_compras.valor_total + camisetas[3].valor;
            break;
        case 4:
        numRoupa ++;
        carrinho_compras.num_itens ++;
        carrinho_compras.roupas_carrinho[numRoupa].id = calcas[1].id;
        strcpy(carrinho_compras.roupas_carrinho[numRoupa].nome_roupa, calcas[1].nome_roupa);
        carrinho_compras.roupas_carrinho[numRoupa].valor = calcas[1].valor;
        carrinho_compras.valor_total = carrinho_compras.valor_total + calcas[1].valor;
            break;
        case 5:
        numRoupa ++;
        carrinho_compras.num_itens ++;
        carrinho_compras.roupas_carrinho[numRoupa].id = calcas[2].id;
        strcpy(carrinho_compras.roupas_carrinho[numRoupa].nome_roupa, calcas[2].nome_roupa);
        carrinho_compras.roupas_carrinho[numRoupa].valor = calcas[2].valor;
        carrinho_compras.valor_total = carrinho_compras.valor_total + calcas[2].valor;
            break;
        case 6:
        numRoupa ++;
        carrinho_compras.num_itens ++;
        carrinho_compras.roupas_carrinho[numRoupa].id = calcas[3].id;
        strcpy(carrinho_compras.roupas_carrinho[numRoupa].nome_roupa, calcas[3].nome_roupa);
        carrinho_compras.roupas_carrinho[numRoupa].valor = calcas[3].valor;
        carrinho_compras.valor_total = carrinho_compras.valor_total + calcas[3].valor;
            break;
        case 7:
        numRoupa ++;
        carrinho_compras.num_itens ++;
        carrinho_compras.roupas_carrinho[numRoupa].id = sapatos[1].id;
        strcpy(carrinho_compras.roupas_carrinho[numRoupa].nome_roupa, sapatos[1].nome_roupa);
        carrinho_compras.roupas_carrinho[numRoupa].valor = sapatos[1].valor;
        carrinho_compras.valor_total = carrinho_compras.valor_total + sapatos[1].valor;
            break;
        case 8:
        numRoupa ++;
        carrinho_compras.num_itens ++;
        carrinho_compras.roupas_carrinho[numRoupa].id = sapatos[2].id;
        strcpy(carrinho_compras.roupas_carrinho[numRoupa].nome_roupa, sapatos[2].nome_roupa);
        carrinho_compras.roupas_carrinho[numRoupa].valor = sapatos[2].valor;
        carrinho_compras.valor_total = carrinho_compras.valor_total + sapatos[2].valor;
            break;
        case 9:
        numRoupa ++;
        carrinho_compras.num_itens ++;
        carrinho_compras.roupas_carrinho[numRoupa].id = sapatos[3].id;
        strcpy(carrinho_compras.roupas_carrinho[numRoupa].nome_roupa, sapatos[3].nome_roupa);
        carrinho_compras.roupas_carrinho[numRoupa].valor = sapatos[3].valor;
        carrinho_compras.valor_total = carrinho_compras.valor_total + sapatos[3].valor;
            break;

    }
    printf("\nGostaria de algo mais?");
}//Adicionar roupas no carrinho de compras


void mostra_carrinho(){
    printf("\nCarrinho:\n");
    if(numRoupa ==  0){
        printf("Carrinho vazio...\n");
    }else{
    for(int i = 1; i <= numRoupa; i++){
        printf(">%s R$%.2f\n", carrinho_compras.roupas_carrinho[i].nome_roupa, carrinho_compras.roupas_carrinho[i].valor);

    }
    printf("Preço total: R$%.2f\n\n", carrinho_compras.valor_total);
    }
    printf("\nGostaria de algo mais?");
}//mostrar o carrinho de compras

