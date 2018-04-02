/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "cabecalho.h"          
#include <stdio.h>
#include <stdlib.h>
#include "../single_include/catch.hpp"


//a principio ela vai ler o arquivo txt, montar a arvore e retornar o ponteiro dela

Arvore * iniciarArvore() {
    FILE * principal;
    int tamanho; //tamanho da arvore
    Arvore * tree;
    tree = treeVazia();
    char palavra [255];
    int estado = 1;
    if ((principal = fopen("entrada.txt", "rt")) == NULL) {
        printf("Deu erro");
    }
    do {
        if (fscanf(principal,)) {
            estado = 1;
        }
        



    } while (estado != 1);



}


