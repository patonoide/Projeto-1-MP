
#include "../lib/catch.hpp"

struct tree {

    struct tree * pai;
    struct tree*dir;
    struct tree * esq;
    char    info[255];
    int valor;

};
typedef struct tree Arvore;


Arvore * insere(Arvore * a, int valor, char * palavra);
Arvore * iniciarArvore(Arvore * tree);
Arvore * salvarArvore(Arvore * a) ;
Arvore * iniciarJogo(Arvore * a) ;
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
void checaArvore (Arvore * tree);
