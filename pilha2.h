#ifndef _PILHA2H_
#define _PILHA2H_
#include <stdbool.h>

typedef struct celula{
        char c;
        struct celula *abaixo;
        
}t_celula;

t_celula *topo;
t_celula *size;


bool create_stack();
void push(char caracter);
void pop();
void consulta();
#endif