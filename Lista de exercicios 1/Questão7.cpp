# include <stdio.h>
# include <stdlib.h>

main()

{

int horas;
float totalreceber;


printf("Digite a quantidade de horas trabalhadas semanalmente \n");
scanf("%i",&horas);

if (horas <= 40)
{
	
	totalreceber = (horas * 8.00 );
	printf("Seu salario e: %.2f \n",totalreceber);
	
}

else


{
	
	totalreceber = 320.00 + ((horas- 40)* 12.00);
	
	printf("Seu salario e: %.2f \n",totalreceber);
	
}






























}
