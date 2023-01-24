# include <stdio.h>
# include <stdlib.h>

main()

{
     
	 float valor,porcent;
	 int anos,porcentagem,i,c;
	 
	 printf("Digite o valor investido \n");	
	 scanf("%f",&valor);
	 
	 printf("Digite a porcentagem mensal (0 a 100%%) \n");
	 scanf("%i",&porcentagem);
	 
	 printf("Digite quantos anos o valor esta investido \n");
	 scanf("%i",&anos);
	
	
	porcent = porcentagem / 100;
	i = anos * 12;
	
	for (c=1 ;c<=i;c++ )
{
		
		valor = valor + (valor * porcent);
	
}
	printf("O valor desponivel e: %.2f",valor);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
