# include <stdio.h>
# include <stdlib.h>

main()

{
	
	 int N,i,k,p;
      
     
	
	printf("Digite um numero ate 19 \n");
	scanf("%i",&N);
	
	if (N >= 20)
	{
		printf("Erro\n");
	}
	
	else
	
	{
		
		for (i=1;i<=99;i++)
		{
		
		k = (i % 10);
		p = (i / 10);
		
		
		
		if (k+p == N)
		
		{
			
			printf("%i,",i);
			
		}
		
		}
		
		
		
		
	}
	
	
}
