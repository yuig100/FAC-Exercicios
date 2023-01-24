#include <stdio.h>

main()

{
	
	int n;
	
	printf("Digite um numero \n");
	scanf("%i",&n);
	
	if (n <= 9)
	{
		
		printf("O numero tem 1 algarismo \n");
		
	}
	
	else if ((n>=10) && (n<=99))
	
	{
		
		printf("O numero tem 2 algarismo \n");
		
	}
	
	else if ((n>=100) && (n<=999))
	{
		
		printf("O numero tem 3 algarismo \n");
		
	}
	
	else if ((n>=1000) && (n<=9999))
	{
		
		printf("O numero tem 4 algarismo \n");
		
	}
	
	else if ((n>=10000) && (n<=99999))
	{
		
		printf("O numero tem 5 algarismo \n");
		
	}
	
	else if ((n>=100000) && (n<=999999))
	{
		
		printf("O numero tem 6 algarismo \n");
		
	}
	
	else if ((n>=1000000) && (n<=9999999))
	{
		
		printf("O numero tem 7 algarismo \n");
		
	}
	
	else if ((n>=10000000) && (n<=99999999))
	{
		
		printf("O numero tem 8 algarismo \n");
		
	}
	
	else if ((n>=100000000) && (n<=999999999))
	{
		
		printf("O numero tem 9 algarismo \n");
		
	}
	
	else if ((n>=1000000000) && (n<=9999999999))
	{
		
		printf("O numero tem 10 algarismo \n");
		
	}
	
}
