#include <stdio.h>

void fibonacci(int n);

void fibonacci(int n)
{
int a1=1,a2=1,a3,i;

if ((n==1) || (n==2))
{
	printf("1");	
}

else
{
for (i=3;i<=n;i++)
{
	
a3=a1+a2;
a1=a2;
a2=a3;	
	
}
printf("\nO n-esimo termo e: %i",a3);

}

}

main()
{
 int n;
 
 printf("Digite o n-esimo termo de sua escolha \n");
 scanf("%i",&n);
 
 fibonacci(n);
	
}
