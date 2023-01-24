#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


//funções

float saquefun(float *saldo, float *limiteespecial);

float depositofun(float *saldo, float *limiteespecial);

float emprestimofun(float *saldo, float *limiteespecial,float *jurosemprestimo);

//main

main()
{
	float saldo=0, limiteespecial=1000, jurosemprestimo=0, valorjurosemprestimo;
	int cont1=0, cont2=0,continuar=0;
	char metodo;
	
	setlocale(LC_ALL,"portuguese");
		
	printf("Digite seu saldo inicial \n");
	scanf("%f",&saldo);	
	fflush(stdin);
	if (saldo >= 0)
	{
	
	do
	{
		
	if (jurosemprestimo > 0)
	{
		
	cont1++;	
		
	 }
	 
	 if ((cont1 == 5) && (cont2 < 5))
	{
	cont2++;
	
	if (saldo < jurosemprestimo)
	{
	
	saldo = saldo - jurosemprestimo;
	limiteespecial = limiteespecial + saldo;
    if (cont2 = 5)
    {
    jurosemprestimo = 0;
	cont2 =0;	
	}
	  
	  }
	  
	  else if (saldo >= jurosemprestimo)
	  {
	  	
	  	saldo = saldo - jurosemprestimo;
	  	
		  
		  if (cont2 == 5)
    {
    jurosemprestimo = 0;
	cont2 = 0;	
	}	  	
	  
	  }
	cont1=0;	
	}	
	if (saldo >= 0)
	{
	printf("(S)aque\n");
    }
    
	printf("(D)epósito\n");
	
	if ((saldo > 0) && (jurosemprestimo == 0))
	{	
	printf("(E)mpréstimo\n");
	}
	
	printf("S(a)ída\n");
		
	printf("Escolha um Metodo \n");		
	scanf("%c",&metodo);
	fflush(stdin);
	
	if (((metodo == 'S') || (metodo == 's')) && (limiteespecial > 0))
	{
	
	saquefun(&saldo, &limiteespecial);
	
	 }
	
	else if ((metodo == 'D') || (metodo == 'd'))
	
	{
	
	depositofun(&saldo, &limiteespecial);
	
	 }
	
	else if (((metodo == 'E') || (metodo == 'e')) && (saldo > 0) && (jurosemprestimo == 0))
	{
	
	emprestimofun(&saldo,&limiteespecial,&jurosemprestimo);
		
	 }
	
	else if((metodo == 'A') || (metodo == 'a'))
     
	 {
	 
	 continuar = 1;
	 
	 	 } 
	
	else
	{
		
	printf("Metodo escolhido invalido \n ");	
		
	}
	
	
	    
	 }
	while (continuar == 0);	
	
	if (saldo >= 0)
	{
	
	printf("Seu Saldo Final é: %.2f R$ \n",saldo);
	
    }
    
    else
    
    {
    	
    printf("Você esté devendo %.2f R$",-saldo);	
    	
	}
	
	}	
		
	else
	
	{
	printf("Saldo invalido \n");
	
	}
	
	system("pause");
	return 0;	
}

//fim main

//função saque
float saquefun(float *saldo,float *limiteespecial)
{
float saque;

printf("Digite o valor de saque \n");
scanf("%f",&saque); 
fflush(stdin);
 if(saque >= 0)
{
  

  if (*saldo >= saque)
  {

  *saldo = *saldo - saque;	
	
  }

  else if (*saldo < saque)
                
  {
  
  *saldo = *saldo - saque;
  *saldo = *saldo * 1.01; 
  *limiteespecial=*limiteespecial + *saldo;
   
  }


 }
 
 else
 
 {
 	
 printf("Saque invalido \n");	
 	
 }

}
//fim saque	

//função deposito	
float depositofun(float *saldo,float *limiteespecial)
{
float deposito;
	
printf("Digite o valor de deposito \n");
scanf("%f",&deposito);
fflush(stdin);
if (deposito >= 0)
{
 

 if (*limiteespecial + deposito >= 1000)
 {

 *saldo = *saldo + deposito;

 *limiteespecial = 1000;	
	
 }

 else  

 {

 *saldo = *saldo + deposito;

 *limiteespecial = 1000 + *saldo;

 }	
	
 }
 
 else
 {
 	
  printf("Depósito invalido \n");	
 	
 }

}
// fim deposito

//função emprestimo
float emprestimofun(float *saldo,float *limiteespecial,float *jurosemprestimo)
{
float valoremprestimo,emprestimovalor;

valoremprestimo = *saldo * 0.4;
if (saldo > 0)
{

printf("Você pode pegar de empréstimo de valor até %.2f .Qual é o valor que você deseja pegar? \n",valoremprestimo);

}


scanf("%f",&emprestimovalor);
fflush(stdin);
if ((emprestimovalor <= valoremprestimo) && (emprestimovalor >= 0))
{
	
*saldo = *saldo + emprestimovalor;

*jurosemprestimo = emprestimovalor * 1.1 + *jurosemprestimo;	
	
*jurosemprestimo = *jurosemprestimo / 5;
}

else

{
	
printf("O valor é maior ou menor que o combinado \n");
	
}


}


//fim emprestimo	
	

