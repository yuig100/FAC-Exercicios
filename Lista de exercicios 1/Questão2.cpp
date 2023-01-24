# include <stdio.h>
# include <stdlib.h>

main()

{
	int idade;
	
	printf("Digite sua idade \n");
	scanf("%i",&idade);
	
	if ((idade >= 5) && (idade <= 7))
	
	printf("Sua categoria e infantil A \n");
	
	else
	
	if ((idade >= 8) && (idade <= 10))
	
	printf("Sua categoria e infatil B \n");
	
	else
	
	if ((idade >= 11) && (idade <=13))
	
	printf("Sua categoria e juvenil A \n");
	
	else
	
	if ((idade >= 14) && (idade <= 17))
	
	printf("Sua categoria e juvenil B \n");
	
	else 
	
	if (idade < 5)
	
	printf("Voce nao tem idade para nadar \n");
	
	else
	
	printf("Sua categoria e Adulto \n");
	
	
	
	

	
	
	
	
	
	
	
	
	
	
	
}
