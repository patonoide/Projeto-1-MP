/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "cabecalho.h"          
#include <stdio.h>
#include <stdlib.h>





Arvore * iniciarArvore() {
    FILE * principal;
    int tamanho; //tamanho da arvore
    Arvore * tree;
    Arvore * raiz = NULL;
    tree = treeVazia();
    char   palavra [255];
    
    int estado = 1;
    if ((principal = fopen("entrada.txt", "rt")) == NULL) {
        printf("Deu erro");
    }
    do {
        if ((fscanf(principal, "%c", palavra)) == EOF) {
            estado = 1;
        } else if ( raiz == NULL) {
            raiz = insere(raiz, palavra);
        } else {

        }




    } while (estado != 1);



}


