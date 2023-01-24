# include <stdio.h>
# include <stdlib.h>

main()

{
	
	int p,n,i,variavel_auxiliar,k;
	
	do
	{
		i = 1;
		
		printf("Digite um numero \n");
		scanf("%i",&n);	
		
	    k = i*(i+1)*(i+2);
		
		while ( k < n)
		{
			
		i++;
        k = i*(i+1)*(i+2);	
			
		}
		
		if (k == n)
		
		{
		
		printf("Esse numero e triangular\n");	
	    }
		
		else
		
		{
		printf("Esse numero nao e triangular\n");	
		}
		
	
		
	printf("Digite 0 para reiniciar o programa e 1 para fechar\n");
	scanf("%i",&p);
		
	} while (p == 0);
	
	
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
