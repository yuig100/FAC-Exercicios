# include <stdio.h>
# include <stdlib.h>

main()

{
	
	//variaveis
	
	float custofabrica,porcentagemdistribuidor,porcentagemimpostos,porcentagemdistribuidorinvert,porcentagemimpostosinvert,custoconsumidor;
	
	
	//codigo
	
	printf("Digite o custo de fabrica \n");
	scanf("%f",&custofabrica);
	
	printf("Digite a porcentagem do distribuidor \n");
	scanf("%f",&porcentagemdistribuidor);
	
	printf("Digite a porcentagem dos impostos \n");
	scanf("%f",&porcentagemimpostos);
	
	porcentagemdistribuidorinvert = ((porcentagemdistribuidor / 100) * (custofabrica));
	
	porcentagemimpostosinvert = ((porcentagemimpostos / 100) * (custofabrica));
	
	custoconsumidor = (custofabrica + porcentagemdistribuidorinvert + porcentagemimpostosinvert);
	
	
	printf("o custo do consumidor e: %.2f",custoconsumidor);
	
	
	
	
	
	
	
	
	
	
	
	
}


