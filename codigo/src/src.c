#include <stdio.h>
#include <stdlib.h>
#include "main.h"

// declara uma struct No
struct No
{
    int dado;
    struct No *esquerda;
    struct No *direita;
};

// função para printar o valor do dado armazenado em raiz
void lerNo(struct No *raiz)
{
    printf("%d ", raiz->dado);
}

// função para retornar o valor armazenado em raiz
int getDado(const struct No *raiz)
{
    return raiz->dado;
}

// função para setar uma valor na raiz
void setDado(struct No *raiz, int valor)
{
    raiz->dado = valor;
}

// função para verificar a alocação do Nó
void verificarNo(struct No *novo)
{
    if (novo == NULL)
    {
        printf("Erro na alocação!\n");
        return;
    }
}

// função que retorna a struct alocada e inicializada
struct No *criarNo(int valor)
{
    struct No *novo = (struct No*)malloc(sizeof(struct No));

    verificarNo(novo);

    novo->dado = valor;
    novo->esquerda = NULL;
    novo->direita = NULL;

    return novo;
}

/* 
    função para desalocar os Nós da árvore, passando primeiro por todos os
    "filhos" da esquerda e depois pelos "filhos" da direita, e por fim a Raiz.
*/

void desalocarNo(struct No *raiz)
{
    if (raiz == NULL)
        return;

    desalocarNo(raiz->esquerda);
    desalocarNo(raiz->direita);
    free(raiz);
}

/* 
    função que faz a travessia Em-Ordem utilizando recursão, passando primeiro
    pela esquerda, depois voltando para a raiz,e por fim para a direita
*/
void emOrdem(struct No *raiz)
{
    if (raiz == NULL)
        return;
    
    emOrdem(raiz->esquerda);
    lerNo(raiz);
    emOrdem(raiz->direita);
}

/* 
    função que faz a travessia em Pré-Ordem, passando pela raiz, depois indo para a
    esquerda, e por fim para direita
*/
void preOrdem(struct No *raiz)
{
    if (raiz == NULL)
        return;

    lerNo(raiz);
    preOrdem(raiz->esquerda);
    preOrdem(raiz->direita);
}

/*
    função que faz a travessia em Pós-Ordem, passando primeiro por todos da esquerda,
    depois pela direita e por fim na raiz
*/
void posOrdem(struct No *raiz)
{
    if (raiz == NULL)
        return;

    posOrdem(raiz->esquerda);
    posOrdem(raiz->direita);
    lerNo(raiz);
}
