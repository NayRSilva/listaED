#include "pilha.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(){
    t_stack* stack;
    int valor;

    stack = create_stack(3);

    push(stack, 1);
        push(stack, 2);
            push(stack, 3);
                push(stack, 4);
                pop(stack);
             

    free_stack(stack);
    return 0;

}