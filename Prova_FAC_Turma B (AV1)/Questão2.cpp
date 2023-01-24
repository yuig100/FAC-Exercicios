#include <stdio.h>

main()

{
	
	int dia1,dia2,mes1,mes2,ano1,ano2;
	
	
	
	printf("Digite o dia da primeira data \n");
	scanf("%i",&dia1);
	
	printf("Digite o mes da primeira data \n");
	scanf("%i",&mes1);
	
	printf("Digite o ano da primeira data \n");
	scanf("%i",&ano1);
	
	printf("Digite o dia da segunda data \n");
	scanf("%i",&dia2);
	
	printf("Digite o mes da segunda data \n");
	scanf("%i",&mes2);
	
	printf("Digite o ano da segunda data \n");
	scanf("%i",&ano2);	
	
	if (ano2 > ano1)
	{
		
		printf("A segunda data %i/%i/%i e mais recente que a primeira data %i/%i/%i \n",dia2,mes2,ano2,dia1,mes1,ano1);
		
	}
	
	else if (ano1 > ano2)
	{
		
	printf("A primeira data %i/%i/%i e mais recente que a segunda data %i/%i/%i \n",dia1,mes1,ano1,dia2,mes2,ano2);	
		
		
	}
	
	else if (ano1 = ano2)
	
	{
		
		if (mes1 > mes2)
		{
			
		printf("A primeira data %i/%i/%i e mais recente que a segunda data %i/%i/%i \n",dia1,mes1,ano1,dia2,mes2,ano2);	
			
			
		}
		
		else if (mes2 > mes1)
		
		{
		
		printf("A segunda data %i/%i/%i e mais recente que a primeira data %i/%i/%i \n",dia2,mes2,ano2,dia1,mes1,ano1);	
			
		}
		
		else if (mes1 = mes2)
		
		{
			
		if (dia1 > dia2)
		{
			
		printf("A primeira data %i/%i/%i e mais recente que a segunda data %i/%i/%i \n",dia1,mes1,ano1,dia2,mes2,ano2);	
			
		}
		
		else if (dia2 > dia1)
		{
			
		printf("A segunda data %i/%i/%i e mais recente que a primeira data %i/%i/%i \n",dia2,mes2,ano2,dia1,mes1,ano1);		
			
		}
		
		else if (dia1 = dia2)
		{
			
		printf("A primeira data %i/%i/%i e a segunda data %i/%i/%i sao iguais \n",dia1,mes1,ano1,dia2,mes2,ano2);	
			
			}	
			
		}
		
	}
	
}
