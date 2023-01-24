#include <stdio.h>
#include <stdlib.h>

main()
{
	
	int bin,pot,decimal=0,resto;
	
	
	
	printf("Digite um numero binario \n");
	scanf("%i",&bin);
	
	pot=1;
	
	while(bin !=0)
	
	{
		
		resto = bin % 10;
		bin = bin / 10;
		
		decimal = decimal + resto * pot;
		pot = pot * 2;
		
	}
	if (resto < 2)
	{
	
	printf("Resposta: %i",decimal);
	
    }
    
    else
    
    {
    	
    	printf("Erro!! \n");
    	
	}
	
}

