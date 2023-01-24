# include <stdio.h>
# include <stdlib.h>

main()

{
	
	//variaveis 
	
	float preco,desconto,parcelado,parcelamentojuros;
	
	
	//codigo
	
	printf("Informe o preco do produto \n");
	scanf("%f", &preco);
	
	desconto = (preco * 0.9);
	
	parcelado = (preco / 5);
	
	parcelamentojuros = ((preco * 1.2) / 10);
	
	printf("1 - O valor com 10 porcento de desconto para o pagamento a vista e: %.2f reais\n",desconto);
	printf("2 - O valor da prestacao para parcelamento sem juros e: %.2f reais\n",parcelado);
	printf("3 - O valor da prestacao para parcelamento com juros, em 10 porcento,com 20 porcento de acrescimo no valor do produto e: %.2f reais\n",parcelamentojuros);
	
	
	
	
	
	
		
	
}
