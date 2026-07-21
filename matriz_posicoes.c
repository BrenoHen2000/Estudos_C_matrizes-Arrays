#include <stdio.h>
#define TAM 3

int main(){
    int vetor[TAM][TAM];
    int maior;
    int menor;
    int index_maiori;
    int index_menori;
    int index_maiorj;
    int index_menorj;
    int i;
    int j;

    for(i=0; i<TAM; i++){
        for(j=0; j<TAM; j++){
            scanf("%d", &vetor[i][j]);

            // Agora o IF está alinhado corretamente com o scanf
            if(i==0 && j == 0){
                maior = vetor[0][0];
                menor = vetor[0][0];
                index_menori = i;                
                index_menorj = j;
                index_maiori = i;
                index_maiorj = j;
            } else {
                if(vetor[i][j] < menor){
                    menor = vetor[i][j];
                    index_menori = i;                
                    index_menorj = j;    
                }
                if(vetor[i][j] > maior){
                    maior = vetor[i][j];
                    index_maiori = i;
                    index_maiorj = j;
                }
            }
        }
    }

    // Exibição da matriz
    for(i=0; i<TAM; i++){
        for(j=0; j<TAM; j++){
            printf("%3d", vetor[i][j]);
        }
        printf("\n");
    }
    
    // Exibição dos resultados
    printf("menor: %d na linha %d na coluna %d\n", menor, index_menori, index_menorj);
    printf("maior: %d na linha %d na coluna %d\n", maior , index_maiori, index_maiorj);

    return 0;
}
