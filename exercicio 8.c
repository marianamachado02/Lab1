#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a;
	
	printf("Introduza um número inteiro:\n");
	scanf("%d", &a);
	
	if (a%2==0){
		printf("O número é par.\n");
	}
	
	else{
		printf("O número é ímpar.\n");
	}
}
