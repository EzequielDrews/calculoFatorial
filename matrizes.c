#include<stdio.h>

main()
{
	int matriz[4][4], j = 0, k = 0;
	
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
}
