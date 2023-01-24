#include <stdio.h>

void multiplos(int vi,int vf,int n)
{
int i,c=0,mult=0;
	
for (i=vi;i<=vf;i++)
{
c++;
mult= n * c;
if((mult>=vi) && (mult<=vf))
{
printf("%i,",mult);	
}

}	
	
}



main()
{
int vi,vf,n;	
	
printf("Digite um valor inicial \n");
scanf("%i",&vi);

printf("Digite um valor final \n");
scanf("%i",&vf);	
	
printf("Digite um Valor N \n");
scanf("%i",&n);	
	
multiplos(vi,vf,n);	
	
	
}
