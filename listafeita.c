#include<stdio.h>
#include<stdlib.h>

typedef struct elemento{
    int numero;
    struct elemento* proximo;
}t_elemento;

 typedef struct {
    t_elemento* primeiro;
    t_elemento* ultimo;
    int quantidade;

}t_lista;

t_elemento* aloca_elemento(int n){
    t_elemento* elemento = (t_elemento*)malloc(sizeof(t_elemento));
    if(elemento!=NULL){
        elemento->numero = n;
       
    }
    return elemento;
}

t_lista* cria_lista(){
    t_lista* lista = (t_lista*) malloc(sizeof(t_lista));
    if(lista!=NULL){
    lista-> primeiro= NULL;
    lista-> ultimo= NULL;
    lista->quantidade = 0;
}
    
    return lista;
}

int inserir(t_lista* lista, int n){
    t_elemento* new;
    new = aloca_elemento(n);
    if(lista->primeiro==NULL){
        lista->primeiro = new;
        lista->ultimo = new;
        new->proximo = NULL;
        lista->quantidade ++;
    return 1;
    }
    else
    lista->ultimo->proximo = new;
    new->proximo = NULL;
    lista->ultimo = new;
    lista->quantidade++;
    return 1;
}

int inserir_final(t_lista* lista, int n, t_elemento* new){
      lista->ultimo->proximo = new;
    new->proximo = NULL;
    lista->ultimo = new;
    return 1;
}
void imprimir (t_lista* lista){
    if(lista!=NULL){
        while(lista->primeiro!=NULL){
            printf("numero %d\n", lista->primeiro->numero);
            lista->primeiro = lista->primeiro->proximo;
        }
    }
}

int inserir_inicio(t_lista* lista, int n, t_elemento* new){
    if(lista!=NULL){
        new->proximo = lista->primeiro;
        lista->primeiro = new;
    return 1;
    }
    return -1;
}

int inserir_meio(t_lista* lista, int n, int posicao, t_elemento* new){
int i;
t_elemento* atual;
t_elemento* aux;
atual = lista->primeiro;
for(i=0; i<(posicao-1); i++) {
atual = atual->proximo;
}
aux = atual->proximo;
atual->proximo = new;
new->proximo = aux;

return 1;
}


int inserir_qualquer(t_lista* lista, int n, int posicao){
    t_elemento* new;
        new = aloca_elemento(n);
        if(posicao==0){
    inserir_inicio(lista, n, new);
    lista->quantidade ++;
     return 1;}
    if((lista->quantidade>=2) && (posicao < lista->quantidade) &&(posicao!=0)){
        inserir_meio(lista, n, posicao, new);
        lista->quantidade ++;
         return 1;
    }
    if((posicao>= lista->quantidade)){
        inserir_final(lista, n, new);
        lista->quantidade ++;
         return 1;
    }
   
        return -1;
}

int remove_primeiro(t_lista* lista){
    t_elemento* aux;
    aux = lista->primeiro;
    lista->primeiro = aux->proximo;
    free(aux);
    printf("sucesso");

    return 1;
}

int remove_fim(t_lista* lista){
        
}
int remove_meio(int pos, t_lista* lista){
    int i;
    t_elemento* atual;
    t_elemento* aux;
    atual = lista->primeiro;
    for (i=0; i<(pos-1) ; i++){
    atual = atual->proximo;
    }
    aux = atual->proximo;
    atual->proximo = aux->proximo;
    free(aux);
    return 1;
}

int remove_elemento(int pos, t_lista* lista){
    
    if(lista!=NULL){
    if(pos==0){
        remove_primeiro(lista);
         }
    if((pos!=0) && (pos<(lista->quantidade)) ){
        remove_meio(pos, lista);
       
    }

    }
    return -1;
}
    int main(){
       t_lista* lista;
       char resposta;
       char resp;
       int num, pos;
        
        lista = cria_lista();

        inserir(lista, 5);
        inserir(lista, 6);
        inserir(lista, 7);        

        printf("gostaria de inserir um na lista?\n");
        scanf(" %c", &resposta);

        if((resposta=='Y')|| (resposta=='y')){
            printf("qual numero deseja inserir?");
            scanf("%d", &num);
            printf("em qual posiçao? (primeira posicao=0)");
            scanf("%d", &pos);
            inserir_qualquer(lista, num, pos);
        };

        printf("remover elemento?");
        scanf(" %c", &resp);


        if((resp=='y') || (resp=='Y')){
            printf("qual a posição do elemento voce quer remover?");
            scanf("%d", &pos);
            remove_elemento(pos, lista);
        }
    imprimir(lista);
}