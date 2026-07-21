
#include <stdio.h>
typedef union {
	int i;
	char c;
} cnvt;
int main() { 
    cnvt cr;
    cr.c='a';
    printf("%c ", cr.i);
    printf("%d ", cr.c);
    return 0;
}
*/
#include <stdio.h>
typedef union
{
	char car;
	int val;
} Letra;

int main()
{
	for(int i = 0; i < 256; i++) {
	    Letra x;
	    // printf("Digite umvalor inteiro ");
	    //scanf("%d", &x.val);
	    x.val = i;
	    printf("caracteres: %c\t", x.car);
	    printf("valor: %d\n",x.val); 
	}
	return 0;
}
