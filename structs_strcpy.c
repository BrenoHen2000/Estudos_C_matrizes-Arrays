#include <stdio.h>
#include <string.h>

typedef struct{
	char string [10];
	int len;
} str;


int main(){
	str s1, s2;
	scanf("%s %s", s1.string, s2.string);
	s1.len=strlen(s1.string);
	printf("\nstr1 = %s\nstr2 = %s\n \n", s1.string, s2.string);

	s2=s1;

	//strcpy(s1.string,s2.string);
	printf("str1 = %s\nstr2 = %s %d \n", s1.string, s2.string, s2.len);
	
	return 0;
}
