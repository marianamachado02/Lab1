#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int dias, semanas, anos, dias_1;
	
	printf("Insira um número:\n");
	scanf("%d", &dias);
	
	anos=dias/365;
	dias_1= dias %365;
	semanas= dias_1/7;
	dias_1= dias_1 %7;
	
	printf("%d dias corresponde a %d anos, %d semanas e %d dias.\n", dias, anos, semanas, dias_1);
	
	return 1;
	}
