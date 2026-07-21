#include <stdio.h>
#define tam 5

int main(){
	int vetor[tam]={1,2,3,1,2};
	int vetor2[tam];
	int tamanho_novo=0;

	for(int i=0; i<tam; i++){
		int repetidos = 0;

		for(int j=0; j<tamanho_novo; j++){
			if (vetor[i]==vetor2[j]){
				
				repetidos=1;
				break;
			}

	if(repetidos == 0 ){
		vetor2[tamanho_novo]=vetor[i];
		tamanho_novo++;
		}
		}
	}

	for(int i=0; i<tam; i++){
		printf("%d", vetor[i]);
	}
	printf("\n");
	
	for(int i=0; i<tamanho_novo; i++){
		printf("%d", vetor2[i]);
	}
	printf("\n");

	return 0;
}
