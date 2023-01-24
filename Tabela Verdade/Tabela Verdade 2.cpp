#include <stdio.h>
#include <locale.h>

main()
{
setlocale(LC_ALL,"portuguese");
	
 //char *p[8],*q[8],*r[8],*s[8];
 
 char a1,a2,ap;
 
 int i,continuar=0,opcao;
 
 char p[8]={'V','V','V','V','F','F','F','F'};
 char q[8]={'V','V','F','F','V','V','F','F'};
 char r[8]={'V','F','V','F','V','F','V','F'};
 char s[8]={'0','0','0','0','0','0','0','0'};
 
/* 
    tabela verdade 	
	'V' ^ 'V' = V;
	'V' ^ 'F' = F;
	'F' ^ 'F' = F;
	'F' ^ 'V' = F;
	'V' v 'V' = V;
	'V' v 'F' = V;
	'F' v 'V' = V;
	'F' v 'F' = F;
	'V' > 'V' = V;
	'V' > 'F' = F;
	'F' > 'V' = V;
	'F' > 'F' = V;
	'V' <> 'V' = V;
	'V' <> 'F' = F;
	'F' <> 'V' = F;
	'F' <> 'F' = V;
*/	



do
{	
printf("1- mostrar tabela verdade existente \n");
printf("2- Começar aplicação \n");
printf("3- Sair \n");
scanf("%i",&opcao);
printf("\n");

if (opcao == 1)
{
printf("p - q - r - s \n");
for(i=0;i<8;i++)
{
printf("%c - %c - %c - %c \n",p[i],q[i],r[i],s[i]);
 }
printf("\n"); 		
  }

else if (opcao == 2)
{
	
fflush(stdin);
printf("Digite a p,q,r ou s \n");
scanf("%c",&a1);
fflush(stdin);
printf("\n");

printf("Digite a aplicação  ^(e),v(ou),>(aplica),=(dupla aplicação)\n");
scanf("%c",&ap);
fflush(stdin);
printf("\n");

printf("Digite a p,q,r ou s \n");
scanf("%c",&a2);
fflush(stdin);
printf("\n");

// tabela normal sem negação
if (((a1 == 'p') && (a2 == 'q') && (ap == 'v')) || ((a1 == 'q') && (a2 == 'p') && (ap == 'v')))
{
	
for(i=0;i < 8;i++)	
{
if ((p[i]== 'V') && (q[i]== 'V'))	
	{
	s[i]='V';	
	}
	
	else if ((p[i]== 'V') && (q[i]== 'F'))
	{
	s[i]='V';	
	}	
	
	else if ((p[i]== 'F') && (q[i]== 'V'))
	{
	s[i]='V';	
	}
	
	else if ((p[i]== 'F') && (q[i]== 'F'))
	{
	s[i]='F';	
	}
 }	
}

else if (((a1 == 'p') && (a2 == 'q') && (ap == '^')) || ((a1 == 'q') && (a2 == 'p') && (ap == '^')))
{
	
for(i=0;i < 8;i++)	
{
if ((p[i]== 'V') && (q[i]== 'V'))	
	{
	s[i]='V';	
	}
	
	else if ((p[i]== 'V') && (q[i]== 'F'))
	{
	s[i]='F';	
	}	
	
	else if ((p[i]== 'F') && (q[i]== 'V'))
	{
	s[i]='F';	
	}
	
	else if ((p[i]== 'F') && (q[i]== 'F'))
	{
	s[i]='F';	
	}
 }	
}

else if ((a1 == 'p') && (a2 == 'q') && (ap == '>'))
{
	
for(i=0;i < 8;i++)	
{
if ((p[i]== 'V') && (q[i]== 'V'))	
	{
	s[i]='V';	
	}
	
	else if ((p[i]== 'V') && (q[i]== 'F'))
	{
	s[i]='F';	
	}	
	
	else if ((p[i]== 'F') && (q[i]== 'V'))
	{
	s[i]='V';	
	}
	
	else if ((p[i]== 'F') && (q[i]== 'F'))
	{
	s[i]='V';	
	}
 }	
}

else if ((a1 == 'q') && (a2 == 'p') && (ap == '>'))
{
	
for(i=0;i < 8;i++)	
{
if ((q[i]== 'V') && (p[i]== 'V'))	
	{
	s[i]='V';	
	}
	
	else if ((q[i]== 'V') && (p[i]== 'F'))
	{
	s[i]='F';	
	}	
	
	else if ((q[i]== 'F') && (p[i]== 'V'))
	{
	s[i]='V';	
	}
	
	else if ((q[i]== 'F') && (p[i]== 'F'))
	{
	s[i]='V';	
	}
 }	
}

else if (((a1 == 'p') && (a2 == 'q') && (ap == '=')) || ((a1 == 'q') && (a2 == 'p') && (ap == '=')))
{
	
for(i=0;i < 8;i++)	
{
if ((p[i]== 'V') && (q[i]== 'V'))	
	{
	s[i]='V';	
	}
	
	else if ((p[i]== 'V') && (q[i]== 'F'))
	{
	s[i]='F';	
	}	
	
	else if ((p[i]== 'F') && (q[i]== 'V'))
	{
	s[i]='F';	
	}
	
	else if ((p[i]== 'F') && (q[i]== 'F'))
	{
	s[i]='V';	
	}
 }	
}

else if (((a1 == 'p') && (a2 == 'r') && (ap == 'v')) || ((a1 == 'r') && (a2 == 'p') && (ap == 'v')))
{
	
for(i=0;i < 8;i++)	
{
if ((p[i]== 'V') && (r[i]== 'V'))	
	{
	s[i]='V';	
	}
	
	else if ((p[i]== 'V') && (r[i]== 'F'))
	{
	s[i]='V';	
	}	
	
	else if ((p[i]== 'F') && (r[i]== 'V'))
	{
	s[i]='V';	
	}
	
	else if ((p[i]== 'F') && (r[i]== 'F'))
	{
	s[i]='F';	
	}
 }	
}

else if (((a1 == 'q') && (a2 == 'r') && (ap == 'v')) || ((a1 == 'r') && (a2 == 'q') && (ap == 'v')))
{
	
for(i=0;i < 8;i++)	
{
if ((q[i]== 'V') && (r[i]== 'V'))	
	{
	s[i]='V';	
	}
	
	else if ((q[i]== 'V') && (r[i]== 'F'))
	{
	s[i]='V';	
	}	
	
	else if ((q[i]== 'F') && (r[i]== 'V'))
	{
	s[i]='V';	
	}
	
	else if ((q[i]== 'F') && (r[i]== 'F'))
	{
	s[i]='F';	
	}
 }	
}

else if (((a1 == 'p') && (a2 == 'r') && (ap == '^')) || ((a1 == 'r') && (a2 == 'p') && (ap == '^')))
{
	
for(i=0;i < 8;i++)	
{
if ((p[i]== 'V') && (r[i]== 'V'))	
	{
	s[i]='V';	
	}
	
	else if ((p[i]== 'V') && (r[i]== 'F'))
	{
	s[i]='F';	
	}	
	
	else if ((p[i]== 'F') && (r[i]== 'V'))
	{
	s[i]='F';	
	}
	
	else if ((p[i]== 'F') && (r[i]== 'F'))
	{
	s[i]='F';	
	}
 }	
}

else if (((a1 == 'q') && (a2 == 'r') && (ap == '^')) || ((a1 == 'r') && (a2 == 'q') && (ap == '^')))
{
	
for(i=0;i < 8;i++)	
{
if ((q[i]== 'V') && (r[i]== 'V'))	
	{
	s[i]='V';	
	}
	
	else if ((q[i]== 'V') && (r[i]== 'F'))
	{
	s[i]='F';	
	}	
	
	else if ((q[i]== 'F') && (r[i]== 'V'))
	{
	s[i]='F';	
	}
	
	else if ((q[i]== 'F') && (r[i]== 'F'))
	{
	s[i]='F';	
	}
 }	
}

else if ((a1 == 'p') && (a2 == 'r')&& (ap == '>'))
{
	
for(i=0;i < 8;i++)	
{
if ((p[i]== 'V') && (r[i]== 'V'))	
	{
	s[i]='V';	
	}
	
	else if ((p[i]== 'V') && (r[i]== 'F'))
	{
	s[i]='F';	
	}	
	
	else if ((p[i]== 'F') && (r[i]== 'V'))
	{
	s[i]='V';	
	}
	
	else if ((p[i]== 'F') && (r[i]== 'F'))
	{
	s[i]='V';	
	}
 }	
}

else if ((a1 == 'q') && (a2 == 'r')&& (ap == '>'))
{
	
for(i=0;i < 8;i++)	
{
if ((q[i]== 'V') && (r[i]== 'V'))	
	{
	s[i]='V';	
	}
	
	else if ((q[i]== 'V') && (r[i]== 'F'))
	{
	s[i]='F';	
	}	
	
	else if ((q[i]== 'F') && (r[i]== 'V'))
	{
	s[i]='V';	
	}
	
	else if ((q[i]== 'F') && (r[i]== 'F'))
	{
	s[i]='V';	
	}
 }	
}

else if ((a1 == 'r') && (a2 == 'p')&& (ap == '>'))
{
	
for(i=0;i < 8;i++)	
{
if ((r[i]== 'V') && (p[i]== 'V'))	
	{
	s[i]='V';	
	}
	
	else if ((r[i]== 'V') && (p[i]== 'F'))
	{
	s[i]='F';	
	}	
	
	else if ((r[i]== 'F') && (p[i]== 'V'))
	{
	s[i]='V';	
	}
	
	else if ((r[i]== 'F') && (p[i]== 'F'))
	{
	s[i]='V';	
	}
 }	
}

else if ((a1 == 'r') && (a2 == 'q')&& (ap == '>'))
{
	
for(i=0;i < 8;i++)	
{
if ((r[i]== 'V') && (q[i]== 'V'))	
	{
	s[i]='V';	
	}
	
	else if ((r[i]== 'V') && (q[i]== 'F'))
	{
	s[i]='F';	
	}	
	
	else if ((r[i]== 'F') && (q[i]== 'V'))
	{
	s[i]='V';	
	}
	
	else if ((r[i]== 'F') && (q[i]== 'F'))
	{
	s[i]='V';	
	}
 }	
}

else if (((a1 == 'p') && (a2 == 'r')&& (ap == '=')) || ((a1 == 'r') && (a2 == 'p') && (ap == '=')))
{
	
for(i=0;i < 8;i++)	
{
if ((p[i]== 'V') && (r[i]== 'V'))	
	{
	s[i]='V';	
	}
	
	else if ((p[i]== 'V') && (r[i]== 'F'))
	{
	s[i]='F';	
	}	
	
	else if ((p[i]== 'F') && (r[i]== 'V'))
	{
	s[i]='F';	
	}
	
	else if ((p[i]== 'F') && (r[i]== 'F'))
	{
	s[i]='V';	
	}
 }	
}

else if (((a1 == 'q') && (a2 == 'r')&& (ap == '=')) || ((a1 == 'r') && (a2 == 'q') && (ap == '=')))
{
	
for(i=0;i < 8;i++)	
{
if ((q[i]== 'V') && (r[i]== 'V'))	
	{
	s[i]='V';	
	}
	
	else if ((q[i]== 'V') && (r[i]== 'F'))
	{
	s[i]='F';	
	}	
	
	else if ((q[i]== 'F') && (r[i]== 'V'))
	{
	s[i]='F';	
	}
	
	else if ((q[i]== 'F') && (r[i]== 'F'))
	{
	s[i]='V';	
	}
 }	
}

else if (((a1 == 'p') && (a2 == 's')&& (ap == 'v')) || ((a1 == 's') && (a2 == 'p') && (ap == 'v')))
{
	
for(i=0;i < 8;i++)	
{
if ((p[i]== 'V') && (s[i]== 'V'))	
	{
	s[i]='V';	
	}
	
	else if ((p[i]== 'V') && (s[i]== 'F'))
	{
	s[i]='V';	
	}	
	
	else if ((p[i]== 'F') && (s[i]== 'V'))
	{
	s[i]='V';	
	}
	
	else if ((p[i]== 'F') && (s[i]== 'F'))
	{
	s[i]='F';	
	}
 }	
}

else if (((a1 == 'p') && (a2 == 's')&& (ap == '^')) || ((a1 == 's') && (a2 == 'p') && (ap == '^')))
{
	
for(i=0;i < 8;i++)	
{
if ((p[i]== 'V') && (s[i]== 'V'))	
	{
	s[i]='V';	
	}
	
	else if ((p[i]== 'V') && (s[i]== 'F'))
	{
	s[i]='F';	
	}	
	
	else if ((p[i]== 'F') && (s[i]== 'V'))
	{
	s[i]='F';	
	}
	
	else if ((p[i]== 'F') && (s[i]== 'F'))
	{
	s[i]='F';	
	}
 }	
}

else if ((a1 == 'p') && (a2 == 's') && (ap == '>'))
{
	
for(i=0;i < 8;i++)	
{
if ((p[i]== 'V') && (s[i]== 'V'))	
	{
	s[i]='V';	
	}
	
	else if ((p[i]== 'V') && (s[i]== 'F'))
	{
	s[i]='F';	
	}	
	
	else if ((p[i]== 'F') && (s[i]== 'V'))
	{
	s[i]='V';	
	}
	
	else if ((p[i]== 'F') && (s[i]== 'F'))
	{
	s[i]='V';	
	}
 }	
}

else if ((a1 == 's') && (a2 == 'p') && (ap == '>'))
{
	
for(i=0;i < 8;i++)	
{
if ((s[i]== 'V') && (p[i]== 'V'))	
	{
	s[i]='V';	
	}
	
	else if ((s[i]== 'V') && (p[i]== 'F'))
	{
	s[i]='F';	
	}	
	
	else if ((s[i]== 'F') && (p[i]== 'V'))
	{
	s[i]='V';	
	}
	
	else if ((s[i]== 'F') && (p[i]== 'F'))
	{
	s[i]='V';	
	}
 }	
}

else if (((a1 == 'p') && (a2 == 's') && (ap == '=')) || ((a1 == 's') && (a2 == 'p') && (ap == '=')))
{
	
for(i=0;i < 8;i++)	
{
if ((p[i]== 'V') && (s[i]== 'V'))	
	{
	s[i]='V';	
	}
	
	else if ((p[i]== 'V') && (s[i]== 'F'))
	{
	s[i]='F';	
	}	
	
	else if ((p[i]== 'F') && (s[i]== 'V'))
	{
	s[i]='F';	
	}
	
	else if ((p[i]== 'F') && (s[i]== 'F'))
	{
	s[i]='V';	
	}
 }	
}

else if (((a1 == 's') && (a2 == 'q')&& (ap == 'v')) || ((a1 == 'q') && (a2 == 's') && (ap == 'v')))
{
	
for(i=0;i < 8;i++)	
{
if ((s[i]== 'V') && (q[i]== 'V'))	
	{
	s[i]='V';	
	}
	
	else if ((s[i]== 'V') && (q[i]== 'F'))
	{
	s[i]='V';	
	}	
	
	else if ((s[i]== 'F') && (q[i]== 'V'))
	{
	s[i]='V';	
	}
	
	else if ((s[i]== 'F') && (q[i]== 'F'))
	{
	s[i]='F';	
	}
 }	
}

else if (((a1 == 's') && (a2 == 'q')&& (ap == '^')) || ((a1 == 'q') && (a2 == 's') && (ap == '^')))
{
	
for(i=0;i < 8;i++)	
{
if ((s[i]== 'V') && (q[i]== 'V'))	
	{
	s[i]='V';	
	}
	
	else if ((s[i]== 'V') && (q[i]== 'F'))
	{
	s[i]='F';	
	}	
	
	else if ((s[i]== 'F') && (q[i]== 'V'))
	{
	s[i]='F';	
	}
	
	else if ((s[i]== 'F') && (q[i]== 'F'))
	{
	s[i]='F';	
	}
 }	
}

else if ((a1 == 's') && (a2 == 'q') && (ap == '>'))
{
	
for(i=0;i < 8;i++)	
{
if ((s[i]== 'V') && (q[i]== 'V'))	
	{
	s[i]='V';	
	}
	
	else if ((s[i]== 'V') && (q[i]== 'F'))
	{
	s[i]='F';	
	}	
	
	else if ((s[i]== 'F') && (q[i]== 'V'))
	{
	s[i]='V';	
	}
	
	else if ((s[i]== 'F') && (q[i]== 'F'))
	{
	s[i]='V';	
	}
 }	
}

else if ((a1 == 'q') && (a2 == 's') && (ap == '>'))
{
	
for(i=0;i < 8;i++)	
{
if ((q[i]== 'V') && (s[i]== 'V'))	
	{
	s[i]='V';	
	}
	
	else if ((q[i]== 'V') && (s[i]== 'F'))
	{
	s[i]='F';	
	}	
	
	else if ((q[i]== 'F') && (s[i]== 'V'))
	{
	s[i]='V';	
	}
	
	else if ((q[i]== 'F') && (s[i]== 'F'))
	{
	s[i]='V';	
	}
 }	
}

else if (((a1 == 's') && (a2 == 'q')&& (ap == '=')) || ((a1 == 'q') && (a2 == 's') && (ap == '=')))
{
	
for(i=0;i < 8;i++)	
{
if ((s[i]== 'V') && (q[i]== 'V'))	
	{
	s[i]='V';	
	}
	
	else if ((s[i]== 'V') && (q[i]== 'F'))
	{
	s[i]='F';	
	}	
	
	else if ((s[i]== 'F') && (q[i]== 'V'))
	{
	s[i]='F';	
	}
	
	else if ((s[i]== 'F') && (q[i]== 'F'))
	{
	s[i]='V';	
	}
 }	
}

else if (((a1 == 'r') && (a2 == 's')&& (ap == 'v')) || ((a1 == 's') && (a2 == 'r') && (ap == 'v')))
{
	
for(i=0;i < 8;i++)	
{
if ((r[i]== 'V') && (s[i]== 'V'))	
	{
	s[i]='V';	
	}
	
	else if ((r[i]== 'V') && (s[i]== 'F'))
	{
	s[i]='V';	
	}	
	
	else if ((r[i]== 'F') && (s[i]== 'V'))
	{
	s[i]='V';	
	}
	
	else if ((r[i]== 'F') && (s[i]== 'F'))
	{
	s[i]='F';	
	}
 }	
}

else if (((a1 == 'r') && (a2 == 's')&& (ap == '^')) || ((a1 == 's') && (a2 == 'r') && (ap == '^')))
{
	
for(i=0;i < 8;i++)	
{
if ((r[i]== 'V') && (s[i]== 'V'))	
	{
	s[i]='V';	
	}
	
	else if ((r[i]== 'V') && (s[i]== 'F'))
	{
	s[i]='F';	
	}	
	
	else if ((r[i]== 'F') && (s[i]== 'V'))
	{
	s[i]='F';	
	}
	
	else if ((r[i]== 'F') && (s[i]== 'F'))
	{
	s[i]='F';	
	}
 }	
}

else if ((a1 == 'r') && (a2 == 's') && (ap == '>'))
{
	
for(i=0;i < 8;i++)	
{
if ((r[i]== 'V') && (s[i]== 'V'))	
	{
	s[i]='V';	
	}
	
	else if ((r[i]== 'V') && (s[i]== 'F'))
	{
	s[i]='F';	
	}	
	
	else if ((r[i]== 'F') && (s[i]== 'V'))
	{
	s[i]='V';	
	}
	
	else if ((r[i]== 'F') && (s[i]== 'F'))
	{
	s[i]='V';	
	}
 }	
}

else if ((a1 == 's') && (a2 == 'r') && (ap == '>'))
{
	
for(i=0;i < 8;i++)	
{
if ((s[i]== 'V') && (r[i]== 'V'))	
	{
	s[i]='V';	
	}
	
	else if ((s[i]== 'V') && (r[i]== 'F'))
	{
	s[i]='F';	
	}	
	
	else if ((s[i]== 'F') && (r[i]== 'V'))
	{
	s[i]='V';	
	}
	
	else if ((s[i]== 'F') && (r[i]== 'F'))
	{
	s[i]='V';	
	}
 }	
}

else if (((a1 == 'r') && (a2 == 's') && (ap == '=')) || ((a1 == 's') && (a2 == 'r') && (ap == '=')))
{
	
for(i=0;i < 8;i++)	
{
if ((r[i]== 'V') && (s[i]== 'V'))	
	{
	s[i]='V';	
	}
	
	else if ((r[i]== 'V') && (s[i]== 'F'))
	{
	s[i]='F';	
	}	
	
	else if ((r[i]== 'F') && (s[i]== 'V'))
	{
	s[i]='F';	
	}
	
	else if ((r[i]== 'F') && (s[i]== 'F'))
	{
	s[i]='V';	
	}
 }	
}

// final da tabela normal sem negação

else
{
	
printf("Deu errado \n");	
printf("\n");	
}	
	
	} 

else if (opcao == 3)
{
	
continuar = 1;	
	
}

else 
{
fflush(stdin);	
opcao = 0;		
printf("Erro \n");
printf("\n");
	
}

}while (continuar == 0);

}
