# include <stdio.h>
# include <stdlib.h>

main()
{
 int dia,mes,cal;	
	
	printf("Escolha o Dia do ano \n");
	scanf("%i",&dia);
	
	printf("Escolha o Mes do ano \n");
	scanf("%i",&mes);
	
	
	if ((mes == 1) && (dia <=31) && (dia >= 1))
	{
	
		cal = (dia * mes);
		
		printf("%i/%i - %i dia do ano \n",dia,mes,cal);
		
    }
    
    else
    
    if ((mes == 2) && (dia <=28) && (dia >= 1))
    {
    	
    	cal = dia + 31;
		
		printf("%i/%i - %i dia do ano \n",dia,mes,cal);
    	
    	
    	
	}
	
	else
    
    if ((mes == 3) && (dia <=31) && (dia >= 1))
    {
    	
    	cal = dia + 59;
		
		printf("%i/%i - %i dia do ano \n",dia,mes,cal);
    	
    	
    	
	}
	
		else
    
    if ((mes == 4) && (dia <=30) && (dia >= 1))
    {
    	
    	cal = dia + 90;
		
		printf("%i/%i - %i dia do ano \n",dia,mes,cal);
    	
    	
    	
	}
	
	else
    
    if ((mes == 5) && (dia <=31) && (dia >= 1))
    {
    	
    	cal = dia + 120;
		
		printf("%i/%i - %i dia do ano \n",dia,mes,cal);
    	
    	
    	
	}
	
	else
    
    if ((mes == 6) && (dia <=30) && (dia >= 1))
    {
    	
    	cal = dia + 151;
		
		printf("%i/%i - %i dia do ano \n",dia,mes,cal);
    	
    	
    	
	}
	
	else
    
    if ((mes == 7) && (dia <=31) && (dia >= 1))
    {
    	
    	cal = dia + 181;
		
		printf("%i/%i - %i dia do ano \n",dia,mes,cal);
    	
    	
    	
	}

else
    
    if ((mes == 8) && (dia <=31) && (dia >= 1))
    {
    	
    	cal = dia + 212;
		
		printf("%i/%i - %i dia do ano \n",dia,mes,cal);
    	
    	
    	
	}

else
    
    if ((mes == 9) && (dia <=30) && (dia >= 1))
    {
    	
    	cal = dia + 243;
		
		printf("%i/%i - %i dia do ano \n",dia,mes,cal);
    	
    	
    	
	}


else
    
    if ((mes == 10) && (dia <=31) && (dia >= 1))
    {
    	
    	cal = dia + 273;
		
		printf("%i/%i - %i dia do ano \n",dia,mes,cal);
    	
    	
    	
	}


else
    
    if ((mes == 11) && (dia <=30) && (dia >= 1))
    {
    	
    	cal = dia + 303;
		
		printf("%i/%i - %i dia do ano \n",dia,mes,cal);
    	
    	
    	
	}

else
    
    if ((mes == 12) && (dia <=31) && (dia >= 1))
    {
    	
    	cal = dia + 333;
		
		printf("%i/%i - %i dia do ano \n",dia,mes,cal);
    	
    	
    	
	}

else

{
	
	printf("voce digitou o dia ou mes errado");
	
	
	
}












}
