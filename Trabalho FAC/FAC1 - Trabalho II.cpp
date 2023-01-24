#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int insercao(int *vetor,int *quant,int val);

int remocao(int *vetor,int *quant,int num);

int remocaoposicao(int *vetor,int *quant,int posicao);

int alteracao(int *vetor,int quant,int valor,int valor2);

int busca(int *vetor,int quant,int b1);

int exibir(int *vetor,int quant);

main()
{
setlocale(LC_ALL,"portuguese");
   
   int *vetor;

   int quant=0,continuar=0,opcao,i,val,num,posicao,valor,valor2,b1;	

do{
	
	printf("1 - Inserção de um novo número \n");
	
	printf("2 - Remoção de todas as ocorrências de determinado valor \n");
	
	printf("3 - Remoção do elemento que encontra-se em uma dada posição \n");
	
	printf("4 - Alteração de todas as ocorrências de um valor por outro \n");
	
	printf("5 - Busca de determinado número, retornando posição de sua primeira ocorrência \n");
	
	printf("6 - Exibição de todos os elementos do vetor. \n");
	
	printf("7 - Sair \n");
	
	scanf("%i",&opcao);
	
	if(opcao == 1)
	{
	
	printf("Digite um valor \n");
    scanf("%i",&val);
		
	insercao(vetor,&quant,val);	
	}
	
	else if (opcao == 2)
	{
	
	printf("Escolha um numero para remover \n");
    scanf("%i",&num);
   	
	remocao(vetor,&quant,num);	
		
	}
	
	else if (opcao == 3)
	{
	
	printf("Escolha a posição do elemento que voce quer eliminar \n");
    scanf("%i",&posicao);
	if ((posicao < quant) && (posicao >=0))
	{
		
	remocaoposicao(vetor,&quant,posicao);
}
	}
	
	else if (opcao == 4)
	{
	printf("Escolha um valor para alterar \n");
	scanf("%i",&valor);
	
	printf("Escolha um valor para colocar no lugar\n" );
	scanf("%i",&valor2);
		
	alteracao(vetor,quant,valor,valor2);
	
	}
	
	else if (opcao == 5)
	{
	
	printf("Digite um determinado numero \n");
    scanf("%i",&b1);
		
	printf("%i \n",busca(vetor,quant,b1));	
		
	}
	
	else if (opcao == 6)
	{
		
	exibir(vetor,quant);
		
	}
	
	else if (opcao == 7)
	{
		
	continuar = 1;	
		
	}
	
	
	
	
  }while (continuar == 0);
}

int insercao(int *vetor,int *quant,int val)
{

   int cont=0,i=0,f;	
   
   for(i=0;i < *quant;i++)
   {
   	
   	if (vetor[i] == val)
   	{
   		cont++;
   		}
   	}
   	
   	if (cont < val)
   	{
   	*quant=*quant +1;	
   	vetor[*quant-1]=val;
   }
   	
   	else
   	
   	{
   		printf("Numero ultrapassa a quantidade maxima permitida\n");
   	}

cont = 0;

}




int remocao(int *vetor,int *quant,int num)
{
	int  i,f,j,cont=0;
	
	for (i=0;i < *quant;i++)
   {
   	
   	if (vetor[i] == num)
   	{
   		for(f=i,j = *quant;f < j;f++)
   		{
   			
   			vetor[f] = vetor[f+1];
   			
		   }
   		i--;
   		cont++;
   		}
   	}	
	
	*quant = *quant - cont;
}



int remocaoposicao(int *vetor,int *quant,int posicao)
{
int f,j;	
	
for(f=posicao,j = *quant;f < j;f++)
   		{
   			
   			vetor[f] = vetor[f+1];
   			
		   }	
*quant = *quant - 1;	
}



int alteracao(int *vetor,int quant,int valor,int valor2)
{
	int i,cont=0;
	
    for(i=0;i < quant;i++)
	{
		
	if ((cont < valor2) && (vetor[i] == valor))
	{
		cont++;
		vetor[i] = valor2;
	 }	
		
	}
	cont=0;
}



int busca(int *vetor,int quant,int b1)
{
   int i;
   
   for (i=0;i<quant;i++)
   {
   	if(vetor[i] == b1)
   	{
   		return i;
	   }
   	}	
}



int exibir(int *vetor,int quant)
{
	int i;
	
	for(i=0;i < quant;i++)
	{
		
		printf("%i-",vetor[i]);
		
	}
	printf("\n");
}


