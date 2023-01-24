# include <stdio.h>
# include <stdlib.h>

main()

{
	// declaração de variavel
	float saldo,soma1,soma2,soma3;
	
	
	
	
	//codigo
	
	printf("Digite seu saldo: \n");
	scanf("%f",&saldo);
	
	{
	
	if (saldo < 1000)
	  {
	  printf("seu saldo e: %.2f \n",saldo);
      }
	
      
	else


	if ((saldo >=1000) && (saldo<=1500))
	{
	
	soma1 = (saldo * 1.2);
	
	printf("Seu saldo e: %.2f",soma1);
    }
	else
	
	
	if ((saldo >= 1501) && (saldo <= 2500))
	{
	
	soma2 = (saldo * 1.3);
	
	printf("Seu saldo e: %.2f",soma2);
 }
	else 
	
	
	if (saldo > 2500)
	{
	
	soma3 = (saldo * 1.4);
	
	printf("Seu saldo e: %.2f \n",soma3);
    }
	
}
	
	
	
	
	return(0);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
