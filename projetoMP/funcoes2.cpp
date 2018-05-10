/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templatesf
 * and open the template in the editor.
 */

#include "cabecalho.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//inicia a arvore

Arvore * iniciarArvore() {
    FILE * principal;
    int cont = 0, numero = 0, dir = 0, esq = 0;
    char palavra[100] [255];

    Arvore * a = (Arvore *) malloc(33 * sizeof (Arvore));

    if ((principal = fopen("entrada.txt", "rt")) == NULL) {
        printf("Deu erro");
    }

    //mexi no arquivo de entrada
    //coloquei o id da pergunta antes, tipo
    //12;pergunta12
    while (fscanf(principal, "%i;", &numero) != EOF) {
        fgets(palavra[numero - 1], 255, principal);
    }

    fclose(principal);

    for (cont = 0; cont < 33; cont++) {
        strncpy(a->info, palavra[cont], 255);
    }

    /*

     ainda não insere de verdade na arvore
    for (cont = 0; cont < 33; cont++) {
        a = insere(a, palavra[cont]);
    }


    for (cont = 0; cont < 33; cont + 3) {
     *
     *essa seria a formula pra achar a posicao das subarvores no vetor
     * não sei como a gente pode fazer
     *mas pode ser uti

        dir = (cont * 2) + 2;
        esq = (cont * 2) + 1

     isso tambem não funciona ainda kkkk
        strncpy(a->dir, palavra[dir], 255);
        strncpy(a->esq, palavra[esq], 255);
    }
    */

    return a;

}


//salvar salva, só não salva certo.....

Arvore * salvarArvore(Arvore * tree) {
    FILE * principal;


    if ((principal = fopen("entrada.txt", "a")) == NULL) {
        printf("Deu erro");
    }


    if (tree == NULL) {

    }
    if (tree != NULL) {
        fprintf(principal, tree->info, 255);
        salvarArvore(tree->esq);

        salvarArvore(tree->dir);

    }

    fclose(principal);
    return tree;
}


//o menu do jogo

void menuJogo() {
    Arvore * tree;
    int opcao;
    FILE * principal;
    tree = iniciarArvore();
    printf("Portinho e MiniMarina Productions EC e nois 2018.\n");
    do {
        fflush(stdout);
        printf("\nMenu:\n 1-Começar jogo \n 2-Salvar Jogo em arquivo\n 3-Sair\n Opcao: ");
        fflush(stdout);
        setbuf(stdin, NULL);
        scanf("%i", &opcao);
        setbuf(stdin, NULL);
        switch (opcao) {
            case 1:
            {
                tree = iniciarJogo(tree);

                break;
            }
            case 2:
            {
                if ((principal = fopen("entrada.txt", "w")) == NULL) {
                    printf("Deu erro");
                }
                fclose(principal);
                tree = salvarArvore(tree);
                break;
            }
            case 3:
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
    } while (opcao != 3);


}



// o jogo em execucao

Arvore * iniciarJogo(Arvore * tree) {
    fflush(stdout);
    printf("Digite y para sim e n para nao: \n");
    fflush(stdout);
    char resposta;
    char perguntaatual[255];
    char novaper [255];
    char novarenao [255];
    char novaresim [255];

    Arvore * raizfinal = tree;
    Arvore * topo = tree;
    int termina = 0;
    if (tree == NULL) {
        printf("Jogo Vaziou");


    } else {


        do {
            printf("%s", tree->info);
            fflush(stdout);
            setbuf(stdin, NULL);
            scanf(" %c", &resposta);
            setbuf(stdin, NULL);
            if (resposta == 'y') {


                if (tree->esq == NULL && tree->dir == NULL) {
                    strncpy(perguntaatual, tree->info, 255);

                    printf("se a resposta for %s digite y se nao for digite n: \n", tree->info);
                    fflush(stdout);
                    setbuf(stdin, NULL);
                    scanf(" %c", &resposta);
                    setbuf(stdin, NULL);
                    if (resposta == 'y' && tree->dir == NULL && tree->esq == NULL) {
                        printf("Sucesso eu acertei");
                        fflush(stdout);
                        return raizfinal;

                    }

                }
                tree = tree->esq;
            }



            if (resposta == 'n') {
                if (tree->dir == NULL && tree->esq == NULL) {
                    strcpy(perguntaatual, tree->info);
                    printf("se a resposta for %s digite y se nao for digite n: \n", tree->info);
                    setbuf(stdin, NULL);
                    scanf(" %c", &resposta);
                    setbuf(stdin, NULL);
                    if (resposta == 'y' && tree->dir == NULL && tree->esq == NULL) {
                        printf("Sucesso eu acertei");
                        return raizfinal;

                    } else if (resposta == 'n' && tree->dir == NULL && tree->esq == NULL) {
                        printf("Digite uma pergunta que diferencie o que tu estava pensando e duas respostas uma para caso sim e outra para caso nao respectivamente: ");
                        setbuf(stdin, NULL);
                        scanf("%s", novaper);
                        setbuf(stdin, NULL);

                        scanf(" %s", novaresim);
                        setbuf(stdin, NULL);

                        scanf(" %s", novarenao);


                        strcpy(tree->info, novaper);


                        Arvore * a = (Arvore *) malloc(sizeof (Arvore));

                        tree->esq = a;
                        strcpy(a->info, novaresim);

                        a->esq = NULL;
                        a->dir = NULL;


                        Arvore * b = (Arvore *) malloc(sizeof (Arvore));


                        tree->dir = b;
                        strcpy(b->info, novarenao);

                        b->esq = NULL;
                        b->dir = NULL;
                        return raizfinal;

                    }
                }
                if (resposta = 'n' && tree->dir == NULL && tree->esq == NULL) {
                    printf("\n A resposta não esta no banco");

                    printf("Digite uma pergunta que diferencie o que tu estava pensando e duas respostas uma para caso sim e outra para caso nao respectivamente: ");

                    scanf("%s", novaper);
                    fflush(stdout);
                    scanf(" %s", novaresim);
                    fflush(stdout);
                    scanf(" %s", novarenao);
                } else {
                    tree = tree->dir;
                }

            }







        } while (termina != 1);



    }
    return topo;


}
