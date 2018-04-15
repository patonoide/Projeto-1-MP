/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newsimpletest.cpp
 * Author: gabriel
 *
 * Created on April 4, 2018, 4:30 PM
 */
#include "cabecalho.h"
#include <stdlib.h>
#include <iostream>
#define CATCH_CONFIG_MAIN



/*
 * Simple C++ Test Suite
 */

TEST_CASE("Testa o jogo", "") {
    REQUIRE(iniciarArvore() !=NULL);
    REQUIRE(salvarArvore() !=NULL);
    REQUIRE(iniciarJogo() == 0);
    REQUIRE(menuJogo() == 0);

}
