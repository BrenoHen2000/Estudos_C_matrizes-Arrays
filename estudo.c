#include <stdio.h>

int main(){
	int idade[5];
	int max_idade = 0;
	int min_idade = 100;
	int iMax;
	int iMin;
	
	for (int i = 0; i<5;i++){
		scanf("%d", &idade[i]);
	}

	for(int i = 0; i<5;i++){
		printf(" %d \n", idade[i]);

		if(idade[i]>max_idade){
			max_idade = idade[i];
			iMax = i;
		}
		
		if(idade[i]<min_idade){	
			min_idade = idade[i];
			iMin = i;
		}
	}

		printf("idade: %d; indice: %d ", max_idade,iMax );
		printf("idade: %d; indice: %d ", min_idade, iMin);

	return 0;
}
