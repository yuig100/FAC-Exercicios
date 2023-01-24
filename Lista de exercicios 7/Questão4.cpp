#include <stdio.h>

int MDC(int v1,int v2);

main()
{
int n1,n2,resultado;
	
printf("Digite o primeiro numero\n");
scanf("%i",&n1);	
	
printf("Digite o segundo numero\n");
scanf("%i",&n2);

resultado = MDC(n1,n2);	

printf("O mdc e: %i",resultado);	
	
}

int MDC(int v1,int v2)
{

int i=0,resultado;

	
 if (v1 > v2)
 {
	
  for (i = v1;i > 1;i--)
  {
	
   if ((v1 % i == 0) && (v2% i == 0))	
   {
	resultado = i;
	return (resultado);
	
	  }	
	 
	 }	
 }

else if (v1 < v2)
{
  for (i = v2;i > 1;i--)
  {
	
   if ((v1 % i == 0) && (v2% i == 0))	
   {
	resultado = i;
	return (resultado);
	
	  }	
	 
	 }	
	
	
	
}

else

{
	
i = v1;
resultado = i;
return (resultado);	
	
}
	
	
	
	
	
	
	
	
	
	
	
	
}
