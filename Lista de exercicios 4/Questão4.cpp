# include <stdio.h>
# include <stdlib.h>

main()

{
	
	int n,i,p=0;
	float a1,r;
	
	
	do
	{
	
	printf("Digite um numero\n");
	scanf("%i",&n);
	
	printf("Digite o primeiro termo de uma progressao aritimetica\n");
	scanf("%f",&a1);
	
	printf("Digite a razao\n");
	scanf("%f",&r);
	
	for (i=1;i<=n;i++)
	{
		
	printf("%.1f,",a1);
	
	
	a1 = a1 + r;	
		
   }
		
	printf("\nDigite 0 para reiniciar o programa ou 1 para parar\n");
	scanf("%i",&p);	
		
	}
	
	while (p == 0);
	
}
