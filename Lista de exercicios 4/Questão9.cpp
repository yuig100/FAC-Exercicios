# include <stdio.h>
# include <stdlib.h>

main()

{
	int cont=0,n=1000;
	
	
	while (cont < 5)
	{
		
		n++;
		
		if (n % 11 == 5)
		{
			
			cont++;
			
		}
		
		
	}
	
	printf("O quinto numero maior que mil e divisivel por 11 que da resto 5 e: %i",n);
	
}
