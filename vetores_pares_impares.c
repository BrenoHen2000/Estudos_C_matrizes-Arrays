#include <stdio.h>

#define tam 10

int main(){
	int vetor[tam];
	int par;
	int impar;
	int i=0;

	for (i=0;i<tam; i++){
		scanf("%d", &vetor[i]);

		 vetor[i]%2==0 ? par++ : impar++;
	}

	printf("%d %d", par, impar);
	return 0 ;
}
