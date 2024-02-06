#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    if(2<=n && n<=100 && 1<=m && m<=100){
        int corrida[n][m], i, j, somaMax=1000, resultado=0;
        for(i=0; i<n; i++){
            int soma=0;
            for(j=0; j<m; j++){
                scanf("%d", &corrida[i][j]);
                soma+=corrida[i][j];
                if(soma<somaMax){
                    somaMax=soma; 
                    resultado=i+1;
                }
            }
        }
        printf("%d", resultado);
    }
    
	return 0;
}