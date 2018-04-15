/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   arvore.h
 * Author: gabriel
 *
 * Created on April 11, 2018, 12:42 PM
 */
#include "../single_include/catch.hpp"


Arvore * treeVazia();
Arvore * insere(Arvore * a, char * valor);
Arvore * excluir(Arvore * a, char * valor);
void preOrdem(Arvore* a);
void inOrdem(Arvore* a);
void posOrdem(Arvore* a);
Arvore * libera(Arvore *a);
int altura(Arvore * a);
int max(int a, int b);
Arvore* busca(Arvore* a, char * valor);
void menuJogo(); 