#include <stdio.h>

int main()
{
	FILE *fp;
	char filename[100];
	char ch;
	int wordcount = 0, characters = 0;
	
printf("Enter a filename: ");
gets(filename);

fp = fopen(filename, "r");

if (fp)
{
	while ((ch=getc(fp)) != EOF) 
	{
		characters++;
		
		if (ch == ' ' || ch == '\n')
		{++wordcount;}
	}
			
			if (characters > 0)
				{
					++wordcount;
				}
}

else
	{
		printf("Failed to open the file\n");
	}

printf("Words : %d \n", wordcount);

getchar();
return(0);
}

	
	