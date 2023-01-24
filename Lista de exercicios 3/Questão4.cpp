# include <stdio.h>
# include <stdlib.h>

main()

{
	int i=0,contN=0,contp=0;
	float n=0,mediap=0,somap=0;
	for (i=1;i <= 5;i++)
	{
	
	printf("Digite o %iºnumero \n",i);
	scanf("%f",&n);
	
	
	if (n<0)
	{
	
	contN++;
		
	}
	
	else
	if (n>0)
	{
		
		contp++;
		
		somap = somap + n;
		
	}
}
	
	printf ("Quantidade de negativos: %i\n", contN);
	mediap = somap/contp;
	printf ("Média dos positivos: %.1f\n", mediap);
	
	
}
