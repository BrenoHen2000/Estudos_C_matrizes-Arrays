#include <stdio.h>
int main(){
	int x;
	int soma=0; 
	int quantidade=0;
	int media=0;

	while (scanf("%d",&x)&& x!= 0){
		quantidade++;
		soma+=x;
		media = soma/quantidade;	
	}

	printf("%d %d %d", quantidade, soma, media);
	return 0;
}
