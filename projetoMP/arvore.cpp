
#include "cabecalho.h"          
#include <stdio.h>
#include <stdlib.h>
#include "../single_include/catch.hpp"
#include <string.h>
#include "arvore.h"

Arvore * treeVazia() {
    return NULL;
}

/*
Arvore * cria(int valor, Arvore * sae, Arvore * sad) {
    Arvore * p = (Arvore *) malloc(sizeof (Arvore));
    p->info = valor;
    p->esq = sae;
    p->dir = sad;
    return p;
}
 */

Arvore * insere(Arvore * a, char * palavra) {
    if (a == NULL) {
        a = (Arvore *) malloc(sizeof (Arvore));
        strcpy(a->info, palavra);
        a->dir = NULL;
        a->esq = NULL;
    } else {
        if ( a->esq!=NULL) {

            a->esq = insere(a->esq, palavra);
        } else {

            a->dir = insere(a->dir, palavra);
        }
    }
    return a;
}

Arvore * excluir(Arvore * a, char * palavra) {
    if (a == NULL) { //vazia
        return NULL;
    } else {
        if (a->esq != NULL) { //exclui sae
            a->esq = excluir(a->esq, palavra);
        } else {
            if (a->dir != NULL) { // exclui sad
                a->dir = excluir(a->dir, palavra);
            } else {
                if (a->esq == NULL && a->dir == NULL) { //não tem filhos 
                    free(a);
                    return NULL;
                } else {
                    if (a->dir == NULL) { //não tem filho na direita
                        Arvore * aux = a;
                        a = a->esq; //ve se tem na esquerda
                        free(aux);
                    } else {
                        if (a->esq == NULL) { //não tem filho na esquerda
                            Arvore * aux = a;
                            a = a->dir; //ve se tem na direita
                            free(aux);
                        } else { //arvore tem dois filhos
                            Arvore * temp = a->esq;
                            while (temp->dir != NULL) {
                                temp = temp->dir;
                            }
                            //                            a->info = temp->info;

                            strcpy(palavra, temp->info);
                            a->esq = excluir(a->esq, palavra);
                        }
                    }
                }
            }
        }
    }
    return a;
}

Arvore * libera(Arvore *a) {
    if (a == NULL) {
        libera(a->esq);
        libera(a->dir);
        free(a);
    }
    return NULL;
}

int altura(Arvore * a) {
    if (a == NULL) {
        return -1;

    } else {
        return 1 + max(altura(a->esq), altura(a->dir));
    }
}

int max(int a, int b) {
    if (a < b) {
        return b;
    } else {
        return a;
    }
}

void preOrdem(Arvore* a) {
    if (a == NULL) {
        printf("<>");
    }
    if (a != NULL) {
        printf("<%s", a->info);
        preOrdem(a->esq);

        preOrdem(a->dir);
        printf(">");
    }
}

void inOrdem(Arvore* a) {
    if (a == NULL) {
        printf("<>");
    }
    if (a != NULL) {

        inOrdem(a->esq);
        printf("<%s", a->info);
        inOrdem(a->dir);
        printf(">");
    }
}

void posOrdem(Arvore* a) {
    if (a == NULL) {
        printf("<>");
    }
    if (a != NULL) {

        posOrdem(a->esq);
        printf(">");
        posOrdem(a->dir);

        printf("<%s", a->info);
    }
}


