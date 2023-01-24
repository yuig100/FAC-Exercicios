# include <stdio.h>
# include <stdlib.h>

main()

{
	
	int p=0,n,i;
	float a1,r;
	
	do
	{
	a1 = 1;	
	r = 1;
	printf("Digite um numero\n");
	scanf("%i",&n);	
		
	for (i=1;i <= n;i++)
	
	{
	printf("%.0f,",a1);
	
	r = r * 2;
	a1 = a1 * r;
	
	}
	
	printf("\nDigite 0 para reiniciar o programa e 1 para parar\n");
	scanf("%i",&p);
		
	} while (p==0);
		
} 




	
	
	
	
	






