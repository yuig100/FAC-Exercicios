#include <stdio.h>

MMC(int v1,int v2);

main()
{

int n1,n2,resultado;

printf("Digite o primeiro numero\n");
scanf("%i",&n1);	
	
printf("Digite o segundo numero\n");
scanf("%i",&n2);	

resultado = MMC(n1,n2);	
	
}

MMC(int v1,int v2)
{
int resultado=1,i;	

if (v1 > v2)
{
	
for (i = 1;i < v1;i++)
{
if ((v1 % i ==0) && (v2% i == 0))
{
resultado = resultado * i
	
	
	
}	
	
	


}	
	
	
	




}	
	
	
	
	
}
