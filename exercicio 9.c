#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a;
	
	printf("Insira um n�mero:\n");
	scanf("%d", &a);
	
	if(a%3==0 && a%5==0){
		printf("O n�mero %d � divis�vel por 3 e por 5.\n", a);
	}
	
	else{
		printf("O n�mero %d n�o � divis�vel por 3 e 5.\n", a);
	}
}
