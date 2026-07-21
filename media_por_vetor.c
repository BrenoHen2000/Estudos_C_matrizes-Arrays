#include <stdio.h>
int main(){
	int vet[4];
	int soma = 0;

	for (int i=0;i<5;i++){
		scanf("%d",&vet[i]);
		soma += vet[i];
	}

	printf("%d",soma/4);
	return 0;
}
