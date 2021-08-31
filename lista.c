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
    lista->quantidade= 0;}
    
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
    lista->quantidade ++;
    return 1;
}

void imprimir (t_lista* lista){
    if(lista!=NULL){
        while(lista->primeiro!=NULL){
            printf("numero %d\n", lista->primeiro->numero);
            lista->primeiro = lista->primeiro->proximo;
        }
    }
    printf("quantidade %d", lista->quantidade);
}

    int main(){
       t_lista* lista;
       char resposta;
       int num;
        
        lista = cria_lista();

        inserir(lista, 5);
        inserir(lista, 6);
        inserir(lista, 7);        

        printf("gostaria de inserir um numero ao final da lista?");
        scanf("%c", &resposta);

        if((resposta=='Y')|| (resposta=='y')){
            printf("qual numero deseja inserir?");
            scanf("%d", &num);
            inserir(lista, num);


        }
    imprimir(lista);
}