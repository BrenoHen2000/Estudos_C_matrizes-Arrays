#include <stdio.h>
int main(){
	// arrays -> chamadas de arranjos de variáveis do mesmo tipo
	// matrizes -> Arrays Bidimensionais
	int array [3] = {1,2.3};

    for (int i = 0; i<3; ++i){
    	printf("%d",array[i]);    
    }
	
	int matriz[3][3] = { 
	{1, 2, 3}, 
	{4, 5, 6}, 
	{7, 8, 9} 
	};

	for (int i=0; i<3; i++){
			printf("\n");
		for(int j=0;j<3;j++){
			printf("%3d", matriz[i][j]);
		}
	}
	
	
	return 0;
}

