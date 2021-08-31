#include "pilha2.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool create_stack(){
    size =0;
    topo = NULL;

    return true;
    }

void push(char caracter){
t_celula* celula = (t_celula*)malloc(sizeof(t_celula));

if(celula==NULL){
    printf("sem memoria");
}
else
celula->c = caracter;
celula->abaixo = topo;
topo = celula;
size++;

}

void pop(){
char valor;
if(topo==NULL){
    printf("nao retorna");
}
else
valor = topo->c;
topo  = topo->abaixo;
}

void consulta(){
    t_celula* aux;
    aux = topo;
    while (aux!=NULL){
        printf("%c", aux->c);
        aux = aux->abaixo;
    }
}

   

