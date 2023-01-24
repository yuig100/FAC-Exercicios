# include <stdio.h>
# include <stdlib.h>

main()

{
	
	// variaveis
	
	float peso,pesoplaneta,gravidadeplaneta;
	int planeta;
	
	// codigo
	
	printf("Digite seu peso \n");
	scanf("%f", &peso);
	
	printf("Numero--Planeta----Gravidade Relativa g \n");
	printf("1-------Mercurio---0.37 \n");
	printf("2-------Venus------0.88 \n");
	printf("3-------Marte------0.38 \n");
	printf("4-------Jupiter----2.64 \n");
	printf("5-------Saturno----1.15 \n");
	printf("6-------Urano------1.17 \n");
	
	printf("Agora escolha o numero de um planeta");
	scanf("%i", &planeta);
{
		
	if (planeta == 1)
	  
	  gravidadeplaneta = (0.37);
	  
	else 
	
	if (planeta == 2)
	
	gravidadeplaneta = (0.88);
	
	else 
	
	if (planeta == 3)
	
	gravidadeplaneta = (0.38);
	
	else 
	
	if (planeta == 4)
	
	gravidadeplaneta = (2.64);
	
	else 
	
	if (planeta == 5)
	
	gravidadeplaneta = (1.15);
	
	else 
	
	if (planeta == 6)
	
	gravidadeplaneta = (1.17);
	
}
	
	pesoplaneta = ((peso/10) * gravidadeplaneta);
	
	printf ("Seu peso e %.2f" , pesoplaneta);
	
}
