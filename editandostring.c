#include <stdio.h>
int main(){
	int vetor[10];
	int y;
	int len=sizeof(vetor)/sizeof(vetor[0]);
	
	for(int i=0;i<len;i++){
		scanf("%d",&y);
		if(y<=0){
			vetor[i]=1;
		} else {
		vetor[i]=y;
		}
	}
	
	for(int i=0;i<len;i++){
		printf("X[%d] = %d\n",i,vetor[i]);
	}
	return 0;
}
