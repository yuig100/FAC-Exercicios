# include <stdio.h>
# include <stdlib.h>

main()

{
	
	int p=0,n,i,c=0;
	
	
	
	do
	
	{
		
		printf("Digite um numero \n");
		scanf ("%i",&n);
		
		for (i = 1 ;i <= n;i++)
		{
			
		if (n % i == 0)	
			
			printf("%i,",i);
			
		}
		
		
	printf("\nDigite 0 para reiniciar o programa e 1 para parar \n");
	scanf("%i",&p);	
	}
	
	while ( p == 0);
	
	
	
}
