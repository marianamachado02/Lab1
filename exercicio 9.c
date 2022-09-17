#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a;
	
	printf("Insira um número:\n");
	scanf("%d", &a);
	
	if(a%3==0 && a%5==0){
		printf("O número %d é divisível por 3 e por 5.\n", a);
	}
	
	else{
		printf("O número %d não é divisível por 3 e 5.\n", a);
	}
}
