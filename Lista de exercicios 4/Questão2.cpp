# include <stdio.h>
# include <stdlib.h>
main()

{

     int n,p=0,c=0,i;
	
	do
	{
		
		printf("Digite um numero \n");
		scanf("%i",&n);
		
		for (i=1 ;i <= n;i++)
		
		{
			c = i + c ;
			
		}
		
		printf("A soma dos numero de 1 a %i e: %i \n",n,c);
		
		printf("Digite 1 para parar o programa e 0 para continuar \n");
		scanf("%i",&p);
		
	 } while (p == 0);
	
	
}
