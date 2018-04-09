
#include "../single_include/catch.hpp"

struct arv {
    struct arv*dir;
    struct arv * esq;
    char * info;
};
typedef struct arv Arvore;



int salvarArvore();
Arvore * iniciarArvore();
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