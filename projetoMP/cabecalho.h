struct arv {
    struct arv*dir;
    struct arv * esq;
    int info;
};
typedef struct arv Arvore;


Arvore * treeVazia();
Arvore * insere(Arvore * a, int valor);
Arvore * excluir(Arvore * a, int valor);
void preOrdem(Arvore* a);
void inOrdem(Arvore* a);
void posOrdem(Arvore* a);
Arvore * libera(Arvore *a);
int altura(Arvore * a);
int max(int a, int b);
Arvore* busca(Arvore* a, int valor);