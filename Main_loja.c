//Projeto de Lab AED II.
//Protótipo de Loja Online (Varejo) - Pode ser adaptado para atacado.
//Desenvolvido Por Luiz Fernando da Silva Junior, Elson José de Oliveira Junior, 
//Nincolas José Santos e Bruno Fernando Candido.


#include "estruturas.h"
#include "funcoes.c" //chamada das funções
#include <locale.h>


int main(void) {
    int escolha_inicial;


inicia_programa();
    setlocale(LC_ALL, "portuguese"); //habilita acentuação
    printf("\nSeja Bem-vindo a nossa loja!");
    printf("\nComo podemos te ajudar?");
    do{

        menu_inicial();
        scanf("%d", &escolha_inicial);
        escolha(escolha_inicial);


    }while (escolha_inicial != 4); //chamada de função menu inicial em loop


    return 0;
}


