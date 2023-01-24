# include <stdio.h>
# include <stdlib.h>

main()

{
	//variaveis
	
	int valor1,valor2,valor3,bot,mid,top,inteiro;
	
	//codigo
	
	printf("Escreva o primeiro valor \n");
	scanf("%i",&valor1);
	
	printf("escreva o segundo valor \n");
	scanf("%i",&valor2);
	
	printf("escreva o terceiro valor \n");
	scanf("%i",&valor3);
	
		
	{
	
	{
	if ((valor1 > valor2) && (valor1 > valor3))
	
	top = valor1;
	
	else
	
	if((valor2>valor1) && (valor2>valor3))
	
	top = valor2;
	
	else
	
	if((valor3>valor1) && (valor3>valor2))
	
	top = valor3;
	
    }
	
	{
	if ((top > valor2) && (valor2 > valor3))
	
	mid = valor2;
	
	else
	
	if ((top > valor3) && (valor3 > valor2))
	
	mid = valor3;
	
	else if (top > valor1)
	
	mid = valor1;
		
	}
	
	{
		if (mid > valor3)
		bot = valor3;
		
		else
		
		if (mid>valor2)
		
		bot = valor2;
		
		else  if (mid > valor1)
		
		bot = valor1;
		
	}
	
	
}

    printf("1-os tres valores em ordem crescente \n");
	printf("2-os tres valores em ordem decrescente \n");
	printf("3-o maior valor do meio dos outros valores \n");
	scanf("%i",&inteiro);
	
	{
		if (inteiro == 1)
		printf("%i , %i , %i",bot,mid,top);
		
		else
		
		if (inteiro == 2)
		printf("%i , %i , %i",top,mid,bot);
		
		else
		
		if (inteiro == 3)
		printf("%i , %i , %i",bot,top,mid);
		
		else 
		
		printf("valor incorreto");
	}









}
