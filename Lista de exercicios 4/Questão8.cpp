# include <stdio.h>
# include <stdlib.h>

main()

{
	
	int p,cart,multa,i,cnh,maiormulta=-1;
	float valormulta,l=0,dividatotal=0;
	
	do
    {
	l=0;
	  
	  printf("Digite o numero da carteira de motorista\n");
	  scanf("%i",&cart);
	  
	  printf("Digite o Numero de multas\n");
	  scanf("%i",&multa);
	  
	  if (multa > maiormulta)
	  {
	  	
	  	maiormulta = multa;
	  	
	  	cnh = cart;
	  	
	  }
	  
	  for (i=1;i <= multa;i++)
	  
	  {
	  	
	  	printf("Digite o valor da %i multa \n",i);
	  	scanf("%f",&valormulta);
	  	
	  	l = valormulta + l;
	  	
	  }
	  
	  dividatotal = l + dividatotal;
	  
	  printf("\nO motorista %i deve %.2f\n",cart,l);
	  
	  printf("Digite O calcular o proximo motorista ou 1 para finalizar \n");
	  scanf("%i",&p);
	
	} while ( p == 0);

    printf("O valor total arrecadado e: %.2f\n",dividatotal);
    
    printf("O motoriasta que teve o maior numero de multa foi %i",cnh);

}
