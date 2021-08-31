#include "pilha2.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(){
int size1, size2, i, j;

printf("escreva o tamanhos da string 1 e 2\n");
scanf("%d", &size1);
scanf("%d", &size2);


char M[size1];

char N[size2];
printf("escreva string 1 \n");
scanf(" %s", M);

printf("escreva string 2    \n");
scanf(" %s", N);

create_stack();
j=0;

while(j<size2){
for(i=0; i<size1; i++){

   /* printf("fase1\n");*/
           /* printf("fase2\n");*/
            if(M[i]=='P'){
                
               /* printf("if1");*/
                printf("%c", N[j]);
             j++;               
                }
            

    if(M[i]=='S'){
            printf("pop");
    
    }
}

}
consulta();
return 0;
}