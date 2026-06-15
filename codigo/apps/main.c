#include <stdio.h>
#include <stdlib.h>
#include "main.h"

struct No{
    int dado;
    struct No *esquerda;
    struct No *direita;
};

int main(){

    struct No* raiz = criarNo(1);
    struct No* n1 = criarNo(2);
    struct No* n2 = criarNo(3);
    struct No* n3 = criarNo(4);
    struct No* n4 = criarNo(5); 
    
    raiz->esquerda = n1;
    raiz->direita = n2;

    n1->esquerda = n3;
    n2->direita = n4;

    printf("pre ordem(raiz, esquerda, direita)\n");
    preOrdem(raiz);
    printf("\n\n");
    
     printf("em ordem( esquerda, raiz, direita)\n");
    emOrdem(raiz);
    printf("\n\n");

    printf("pos ordem(esquerda, direita, raiz)\n");
    posOrdem(raiz);
    printf("\n\n");

    desalocarNo(raiz);
    if(raiz == NULL){ printf("deu certo"); }
    return 0;

}