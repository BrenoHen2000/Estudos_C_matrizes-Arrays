#include<stdio.h>

typedef struct{
	char nome[10];
	int nota;
} Aluno;

Aluno a1[10];

int main (){
	int n;
	scanf("%d",&n);
	int i=0, soma=0;

	while(n--){
		//fgets(a1[i].nome, 51, stdin);
		scanf("%s %d",a1[i].nome,&a1[i].nota);
		soma+=a1[i].nota;
		i++;
	}

	int media = soma/i;
	printf("media = %d\n",media );
	printf("alunos acima da media\n");
	for(int j=0;j<i;j++){
		if(a1[j].nota>media){
			printf("%s %d\n", a1[j].nome, a1[j].nota);			
		}
	}
	return 0;
}
