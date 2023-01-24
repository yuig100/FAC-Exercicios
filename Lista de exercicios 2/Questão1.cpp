#include <stdio.h>
#include <stdlib.h>

main()
{
	//variaveis
	float peso,altura,imc;
	
	//codigo
	
	printf("Digite seu peso: \n");
	scanf("%f", &peso);
	
	printf("Digite sua altura: \n");
	scanf("%f" , &altura);
	
	imc = peso / (altura * altura);
	
    {
	if 	(imc <= 18.4)
    
	printf("Voce esta abaixo do peso!\n");
	
	else 
	
	
	if (imc <= 24.9)
	
	
		printf("Voce esta no peso ideal \n");
		
	
	
	else 
	
	
		if (imc <= 29.9 )
	
	
		
		printf("Voce esta no sobrepeso \n");
		

	
	else 
	
	
	if (imc <= 34.9)
	
	
		
		printf("voce esta na obesidade grau I \n");
		
	
	
	else 
	
	if (imc <=39.9)
	
	printf("Voce esta na obesidade grau II \n");
	
	
	else 
	 
	 if (imc>=40.0)
	
	printf("Voce esta na obesidade grau III \n");
	
}
	printf("seu peso e: %.2f \n", imc);		
    
    
    
	
	return 0;
}
