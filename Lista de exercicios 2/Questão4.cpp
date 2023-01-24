#include <stdio.h>
#include <stdlib.h>

main()

{
	//variaveis
	
	float percurso,conbustivel,precocombus,quantidadetotaldecombustivel,custotottaldecombustivel;
	
	//codigo
	
	printf("Digite o tamanho do percurso da viagem em quilometros \n");
	scanf("%f",&percurso);
	
	printf("Digite o numero de quilometros que o carro percorre com um litro de combustivel \n");
	scanf("%f",&conbustivel);
	
	printf("Digite o preco do litro do combustivel \n");
	scanf("%f",&precocombus);
	
	quantidadetotaldecombustivel = (percurso / conbustivel);
	
	custotottaldecombustivel = (quantidadetotaldecombustivel * precocombus);
	
	printf("A quantidade de combustivel,em litros,consumida durante a viagem e: %.2f \n",quantidadetotaldecombustivel);
	printf("O custo total de cumbustivel e: %.2f",custotottaldecombustivel);
	
	return 0;
	
	
	
}
