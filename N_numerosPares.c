#include <stdio.h>
int main(){
	int x;
	scanf("%d", &x);
	int soma = 0;

	
	int i = 0;
	while(soma!=x){
	i++;
		if(i%2==0){
			printf("%d",i);
			soma++;
		} else {
			continue;		
		}	
	}
	
	return 0;
}
