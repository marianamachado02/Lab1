#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float raio, per, area;
	
	printf("Qual o valor do raio do círculo?\n");
	scanf("%f", &raio);
	
	per=2*M_PI*raio;
	
	area=M_PI*raio*raio;
	
	printf("O perímetro do círculo de raio %.1f é de %.1f e a sua área é %.1f.\n", raio, per, area);
	
	return(0);	
}
