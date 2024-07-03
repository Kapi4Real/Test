#include<stdio.h> 
#include<string.h>
#include<stdlib.h>


int main(void)
{	
	char **tableau;
	int raws =0;
	int lenght= 0;
	int i=0;
	int j=0;

	printf("Largeur du tableau :\n");
	scanf("%d",&raws);
	printf("Longueur du tableau :\n");
        scanf("%d",&lenght);


	tableau = malloc(sizeof(char*)*raws);

	while(i<lenght)
	{
		tableau[i] = malloc(sizeof(char)*lenght);
		i++;
	}

	
	for(i=0;i<raws;i++)
	{
		for(j=0;j<raws;j++)
		{
		 tableau[i][j]='O';
		 printf("%c",tableau[i][j]);
		}
	printf("\n");
	}
	
	i=0;
	while(i<raws)
	{	
		free(tableau[i]);
		i++;
	}
	
	free(tableau);
return 0;
}
