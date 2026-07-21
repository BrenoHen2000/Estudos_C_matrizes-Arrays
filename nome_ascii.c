##include <stdio.h>
#include <string.h>

void traduzir(char a[]){
    for(int i =0; i<strlen(a);i++){
        printf("%c",a[i]);
    }
    
    printf(" Em Ascii: ");
    
    
    for(int i =0; i<strlen(a);i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

int main()
{
    char nome[6] = "Breno";
    char nome1[25] = "Joriscleison";
    traduzir(nome);
    traduzir(nome1);
   
    return 0;
}
