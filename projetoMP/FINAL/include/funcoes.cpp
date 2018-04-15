/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templatesf
 * and open the template in the editor.
 */

#include "cabecalho.h"          
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//inicia a arvore :/ fico feio eu sei....

Arvore * iniciarArvore() {
    FILE * principal;
    int cont = 0;
    char palavra[100] [255];

    Arvore * A1 = (Arvore *) malloc(sizeof (Arvore));
    Arvore * A2 = (Arvore *) malloc(sizeof (Arvore));
    Arvore * A3 = (Arvore *) malloc(sizeof (Arvore));
    Arvore * A4 = (Arvore *) malloc(sizeof (Arvore));
    Arvore * A5 = (Arvore *) malloc(sizeof (Arvore));
    Arvore * A6 = (Arvore *) malloc(sizeof (Arvore));
    Arvore * A7 = (Arvore *) malloc(sizeof (Arvore));
    Arvore * A8 = (Arvore *) malloc(sizeof (Arvore));
    Arvore * A9 = (Arvore *) malloc(sizeof (Arvore));
    Arvore * A10 = (Arvore *) malloc(sizeof (Arvore));
    Arvore * A11 = (Arvore *) malloc(sizeof (Arvore));
    Arvore * A12 = (Arvore *) malloc(sizeof (Arvore));
    Arvore * A13 = (Arvore *) malloc(sizeof (Arvore));
    Arvore * A14 = (Arvore *) malloc(sizeof (Arvore));
    Arvore * A15 = (Arvore *) malloc(sizeof (Arvore));
    Arvore * A16 = (Arvore *) malloc(sizeof (Arvore));
    Arvore * A17 = (Arvore *) malloc(sizeof (Arvore));
    Arvore * A18 = (Arvore *) malloc(sizeof (Arvore));
    Arvore * A19 = (Arvore *) malloc(sizeof (Arvore));
    Arvore * A20 = (Arvore *) malloc(sizeof (Arvore));
    Arvore * A21 = (Arvore *) malloc(sizeof (Arvore));
    Arvore * A22 = (Arvore *) malloc(sizeof (Arvore));
    Arvore * A23 = (Arvore *) malloc(sizeof (Arvore));
    Arvore * A24 = (Arvore *) malloc(sizeof (Arvore));
    Arvore * A25 = (Arvore *) malloc(sizeof (Arvore));
    Arvore * A26 = (Arvore *) malloc(sizeof (Arvore));
    Arvore * A27 = (Arvore *) malloc(sizeof (Arvore));
    Arvore * A28 = (Arvore *) malloc(sizeof (Arvore));
    Arvore * A29 = (Arvore *) malloc(sizeof (Arvore));
    Arvore * A30 = (Arvore *) malloc(sizeof (Arvore));
    Arvore * A31 = (Arvore *) malloc(sizeof (Arvore));
    Arvore * A32 = (Arvore *) malloc(sizeof (Arvore));
    Arvore * A33 = (Arvore *) malloc(sizeof (Arvore));
    if ((principal = fopen("entrada.txt", "rt")) == NULL) {
        printf("Deu erro");
    }

    while (fgets(palavra[cont], 255, principal) != NULL) {
        cont++;

    }
    fclose(principal);
    strncpy(A1->info, palavra[0], 255);
    strncpy(A2->info, palavra[1], 255);
    strncpy(A3->info, palavra[2], 255);
    strncpy(A4->info, palavra[3], 255);
    strncpy(A5->info, palavra[4], 255);
    strncpy(A6->info, palavra[5], 255);
    strncpy(A7->info, palavra[6], 255);
    strncpy(A8->info, palavra[7], 255);
    strncpy(A9->info, palavra[8], 255);
    strncpy(A10->info, palavra[9], 255);
    strncpy(A11->info, palavra[10], 255);
    strncpy(A12->info, palavra[11], 255);
    strncpy(A13->info, palavra[12], 255);
    strncpy(A14->info, palavra[13], 255);
    strncpy(A15->info, palavra[14], 255);
    strncpy(A16->info, palavra[15], 255);
    strncpy(A17->info, palavra[16], 255);
    strncpy(A18->info, palavra[17], 255);
    strncpy(A19->info, palavra[18], 255);
    strncpy(A20->info, palavra[19], 255);
    strncpy(A21->info, palavra[20], 255);
    strncpy(A22->info, palavra[21], 255);
    strncpy(A23->info, palavra[22], 255);
    strncpy(A24->info, palavra[23], 255);
    strncpy(A25->info, palavra[24], 255);
    strncpy(A26->info, palavra[25], 255);
    strncpy(A27->info, palavra[26], 255);
    strncpy(A28->info, palavra[27], 255);
    strncpy(A29->info, palavra[28], 255);
    strncpy(A30->info, palavra[29], 255);
    strncpy(A31->info, palavra[30], 255);
    strncpy(A32->info, palavra[29], 255);
    strncpy(A33->info, palavra[30], 255);

    A1->esq = A2;
    A1->dir = A3;
    A2->esq = A4;
    A2->dir = A5;
    A3->esq = A6;
    A3->dir = A7;
    A4->esq = A8;
    A4->dir = A9;
    A5->esq = A10;
    A6->esq = A12;
    A5->dir = A11;
    A6->dir = A13;
    A7->dir = A15;
    A7->esq = A14;
    A8->esq = A16;
    A8->dir = A17;
    A9->esq = A18;
    A9->dir = A19;
    A10->esq = A20;
    A10->dir = A21;
    A11->esq = A22;
    A11->dir = A23;
    A12->esq = A24;
    A12->dir = A25;
    A13->esq = A26;
    A13->dir = A27;
    A14->esq = A28;
    A14->dir = A29;
    A15->esq = A30;
    A15->dir = A31;
    A16->esq = A32;
    A16->dir = A33;


    A17->esq = NULL;
    A17->dir = NULL;
    A18->esq = NULL;
    A18->dir = NULL;
    A19->esq = NULL;
    A19->dir = NULL;
    A20->esq = NULL;
    A20->esq = NULL;
    A21->dir = NULL;
    A21->dir = NULL;
    A22->dir = NULL;
    A22->esq = NULL;
    A23->esq = NULL;
    A23->dir = NULL;
    A24->esq = NULL;
    A24->dir = NULL;
    A25->esq = NULL;
    A25->dir = NULL;
    A26->esq = NULL;
    A26->dir = NULL;
    A27->esq = NULL;
    A27->dir = NULL;
    A28->esq = NULL;
    A28->dir = NULL;
    A29->esq = NULL;
    A29->dir = NULL;
    A30->esq = NULL;
    A30->dir = NULL;
    A31->esq = NULL;
    A31->dir = NULL;
    A32->esq = NULL;
    A32->dir = NULL;
    A33->esq = NULL;
    A33->dir = NULL;







    return A1;

}


//salvar salva, só não salva certo.....

Arvore * salvarArvore(Arvore * tree) {
    FILE * principal;
    char palavra [255];

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