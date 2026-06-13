#ifndef MAIN_C
#define MAIN_C
#include <stdio.h>
#include <stdlib.h>

// define apenas struct No
struct No;

// função para verificar o No
void verificarNo(struct No *no);


// função para criar um No
struct No* criarNo(int dado);

// função para desalocar o No
void desalocarNo(struct No* no);

// função para ler o No
void lerNo(struct No *no);

// getters
int getDado(const struct No *no);

// setters
void setDado(struct No *no,int valor);

// função para fazer travessia Em-Ordem
void emOrdem(struct No *raiz);

// função para fazer travessia em Pré-Ordem
void preOrdem(struct No *raiz);

// função para fazer travessia em Pós-Ordem
void posOrdem(struct No *raiz);

#endif