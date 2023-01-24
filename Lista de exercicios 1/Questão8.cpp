# include <stdio.h>
# include <stdlib.h>

main()

{
	int dias=0,valortotaldiaria=0;
    char apartamento=0,nome=0;
	float consumoint=0,subtotal=0,totalgeral=0;

    printf("Digite seu nome: \n");
	scanf("%c",&nome);
fflush(stdin);
	printf("Digite o apartamento ultilizado: \n");
	scanf("%c",&apartamento);
fflush(stdin);
    printf("Digite o numero de dias hospedado: \n");
	scanf("%i",&dias); 
	
	printf("Digite o valor do consumo interno: \n");
	scanf("%f",&consumoint);
	
{
	
	
	if (apartamento == 'A')
	{
	
	valortotaldiaria = 350 * dias; 
	
	
    }
	
	else
	
	if (apartamento == 'B')
	
	{
		
	valortotaldiaria = 275 * dias; 	
		
		
		
	}
	
	else
	
	if (apartamento == 'C')
	
	{
		
	valortotaldiaria = 200 * dias; 	
		
		
		
	}
	
	else
	
	if (apartamento == 'D')
	
	{
		
	valortotaldiaria = 150 * dias; 	
		
		
		
	}
	
	else
	
	{
		
	printf("Apartamento invalido");	
		
		
	}
	
}
	
	
	
	
	subtotal = valortotaldiaria + consumoint;
	
	totalgeral = subtotal * 1.1;
	
	
	printf("Nome: %c  \n",nome);
	printf("Seu apartamento e: %c  \n",apartamento);
	printf("O valor total da diaria: %i  \n",valortotaldiaria);
	printf("O valor do consumo interno: %.2f  \n",consumoint);
	printf("O subtotal e: %.2f  \n",subtotal);
	printf("O valor da taxa de servico e 10%% da conta \n");
	printf("O total e: %.2f  \n",totalgeral);
	
	
	
	
	
	
	
	
}
