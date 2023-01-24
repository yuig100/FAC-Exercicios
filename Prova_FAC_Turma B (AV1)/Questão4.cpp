#include <stdio.h>

main()

{
	
	int binario,decimal,i,n,r=1,soma=0,o,c=0,valorfinal,l;
	
	printf("Digite quantos numero tem o seu numero binario \n");
	scanf("%i",&n);
	
	l = n;
	for(i=1;i <= l;i++)
	{
	
	c++;	
	printf("Digite o %io numero do seu binario \n",c);
	scanf("%i",&binario);
	
	if (binario > 1)
	{
		
		printf("Numero Binario Errado \n");
		
	}
	
	for (o=1;o <= (n-1);o++)
	{
	
	r = 2 * r;	
    }
    
		
	n--;
	soma = binario * r + soma;
	r=1;
 }

	printf("O seu numero passado para decimal e %i",soma);

}
