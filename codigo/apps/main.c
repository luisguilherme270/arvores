#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void imprimirVetor(int vetor[], int tamanho) {
    printf("[ ");
    for(int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("]");
}

int main() {
    struct No* raiz = NULL;
    int opcao;

    
    int valores[] = {50, 30, 70, 20, 40, 60, 80};
    
   
    int tamanho = sizeof(valores) / sizeof(valores[0]);

   
    for (int i = 0; i < tamanho; i++) {
        raiz = inserirNo(raiz, valores[i]);
    }


    do {
        printf("1 - Percorrer em Pre-Ordem\n");
        printf("2 - Percorrer Em-Ordem\n");
        printf("3 - Percorrer em Pos-Ordem\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 3) {
            printf("\n-> Vetor Original inserido: ");
            imprimirVetor(valores, tamanho);
            printf("\n-> Resultado da Travessia : [ ");
        }

        switch (opcao) {
            case 1:
                preOrdem(raiz); // raiz, esq, dir
                printf("]\n");
                break;
            case 2:
                emOrdem(raiz);
                printf("]\n"); //esq, raiz, dir 
                break;
            case 3:
                posOrdem(raiz); //esq, dir, raiz 
                printf("]\n");
                break;
            case 0:
                printf("\nSaindo e liberando a memoria da arvore...\n");
                break;
            default:
                printf("\nOpcao invalida! Tente novamente.\n");
        }
        
    } while (opcao != 0);

    desalocarNo(raiz);
    
    return 0;
}