#ifndef RELATORIOS_H
#define RELATORIOS_H

#include <stdio.h>
#include "tipos.h"

void mostrar_dados_peixe(peixe_t peixe, FILE *fp);
void mostrar_dados_cliente(cliente_t cliente, FILE *fp);
void mostrar_dados_venda(venda_t venda, FILE *fp);

void listar_peixes(no_peixe_t *lista);
void listar_clientes(no_cliente_t *lista);
void listar_vendas(no_venda_t *lista);

#endif