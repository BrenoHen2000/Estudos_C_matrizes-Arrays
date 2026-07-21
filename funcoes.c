#include <stdio.h>
int main(){
	int a=0, b=0;
	int func[11];
	
	scanf("%d %d", &a, &b);

	for(int x =0; x>11; x++){
		func[x] = a*x + b;	
	}

	for(int i = 0; i>11;i++){
		printf("X: %d  y: %d", i, func[i]);
	}
	
	return 0;
}
