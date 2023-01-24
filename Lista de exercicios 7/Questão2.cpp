#include <stdio.h>

int celsius(float C);


int celsius(float C)
{
float F;
	
F = (1.8 * C) + 32;	
printf("O valor em Fahrenheit e: %.2f",F);	
}

main()
{
float C;
 	
printf("Escreva um valor em Celsius para converter \n");
scanf("%f",&C);	
	
celsius(C);

}
