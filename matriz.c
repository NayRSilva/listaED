#include <stdio.h>
int main () {
    int m, n,l, i, j;
      int repetido, k;
    float elemento;
    float A[20][20];

    printf("numero de linhas e colunas\n");
    scanf("%d %d", &m, &n);

printf("digite a matriz");
for(i=0; i<m; i++){
    for(j=0; j<n; j++){
        scanf("%f", &A[i][j]);
    }
}
            
      repetido =0;
for(i=0; i<m; i++){
    for(j=0; j<n; j++){
   elemento = A[i][j];
        for(k=i; k<m; k++){
                for(l=(j); l<(n-1); l++){
                    if(A[i][j] == A[k][l]){
                        repetido++;
                     
                }
            }
}
    }
}
printf("repetido %d", repetido);

    
return 0;
}