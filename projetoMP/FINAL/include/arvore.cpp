
#include "cabecalho.h"
#include <stdio.h>
#include <stdlib.h>
#include "../lib/catch.hpp"
#include <string.h>
#include "arvore.h"

//Retorna um ponteiro Arvore NULL
//Assertiva de entrada: nenhuma
//Assertiva de saida: nenhuma
//Requisito: nenhum
//Hipotese: irá retornar um ponteiro NULL
//interface explicita: nenhuma
//interface implicita: nenhuma

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


 //Insere um valor na arvore
 //Assertiva de entrada: checa se o ponteiro esta NULL
 //Assertiva de saida: nenhuma
 //Requisito: Palavra não pode ser NULL
 //Hipotese: irá inserir o valor e retornar o novo ponteiro da arvore
 //interface explicita: ponteiro da arvore e a palavra a ser inserida
 //interface implicita: nenhuma

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


//Exclui o ponteiro
//Assertiva de entrada: checa se o ponteiro esta NULL
//Assertiva de saida: nenhuma
//Requisito: Palavra não pode ser NULL
//Hipotese: irá inserir o valor e retornar o novo ponteiro da arvore
//interface explicita: ponteiro da arvore e a palavra a ser excluida
//interface implicita: nenhuma

Arvore * excluir(Arvore * a, char * valor) {
    if (a == NULL) { //vazia
        return NULL;
    } else {
        if (a->esq != NULL) { //exclui sae
            a->esq = excluir(a->esq, valor);
        } else {
            if (a->dir != NULL) { // exclui sad
                a->dir = excluir(a->dir, valor);
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

                            strcpy(valor, temp->info);
                            a->esq = excluir(a->esq, valor);
                        }
                    }
                }
            }
        }
    }
    return a;
}

//Libera a arvore
//Assertiva de entrada: Checa se o ponteiro é NULL
//Assertiva de saida: nenhuma
//Requisito: nenhum
//Hipotese: recebe a raiz da arvore, visita todos os nodos e libera a arvore
//interface explicita: ponteiro da arvore
//interface implicita: nenhuma

Arvore * libera(Arvore *a) {
    if (a == NULL) {
        libera(a->esq);
        libera(a->dir);
        free(a);
    }
    return NULL;
}


//Retorna a altura da árvore
//Assertiva de entrada: Checa se o ponteiro é NULL
//Assertiva de saida: nenhuma
//Requisito: nenhum
//Hipotese: recebe a raiz da arvore, e percorre até o final para descobrir a altura
//interface explicita: ponteiro da arvore
//interface implicita: nenhuma
int altura(Arvore * a) {
    if (a == NULL) {
        return -1;

    } else {
        return 1 + max(altura(a->esq), altura(a->dir));
    }
}

//Imprimi a arvore em preOrdem
//Assertiva de entrada: Checa se o ponteiro é NULL
//Assertiva de saida: nenhuma
//Requisito: nenhum
//Hipotese: recebe a raiz da arvore e imprime raiz, esquerda, direita
//interface explicita: ponteiro da arvore
//interface implicita: nenhuma
void preOrdem(Arvore* a) {
    if(a==NULL){
        printf("<>");
    }
    if (a != NULL) {
        printf("<%s", a->info);
        preOrdem(a->esq);

        preOrdem(a->dir);
        printf(">");
    }
}
//Imprimi a arvore em inOrdem
//Assertiva de entrada: Checa se o ponteiro é NULL
//Assertiva de saida: nenhuma
//Requisito: nenhum
//Hipotese: recebe a raiz da arvore e imprime resquerda, raiz, direita
//interface explicita: ponteiro da arvore
//interface implicita: nenhuma
void inOrdem(Arvore* a) {
    if(a==NULL){
        printf("<>");
    }
    if (a != NULL) {

        inOrdem(a->esq);
        printf("<%s", a->info);
        inOrdem(a->dir);
        printf(">");
    }
}
//Imprimi a arvore em posOrdem
//Assertiva de entrada: Checa se o ponteiro é NULL
//Assertiva de saida: nenhuma
//Requisito: nenhum
//Hipotese: recebe a raiz da arvore e imprime esquerda, direita, raiz
//interface explicita: ponteiro da arvore
//interface implicita: nenhuma
void posOrdem(Arvore* a) {
    if(a==NULL){
        printf("<>");
    }
    if (a != NULL) {

        posOrdem(a->esq);
        printf(">");
        posOrdem(a->dir);

        printf("<%s", a->info);
    }
}
