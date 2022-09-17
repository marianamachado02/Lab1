#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a, b, area;
	
	printf("Insira o comprimento do retângulo:\n");
	scanf("%d", &a);
	
	printf("Insira a altura do retângulo:\n");
	scanf("%d", &b);
	
	area=a*b;
	
	printf("A área do retangulo de comprimento %d e altura %d é de %d.\n", a, b, area);
	
	return(0);
}
