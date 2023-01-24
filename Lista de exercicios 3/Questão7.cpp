# include <stdio.h>
# include <stdlib.h>

main()

{
	
	//variaveis
	
	char sexo,resposta;
	
	int gostou=0,ngostou=0,i,masc=0,femin=0,pessoas;
	//codigo
	
	
	printf("Digite o numero de pessoal entrevistadas \n");
	scanf("%i",&pessoas);
	fflush(stdin);
	
	for (i=1;i<=pessoas;i++)
	{
	
	printf("Faleu seu Sexo (M/F) \n");
	scanf("%c",&sexo);
	fflush(stdin);
{
	
	
	if ((sexo == 'M') ||(sexo == 'm'))
	
{
	printf("Voce gostou do produto (G/N) \n");
	scanf("%c",&resposta);
	fflush(stdin);
		
		
	if ((resposta == 'G') || (resposta == 'g'))
	
	{
		
	gostou++;
	masc++;		
    }
			
		
	else if ((resposta == 'N') || (resposta == 'n'))
		
		{
			
			ngostou++;
			
		}
	
	else
	
	{
		
		printf("voce digitou a letra errada \n");
		
	}	
}
	
else 

if ((sexo == 'F') || (sexo == 'f'))

{
    printf("Voce gostou do produto (G/N) \n");
	scanf("%c",&resposta);
	fflush(stdin);
		
		
	if ((resposta == 'G') || (resposta == 'g'))
	
	{
		
	gostou++;
	femin++;		
    }
			
		
	else 
	
	if ((resposta == 'N') || (resposta == 'n'))
		
		{
			
			ngostou++;
			
		}
		

 
 else
	
	{
		
		printf("voce digitou a letra errada \n");
		
	}


}

else
	
	{
		
		printf("voce digitou o sexo errado \n");
		
	}
	
}
	
}
	

	

printf ("o numero de pessoas que gostaram foram %i \n",gostou);

printf ("o numero de pessoas que nao gostaram foram %i \n",ngostou);

if (masc > femin)

{
  printf("O produto teve um aceitacao melhor no sexo masculino \n");	
}

else

if (masc < femin)

{
	
printf("O produto teve um aceitacao melhor no sexo feminino \n");	
	
}

else 

if (masc == femin)

{
	
printf("O produto teve um aceitacao igual em ambos os sexos \n");	
	
}


}
