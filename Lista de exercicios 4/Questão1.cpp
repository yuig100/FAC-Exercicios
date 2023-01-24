# include <stdio.h>
# include <stdlib.h>

main()

{
	
	int n,i,p=1;
	
	do
	{
	
	printf("Digite um numero \n");
	scanf("%i",&n);
	
	for (i = 2; i <= n;i = i + 2)
	{
	
	printf("%i,",i);
	
    }
	
	printf("\nDigite 0 para reiniciar o programa ou outro caracter para encerrar\n");
	scanf("%i",&p);
	
	
} while (p == 0); 

	
}
