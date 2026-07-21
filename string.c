#include <stdio.h>
#include <string.h> // especifica para trabalhar com strings

int main(){
//declaraca de strings como CHAR; 10 slots de memoria e mais 1 de \0 que termina
	char str1[20];

//%s -> strings / %c -> 1 caracter especifcio e nao usamos & para strings apenas para caracter
//scanf reconhece que espaco acaba a leitura scanf("%s",str1);
//scanset -> colocar entre os  [] oq queremos que o scanner leia 
//scanf("%[^\n]",str1); -> ler tudo oq esta dentro do scanf

//funcao gets -> insegura pois nao controla o tamanho do que ele esta lendo -> gets(str1);
//funcao fgets foi feita para trabalhar com arquivos e nao com console
//fgets(nome do arquivo/tamanho do arquivo/biblioteca padrao de entrada de arquivos)
	fgets(str1,10,stdin);
					 
	printf("Hello %s\n",str1);	
	return 0;
}
