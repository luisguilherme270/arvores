#include <stdio.h>
#include <stdlib.h>
#include "main.h"

struct No{
    int dado;
    struct No *esquerda;
    struct No *direita;
};

int main(){

    struct No* raiz = criarNo(5);
    struct No* n1 = criarNo(1);
    struct No* n2 = criarNo(2);
    struct No* n3 = criarNo(3);
    struct No* n4 = criarNo(4); 
    struct No* n5 = criarNo(6);
    struct No* n6 = criarNo(7);
    struct No* n7 = criarNo(8);
    struct No* n8 = criarNo(9);

    
    raiz->esquerda = n3;
    raiz->direita = n7;

    n3->esquerda = n1;
    n3->direita = n4
    n7->esquerda = n6;
    n7->direita = n8;

    n1->direita = n2;
    n6->esquerda = n5;

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
