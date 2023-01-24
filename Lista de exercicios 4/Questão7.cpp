# include <stdio.h>
# include <stdlib.h>

main()

{
	
int p,i,n,imp,pos,n2;

do
{
imp=1;
pos=0;	

printf("Entre com um numero \n");
scanf("%i",&n2);

for (i = 1;i <= n2;i++)	
{

printf("%i)Digite um numero\n",i);
scanf("%i",&n);	
	
	
if (n % 2 == 0)
{
	
	pos = pos + n;
	
}

else

{
	
imp = imp * n;	
	
	
}
}

printf("A soma dos numeros pares sao: %i \n",pos);
printf("O produto dos numeros impares sao: %i \n",imp);



printf("\nDigite 0 para repetir o programa e 1 para parar\n");
scanf("%i",&p);

} while ( p == 0);	
	
}
