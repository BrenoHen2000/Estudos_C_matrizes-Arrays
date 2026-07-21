#include <stdio.h>
#include <string.h>
//funcao sobre caracteres
#include <ctype.h>

int main(){
	//-> 1000 + /0 e enter
	char texto[1002];
	int n;
	//caracter auxiliar p/ trocas
	char aux;
	
	scanf("%d", &n);
	//limpar o buffer do teclado
	getchar();

	//processa os casos de teste
	while (n){
		n--;
		//stdin -> buffer do teclado/de onde vc tira a variavel
		fgets(texto,1001,stdin);
		//strlen -> tamanho de um texto
		texto[strlen(texto)-1]='\0'; // tirou o '/n' do fim da linha

		//criptografia passo1 -> deslocar 3 espaços na tabela ascii
		int len = strlen(texto);
		for(int j=0;j<len;j++){
		//isalpha -> verifica se um caractere pertence ao alfabeto, maiusuclo ou minusculo
			if(isalpha(texto[j])){
				texto[j]+=3;
			}
		}

		//criptografia passo2-> inverter os caracteres
		for(int j = 0, k = (len-1);j<k;j++,k--){
			aux = texto[j];
			texto[j] = texto[k];
			texto[k]=aux;
		}

		//criptografia passo3-> metade dos caracteres passa 1 para a esquerda
		//calculo metade truncada
		int k=len/2;
		for(int j = len-1;j>=k;j--){
			texto[j]-=1;
		}	
		printf("%s\n",texto);
	}
	return 0;
}
