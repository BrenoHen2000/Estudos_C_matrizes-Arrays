#include <stdio.h>
#include <string.h>

int main(){
	char a1[10];
	char a2[10];

	scanf("%s",a1);
	scanf("%s",a2);

	int igual = strcmp(a1,a2);

	igual>0 ? printf("%s %s", a2,a1):printf("%s %s", a1,a2);

	return 0;
}
