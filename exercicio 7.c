#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a,b,c,raiz;
	
	printf("Insira o a, o b e o c.\n");
	scanf("%d,%d,%d", &a, &b, &c);
	
	raiz=b*b-4*a*c;
	
	printf("As ra�zes dessa equa��o de segundo grau s�o v%d e -v%d.", raiz, raiz);
	
	return(0);
}
