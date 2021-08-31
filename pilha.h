#ifndef _PILHAH_
#define _PILHAH_
#include <stdbool.h>

typedef struct {
    int topo;
    int size;
    char *elementos;
}t_stack;


t_stack* create_stack(int size);
bool full_stack(t_stack* stack);
bool empty_stack(t_stack* stack);
int top_stack(t_stack* stack);
void push(t_stack* stack, int element);
int pop(t_stack* stack);
void free_stack (t_stack* stack);

#endif