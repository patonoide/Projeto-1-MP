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

    Arvore * tree;
    Arvore * raiz = NULL;
    tree = treeVazia();
    char palavra [255];

    int estado = 1;
    if ((principal = fopen("entrada.txt", "rt")) == NULL) {
        printf("Deu erro");
    }
    do {
        if ((fscanf(principal, "%c", palavra)) == EOF) {
            estado = 1;
        } else if (raiz == NULL) {
            raiz = insere(raiz, palavra);
        } else {
            tree = insere(raiz, palavra);
        }




    } while (estado != 1);
    fclose(principal);
    return raiz;

}

Arvore * salvarArvore(Arvore * tree) {
    FILE * principal;
    if (tree->dir == NULL && tree->esq) {

        if ((principal = fopen("entrada.txt", "a")) == NULL) {
            printf("Deu erro");
        }
        fclose(principal);
    } else {
        if (tree->dir != NULL) {

            tree->esq = salvarArvore(tree->esq);
        } else {

            tree->dir = salvarArvore(tree->dir);
        }
    }

    return tree;
}

void menuJogo() {
    Arvore * tree;
    int opcao;
    tree = iniciarArvore();
    printf("Portinho e MiniMarina Productions EC e nois 2017.\n");
    do {
        printf("\nMenu:\n 1-Começar jogo \n 2-Adicionar operacao\n 3-Realizar Calculo\n 4-Imprimir Pilhas\n 5-Sair\nOpcao: ");
        scanf("%i", &opcao);
        switch (opcao) {
            case 1:
            {


                break;
            }
            case 2:
            {

                break;
            }
            case 3:
            {

                break;
            }
            case 4:
            {

                break;
            }
            case 5:
            {
                printf("Saindo...\n");
                break;
            }
            default:
            {
                printf("Opcao invalida!!!");
                break;
            }
        }
    } while (opcao != 5);


}

void iniciarJogo(Arvore * tree) {

    printf("Digite y para sim e n para nao");
    int resposta = "";
    char novapr [255];
    int termina = 0;
    if (tree == NULL) {
        printf("Jogo Vaziou");
        return ;

    } else {


        do {
            printf("%s", tree->info);
            fgetc(stdin, resposta);
            if (resposta == "y") {


                if (tree->esq == NULL) {

                } else {
                    tree = tree->esq;
                }


            }
            if (resposta == "n") {
                if (tree->dir == NULL) {
                    printf("se a resposta for %s digite y se nao for digite n", tree->info);
                    resposta = fgetc(stdin);
                    if (resposta == "y") {
                        printf("Sucesso eu acertei");
                        return ;
                    }
                    if (resposta == n) {
                        printf("Digite uma pergunta que diferencie o que tu estava pensando com a resposta e o que tu estava pensando respectivamente: ");

                    }
                } else {
                    tree = tree->dir;
                }


            }




        } while (termina != 1);



    }



}