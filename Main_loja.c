//Projeto de Lab AED II.
//Prot�tipo de Loja Online (Varejo) - Pode ser adaptado para atacado.
//Desenvolvido Por Luiz Fernando da Silva Junior, Elson Jos� de Oliveira Junior, 
//Nincolas Jos� Santos e Bruno Fernando Candido.


#include "estruturas.h"
#include "funcoes.c" //chamada das fun��es
#include <locale.h>


int main(void) {
    int escolha_inicial;


inicia_programa();
    setlocale(LC_ALL, "portuguese"); //habilita acentua��o
    printf("\nSeja Bem-vindo a nossa loja!");
    printf("\nComo podemos te ajudar?");
    do{

        menu_inicial();
        scanf("%d", &escolha_inicial);
        escolha(escolha_inicial);


    }while (escolha_inicial != 4); //chamada de fun��o menu inicial em loop


    return 0;
}


