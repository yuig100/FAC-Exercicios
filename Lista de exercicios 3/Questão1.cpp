# include <stdio.h>
# include <stdlib.h>

int main()

{
	
	// Variaveis
	
	int N,Y,i,M;
	
	
	//codigo
	
	printf("Digite um numero inteiro positivo \n");
	scanf("%i",&N);
	
	printf("Digite outro numero inteiro positivo \n");
	scanf("%i",&Y);

	M = 1;
	            
	for ( i = Y; Y < N; Y = i * M)
	{
	
	printf(" %i X %i = %i \n",i,M,Y);
	
	M++;
    }
	
	
}
