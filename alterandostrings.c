#include <stdio.h>
#include <string.h>

int main(){
	char x;
	char numero[101];


	while(scanf(" %c %s", &x, numero)==2){
		
	if((x=='0')&&strcmp(numero,"0")==0){
		break;
		}

	int len = strlen(numero);
	int impresso=0; 

	for(int i=0;i<len;i++){
		if(numero[i]==x){
			continue;
			}
		if(numero[i]=='0' && !impresso){
			continue;
			}
		printf("%c",numero[i]);
		impresso=1;
		
		}

		if(!impresso){
			printf("0");
		}
		printf("\n");
	}
	
	
	
	return 0;
}
