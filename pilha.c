#include "pilha.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

t_stack* create_stack(int size){
    t_stack* stack = (t_stack*)malloc(sizeof(t_stack));
    stack->size = size;
    stack->elementos = malloc(size * (sizeof(int)));
    stack->topo = -1;

    return stack;
}

bool full_stack(t_stack* stack){
    if((stack->topo)== (stack->size - 1)){
        return true;
    }
    else
    return false;
}

bool empty_stack(t_stack* stack){
    return stack->topo==-1;
}

int top_stack(t_stack* stack){
    int valor;

    valor= stack->elementos[stack->topo];

    return valor;
}

void push(t_stack* stack, int element){
    if(!full_stack(stack)){
        stack->topo ++;
        stack->elementos[stack->topo] = element;
    }
    else
    printf("is full");

}

int pop(t_stack* stack){
    int valor;
    while(!empty_stack(stack)){
    valor = stack->elementos[stack->topo];
    stack->topo --;
    printf("%d", valor);
    }
  
}

void free_stack (t_stack* stack){
    free(stack->elementos);
    free(stack);
}