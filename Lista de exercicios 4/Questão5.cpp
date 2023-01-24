# include <stdio.h>
# include <stdlib.h>

main()

{
	
	int p=0,n,a1,i;
	
	do
	{
	a1=1;
		
	printf("Digite um numero \n");
	scanf("%i",&n);	
		
	for (i=1;i<=n;i++)	
		
	{
	
		printf("%i,",a1);
		
		a1 = a1 * 2;
	
	}	
		
	printf("\nDigite 0 para reiniciar o programa e 1 para parar\n");
	scanf("%i",&p);	
		
		
	} while(p==0);
	
	
}
