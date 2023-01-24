# include <stdio.h>
# include <stdlib.h>

main()

{
	//variaveis
	
	char sexo;
	float altura,pesoideal;
	
	//codigo
	
	
	printf("Digite seu sexo m/f \n");
	scanf("%c",&sexo);
	
    printf("Digite sua altura \n");
	scanf("%f",&altura);

	{
		
		if (sexo == 'm')
		
		pesoideal = ((72.7 * altura) - 58);
		
		else
		
		if (sexo = 'f')
		
		pesoideal = ((62.1 * altura) - 44.7);
		
	
		
			}
		

		
		printf("Seu peso ideal e: %.2f \n", pesoideal);
	

















return (0);
}
