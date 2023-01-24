# include <stdio.h>
# include <stdlib.h>

main()

{
	
	int p,i,mulheres=0,homens=0,hab=50;
	float altura,alturaf=0,mediaalturaf=0,percentualhomens=0,alturapopulacao=0,mediapopulacao=0,percentual=0;
	float altmaior=0,altmenor=500;
	char sexo;
	
	do
    {
	  
	  for (i=1;i <= hab;i++)
	  {
	  
	  fflush(stdin);
	  printf("Digite o seu sexo (m/f) \n");
	  scanf("%c",&sexo);
	  fflush(stdin);
	  
	  printf("Digite a sua altura\n");
	  scanf("%f",&altura); 
	  
	  alturapopulacao = altura + alturapopulacao;
	 
	 
	 
	 if (altmaior < altura)
	 {
	 
	altmaior = altura;
	 	
	 }
	 
	 
	 else 
	 
	 if (altmenor > altura)
	 
	 {
	 	
	 	altmenor = altura;
	 	
	 }
	 
	 {
	  
	  if (( sexo == 'f') || ( sexo == 'F'))
	  {
	  	
	  	alturaf= altura + alturaf;
	  	
		mulheres++;
	  	
	  	
	  }
	  
	  else
	  
	  if ((sexo == 'm') || ( sexo == 'M'))
	  {
	  	
	  	homens++;
	  	
	  }
	  
	  else
	  
	  {
	  	printf("Erro!!! \n");
	  	
	  }
	  
    }
	  
	  }
	  
	  percentual = 100 / hab;
	  
	  mediaalturaf = alturaf / mulheres ;
	  
	  percentualhomens = (percentual * homens);
	  
	  mediapopulacao= alturapopulacao / hab;
	  
	  printf("A menor das altura e: %.1f\n",altmenor);
	  
	  printf("A maior das alturas e: %.1f\n",altmaior);
	  
	  printf("A media das alturas das mulheres e: %.1f \n",mediaalturaf);
	  
	  printf("A media de altura da populacao e: %.1f\n",mediapopulacao);
	  
	  printf("O percentual de homens na populacao e: %.0f %% \n",percentualhomens);
	  
	  printf("\nDigite O para reiniciar o programa ou 1 para sair do programa \n");
	  scanf("i%",&p);
	
	} while ( p == 0);
	
	
	
	
	
	
	
	
	
	
	
}
