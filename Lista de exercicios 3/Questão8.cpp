# include <stdio.h>
# include <stdlib.h>

main()

{
	//variaveis
	
	int matricula,idade,tempo,quantfemin=0,quantmasc=0,i;
	char sexo;
	float salario,sal=0,media;
	
	
	//
	
	for (i=1;i <=250;i++)
	{
		
		printf("Digite o numero da sua matricula \n");
		scanf("%i",&matricula);
		
		fflush(stdin);
		printf("Digite o seu sexo \n");
		scanf("%c",&sexo);
		fflush(stdin);
		
		printf("Digite sua idade \n");
		scanf("%i",&idade);
		
		printf("Digite seu salario \n");
		scanf("%f",&salario);
		
		printf("Digite seu tempo (em anos) na impresa \n");
		scanf("%i",&tempo);
{
		
		if ((sexo == 'f') || (sexo == 'F'))
		{
			
			quantfemin++;
			
		}
		
		else
		
		if ((sexo == 'm') || (sexo == 'M'))
		{
		
		quantmasc++;	
		sal = sal + salario;	
			
		}
}

{
	
if (idade - tempo < 21)
{
	
printf("A matricula de todos os funcionarios que ingressaram na empresa com menos de 21 anos e %i \n",matricula); 
	
}


}	




}

media = (sal / quantmasc);

printf("A quantidade de funcionarios femininos e: %i \n",quantfemin);

printf("A media salarial dos homens e: %.2f",media);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

