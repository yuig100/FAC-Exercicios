#include <stdio.h>

main()

{
	int ano,tipo,quantcarros=0,carros=0,quantidadesveiculosmesmovalor=0;
	
	float km,valor,carromaiscaro=0,percentualdecarros0km,percentualdecarrosusados,carros0km=0,carrosusados=0;
	
	char continuar;
	
	do{
	
	carros++;
	
	printf("Digite a quilometragem do carro \n");
	scanf("%f",&km);
	
	printf("Digite o ano do carro \n");
	scanf("%i",&ano);
	
	printf("Digite o valor do carro \n");
	scanf("%f",&valor);
	
	printf("Digite o tipo (0-0km) e (1 para usado) \n");
	scanf("%i",&tipo);
	
	{
	
	if ((ano > 2015) && (km >= 20000) && (km <= 50000 ))
	{
		
		quantcarros++;
		
	}
}
{

	if (tipo == 0)
	{
		
		carros0km++;
		
	}
	
	else
	
	if(tipo == 1)
	
	{
		
		carrosusados++;
		
		
	}
}
{

	if (valor > carromaiscaro)
	{
		
	carromaiscaro = valor;
	
	quantidadesveiculosmesmovalor=0;
	
	quantidadesveiculosmesmovalor++;	
		
	}
	
	else if (valor = carromaiscaro)
	{
	
	quantidadesveiculosmesmovalor++;	
		
	}
}
	fflush(stdin);
	printf("Deseja continuar(s/n) \n");
	scanf("%c",&continuar);
	
	}while (continuar == 's');
	
	
	percentualdecarros0km = (carros0km / carros) * 100;
	
	percentualdecarrosusados = (carrosusados / carros) * 100;
	
     printf("A quantidade de carros fabricados apos 2015 e com a quilometragem entre 20.000 e 50.000 km e: %i \n",quantcarros);
	 
	 printf("O percentual de carros 0km e %.1f %% e o percentual de carros usados e %.1f %% \n",percentualdecarros0km,percentualdecarrosusados);
	 
	 printf("O valor do carro mais caro da loja e %.2f e a quantidades de carros com esse valor e %i \n",carromaiscaro,quantidadesveiculosmesmovalor);	
	
	
	
	
	
	
	
}
