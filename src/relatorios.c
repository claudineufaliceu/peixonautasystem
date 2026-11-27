#include "../include/relatorios.h"
#include "../include/utils.h"

void mostrar_dados_peixe(peixe_t peixe, FILE *fp) {
    fprintf(fp, "Identificação.......: %hhu\n", peixe.id);
    fprintf(fp, "Espécie.............: %s\n", peixe.especie);
    fprintf(fp, "Quantidade estoque..: %.2f\n", peixe.qtd_estoque);
    fprintf(fp, "Valor em Kg.........: %.2f\n\n", peixe.vlr_unitario);
}

void mostrar_dados_cliente(cliente_t cliente, FILE *fp) {
    
    fprintf(fp, "Identificação.......: %hhu\n", cliente.id);
    fprintf(fp, "Nome................: %s\n", cliente.nome);
    fprintf(fp, "Telefone............: %s\n", cliente.telefone);
    fprintf(fp, "Status..............: %s\n\n", mostrar_status(cliente));

}

void mostrar_dados_venda(venda_t venda, FILE *fp) {

}

void listar_peixes(no_peixe_t *lista) {
    while (lista) {
        mostrar_dados_peixe(lista -> peixe, stdout);
        lista = lista -> prox;
    }
}

void listar_clientes(no_cliente_t *lista) {
    while (lista) {
        mostrar_dados_cliente(lista -> cliente, stdout);
        lista = lista -> prox;
    }
}

void listar_vendas(no_venda_t *lista) {
    for (lista; lista != NULL; lista = lista -> prox) {
        mostrar_dados_venda(lista -> venda, stdout);
    }
}