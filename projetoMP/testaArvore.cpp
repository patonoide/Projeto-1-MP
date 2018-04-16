/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   testaArvore.cpp
 * Author: gabriel
 *
 * Created on April 11, 2018, 12:38 PM
 */

#include <stdlib.h>
#include <iostream>
#include "arvore.h"
#define CATCH_CONFIG_MAIN
/*
 * Simple C++ Test Suite
 */

TEST_CASE("Testa a arvore", "") {
    char * palavra[255]="teste";
    REQUIRE(Arvore * a = treeVazia() ==NULL);
    REQUIRE(insere(a,palavra) !=NULL);
    REQUIRE(excluir(a,palavra) != NULL);
    REQUIRE(preOrdem(a));
    REQUIRE(inOrdem(a));
    REQUIRE(posOrdem(a));
    REQUIRE(libera(a)==NULL);

}
