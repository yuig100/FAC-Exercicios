# include <stdio.h>
# include <stdlib.h>

main()

{
	//variaveis
	
	int quantidade,codigo;
	float valortotal,preco;
	
	//codigo
	
	printf("Especificacao----Codigo----Preco \n");
	printf("Cachorro quente--100-------3.50 \n");
	printf("Bauru simples----101-------4.50 \n");
	printf("Bauru com ovo----102-------5.20 \n");
	printf("Hamburguer-------103-------3.00 \n");
	printf("Cheeseburguer----104-------4.00 \n");
	printf("Refrigerante-----105-------2.50 \n");
	
	printf("Escreva o codigo de um produto \n");
	scanf("%i",&codigo);
	
	
{

	if (codigo == 100)
	preco = (3.50);
	
	
	else 
	if (codigo == 101)
	preco = (4.50);
	
	
	else 
	if (codigo == 102)
	preco = (5.20);
	
	
	else 
	if (codigo == 103)
	preco = (3.00);
	
	
	else 
	if (codigo == 104)
	preco = (4.00);
	
	
	else 
	if (codigo == 105)
	preco = (2.50);
	
	
	else  
	{
	printf("codigo invalido \n");
	exit(0);
}
}

printf("Escreva a quantidade desse produto \n");
	scanf("%i",&quantidade);
	
valortotal = (preco * quantidade);

printf("O total a ser pago e: %.2f",valortotal);




}
