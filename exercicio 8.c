#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a;
	
	printf("Introduza um n�mero inteiro:\n");
	scanf("%d", &a);
	
	if (a%2==0){
		printf("O n�mero � par.\n");
	}
	
	else{
		printf("O n�mero � �mpar.\n");
	}
}
