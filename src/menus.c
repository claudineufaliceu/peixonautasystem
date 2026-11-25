#include <stdio.h>
#include "../include/menus.h"

int menu_principal() {
    int opcao;

    printf("\nPeixonautaSystem Versão 00.113b0\n");
    printf("--------------------------------\n");
    printf("1. Estoque\n");
    printf("2. Clientes\n");
    printf("3. Vendas\n");
    printf("0. Sair do programa\n");
    printf("--------------------------------\n\n");
    printf("usr >>> ");
    scanf("%i", &opcao);
    getchar();

    return opcao;
}

int menu_estoque() {
    int opcao;

    printf("\nMenu >>> ESTOQUE\n");
    printf("--------------------------------\n");
    printf("1. Incluir item\n");
    printf("2. Excluir item\n");
    printf("3. Consultar item por espécie\n");
    printf("4. Listar itens em estoque\n");
    printf("5. Listar itens com estoque abaixo de um valor\n");
    printf("0. Retornar ao menu principal\n");
    printf("--------------------------------\n\n");
    printf("usr -> ");
    scanf("%i", &opcao);
    getchar();

    return opcao;
}

int menu_clientes() {
    int opcao;

    printf("\nMenu >>> CLIENTES\n");
    printf("--------------------------------\n");
    printf("1. Incluir novo cliente\n");
    printf("2. Escluir cliente\n");
    printf("3. Listar cliente cadastrados\n");
    printf("4. Consultar cliente por nome\n");
    printf("5. Listar cliente ativos\n");
    printf("0. Retornar ao menu principal\n");
    printf("--------------------------------\n\n");
    printf("usr -> ");
    scanf("%i", &opcao);
    getchar();

    return opcao;
}

int menu_vendas() {
    int opcao;

    printf("\nMenu >>> VENDAS\n");
    printf("--------------------------------\n");
    printf("1. Incluir nova venda\n");
    printf("2. Listar vendas por cliente\n");
    printf("3. Listar todas as vendas\n");
    printf("4. Listar vendas por espécie\n");
    printf("0. Retornar ao menu principal\n");
    printf("--------------------------------\n\n");
    printf("usr -> ");
    scanf("%i", &opcao);
    getchar();

    return opcao;
}
