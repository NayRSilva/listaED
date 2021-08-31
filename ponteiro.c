#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int soma(int array[], int tamanho){
    int *p; 
    int soma, i;
    soma =0;

    for(i=0; i<tamanho; i++){
        p = &array[i];
        soma = soma + *p;
    }

    return soma;
}

int main(){
    int n,i, resultado;
    int *vetor;
    printf("digite o tamanho do vetor");
    scanf("%d", &n);
    vetor = malloc(n*sizeof(int));

    printf("digite os numeros do vetor");
    for(i=0; i<n; i++){
        scanf("%d", &vetor[i]);
    };

    resultado = soma(vetor, n);

    printf("res %d", resultado);


}