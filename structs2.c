#include<stdio.h>

typedef struct{ //estrutura anonima
	float real;
	float imaginario;
} complexo; //nome do tipo

int main (){
	complexo a,b;
	complexo c;	
	
	int cases=0;
	scanf("%d",&cases);
	getchar();
	while(cases--){
		char op;
		char c1,c2;
		scanf("%f %f%c %c %f %f%c",&a.real, &a.imaginario, &c1, &op, &b.real, &b.imaginario, &c2);	

		switch(op){
			case '+':
			c.real = a.real + b.real; 
			c.imaginario = a.imaginario + b.imaginario;
			
			break;
			case '-':
			c.real = a.real - b.real; 
			c.imaginario = a.imaginario - b.imaginario;
		
			break;
			case '*':
			c.real = (a.real*b.real)+((a.imaginario*b.imaginario)*-1);
			c.imaginario = (a.real*b.imaginario) + (b.real*a.imaginario);
		
			break;
			case '/':
			c.real = (a.real*b.real)+(a.imaginario*(-1*b.imaginario)*-1);
			c.imaginario = (a.real*b.real) + (a.real*(-1*b.imaginario)) + (a.imaginario*b.real) + ((a.imaginario*(-1*b.imaginario))*-1);
			break;
		}	
		
		printf("%.2f %+.2fi\n", c.real, c.imaginario);
	}
	return 0;
}
