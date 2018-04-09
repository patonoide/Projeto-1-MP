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

#include <stdlib.h>
#include <iostream>
#define CATCH_CONFIG_MAIN

#include "cabecalho.h"
/*
 * Simple C++ Test Suite
 */

TEST_CASE( "Factorials are computed", "[factorial]" ) {
    REQUIRE( iniciarArvore() == NULL );
   
}