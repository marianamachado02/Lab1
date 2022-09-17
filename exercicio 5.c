#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	float hora, minutos, segundos;
	
	printf("Insira um valor no formato horas,minutos:\n");
	scanf("%f,%f", &hora, &minutos);
	
	segundos= hora*3600+minutos*60;
	
	printf("Esse valor equivale a %.2f segundos.", segundos);
	
	return(0);
}
