# include <stdio.h>
# include <stdlib.h>

main()
{

int variavel_auxiliar = 0,i,numero;

printf("Digite um numero \n");
		scanf("%i",&numero);	

for(i = 1 ; i*(i+1)*(i+2)<=numero ; i++)    
{
    if(i*(i+1)*(i+2)==numero)
    {
        variavel_auxiliar = 1;
    }
}
if (variavel_auxiliar) 
{

printf("SIM\n");
}
else                   
{

printf("NAO\n");
}

}
