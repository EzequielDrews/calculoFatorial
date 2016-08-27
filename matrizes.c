#include<stdio.h>

main()
{
	int matriz[4][4], j = 0, k = 0, i = 0;
	
	srand( (unsigned)time(NULL) );
	
	printf("MATRIZ ORIGINAL:\n\n");
	for(j = 0; j < 4; j++)
	{
		for(k = 0; k < 4; k++)
		{
			matriz[j][k] = rand()%50;
			printf("%02d ", matriz[j][k]);
		}
		printf("\n");
	}
	
	printf("\n\n\n\n");
	
	printf("Diagonal Principal:\n\n");
	for(j = 0; j < 4; j++)
	{
		for(k = 0; k < 4; k++)
		{
			//matriz[j][k] = rand()%50;
			
		if(j == k)
			{
				printf("%3d ", matriz[j][k]);	
					
			}		
			
			for(i=0;i<4;i++)
			{
				printf(" ");
			}
		}
		printf("\n");
		
	}
		
	printf("\n\n\n\n\n");
	
	printf("Exclusão da Diagonal Principal\n");	
	for(j = 0; j < 4; j++)
	{
		for(k = 0; k < 4; k++)
		{
			//matriz[j][k] = rand()%50;
			
		if(j == k)
		{
			printf("--");					
		}
		else
		{
			printf("%02d ", matriz[k][j]);
		}		
			
		}
		printf("\n");
		
	}
}
