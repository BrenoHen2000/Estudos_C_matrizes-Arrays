#include<stdio.h>

typedef struct{ //estrutura anonima
	int n;
	int d;
} racional; //nome do tipo

int main (){
	racional a, b;
	racional c;	
	char op;
	
	int n=0;
	scanf("%d",&n);
	for(int i = 0; i<n;i++){
		scanf("%d / %d %c %d / %d",&a.n,&a.d,&op,&b.n,&b.d);	

		switch(op){
			case '+':
			c.n = (a.n*b.d) + (b.n*a.d); 
			c.d = a.d*b.d;
			break;

			case '-':
			c.n = (a.n*b.d) - (b.n*a.d); 
			c.d = a.d*b.d;
			break;

			case '*':
			c.n = a.n*b.n;
			c.d = a.d*b.d;
			break;

			case '/':
			if(b.n==0){
				printf("Divisao por zero\n");
			}
			racional aux;
			aux.n = b.d;
			aux.d = b.n;
			c.n = a.n*aux.n;
			c.d = a.d*aux.d;
		}

		int M = c.n;
		int N = c.d;
		int R;

		while (N){
			R = M%N;
			M=N;
			N=R;
		}

		racional d;
		d.n = c.n/M;
		d.d = c.d/M;	

		if(d.d<0){
			d.n = -1*d.n;
			d.d = -1*d.d; 
		}

		printf("%d/%d = %d/%d\n", c.n, c.d, d.n, d.d);
		
	}
	return 0;
}

