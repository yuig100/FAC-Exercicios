#include<stdio.h>

//1
int stringlen(char S[])
{

int i;	
	
for(i=0;S[i] != '\0';i++);		
	
return i;	
	
}
//1

//2
int rtrim(char V[])
{
	int i,quant=stringlen(V),s;
	
	for(i=quant - 1;(((V[i] == ' ') || (V[i] == '\0')) && ( i >= 0));i--);
	
	V[i+1] = '\0';
  
  }
 //2
 
 //3
int ltrim(char V[])
 {
 	
 int i,j;
 int quant;
 
quant=stringlen(V);	

for(i=0;((V[i] == ' ') && ( i < quant));i++)
 {
 	if (V[i] == ' ')
 	{
 		for(j=i;j<quant;j++)
 		{
 			
 		V[j] = V[j+1];	
 			
		 }
 		
 		i--;
 		
	 }
 	}
}
        


//4

//5
int trim(char V[])
{
int i,quant,j;
 
 quant = stringlen(V);	
 
 for(i=0;(i < quant);i++)
 {
 	if (V[i] == ' ')
 	{
 		for(j=i;j<quant;j++)
 		{
 			
 		V[j] = V[j+1];	
 			
		 }
 		
 		i--;
 		
	 }
 	}
}
//5

//6
int deslocInicio(char V[],char c)
{

int i,quant = stringlen(V),j=0;

char Ve[quant];

for(i=0;i<quant;i++)
{
	if (V[i] == c )
	{
	Ve[j] = c;
	j++;	
	}
}

for(i=0;i<quant;i++)
{
	if (V[i] != c )
	{
	Ve[j] =	V[i];
	j++;	
	}
}

for(i=0;i<quant;i++)
{	
V[i] = Ve[i];
}
	
}
//6

//7	
int deslocFim(char V[],char c)
{
	
int cont=0,j=0,i,quant= stringlen(V);
char Ve[quant];

for(i=0;i<quant;i++)
{
	if (V[i] != c )
	{
	Ve[j] =	V[i];
	j++;	
	}	
}

for(i=0;i<quant;i++)
{
	if (V[i] == c )
	{
	Ve[j] = c;
	j++;	
	}
}

for(i=0;i<quant;i++)
{	
V[i] = Ve[i];
}

}	
//7

//8	
int copyN(char V2[],char V1[],int N)
{
	
int i;

for(i=0;i < N;i++)
{
	
V2[i] = V1[i];	
	
}	

}
//8

//9	
int concatN(char V2[],char V1[],int N)
{

int i,j;

for(i=0;V2[i] != '\0' ;i++){ j = i;}

for(i=0;i<N;i++)
{
	
V2[j] = V1[i];
j++;	
	
}

}
//9

//10
int comum(char V2[],char V1[])
{
int i,quant= stringlen(V1);

	for (i=0;i<quant;i++)
	{
		
	if (V1[i] == V2[i])
	{
		
		return V1[i];
		}	
	}
	
	return '\0';
}
//10

//11
int substring(char V2[],char V1[])
{

int i=0,quant1= stringlen(V1),quant2= stringlen(V2),cont=0,j=0,valor;
//                0   1   2    3  4   5   6
//char V1[4] =i {'a','b','c','\0'};
//char V2[7] =j {'p','a','b','a','b','c','\0'};


for (i=0,j=0;(i < quant1) && (j < quant2);)
{

if (V1[i] == V2[j])
{
	
i++;
j++;	
	
}

else if (V1[i] != V2[j])
{
i = 0;
}

if ((V1[i] != V2[j]) && (i == 0))
{
j++;
}

}

if (i == quant1)
{
	
return j - i;	
	
	
}

else
{
	
return -1;	
	
}


}
//11

//12	
float strToNum(char V[])
{
int i,quant= stringlen(V),cont=0,cont2=0;

float num=0,raz=1;
	
{
		
for (i=quant-1;i >= 0;i--)
{
	if (V[i] >= '0' && V[i] <= '9')
	{
		
	cont++;
	
	num = num + ((V[i] - 48) * raz);
	raz = raz * 10;	
		
	}
	
	else if (V[i] == '.' )
	{
		
	cont2++;
	
	num = (num / raz);
	
	raz = 1;	
		
	}
	
	
	
	
}

if ((quant == cont+cont2)  && (cont2 == 1)){
return num;	
}
}

}	
//12


 

