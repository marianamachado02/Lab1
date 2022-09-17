#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float km, min;
	
	printf("Insira um valor de velocidade a km/h:\n");
	scanf("%f", &km);
	
	min= km*0.277777778;
	
	printf("O valor dessa velocidade em min/s é de %.1f.\n", min);
	
	return(0);
}
