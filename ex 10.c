#include <stdio.h> 
#include <stdlib.h> 
#include <math.h>

int main()
{     int var = 0;

        printf("Introduza valor(1-7):\n");
        scanf("%d", &var);

        if(var == 1) {
            printf("Domingo");}
            
        if(var == 2){
		            printf("Segunda-Feira");}

        if (var == 3){
		            printf("Terca-Feira");}

        if (var == 4){
		            printf("Quarta-Feira");}
		            
        if (var == 5){
            printf("Quinta-Feira");}
            
        if (var == 6){
		            printf("Sexta-feira");}
		            
        if (var == 7) {
		            printf("Sabado");}

        var = rand();
            print("%d", var);

        switch (var) {
            case 1:
                printf("Domingo\n");
                break;

            case 2:
                printf("Segunda-Feira\n");
                break;

            case 3:
                printf("Terca-Feira\n");
                break;

            case 4:
                printf("Quarta-Feira\n");
                break;

            case 5:
                printf("Quinta-Feira\n");
                break;

            case 6:
                printf("Sexta-feira\n");
                break;

            case 7:
                printf("Sabado\n");
                break;
              
}
