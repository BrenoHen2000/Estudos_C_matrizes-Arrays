#include <stdio.h>
#include <string.h>

typedef struct{
	int dados[1000];
	int len;
} vector;

typedef struct{
	int dados[1000][1000];
	int lin,col;
} matriz;

int main(){
	vector A, B;
	
	for(int i=0; i<10;i++){
		A.dados[i]=i;
	}
	B=A;

	for(int i=0; i<10;i++){
		printf("A[%d] = %d - ",i,A.dados[i]);
	}
	
	printf("\n");
	printf("\n");
	
	for(int i=0; i<10;i++){
		printf("B[%d] = %d - ",i,B.dados[i]);
	}
	printf("\n");
	
	return 0;
}
