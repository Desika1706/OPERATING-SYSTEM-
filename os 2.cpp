#include <stdio.h>
#include <stdlib.h> 

int main()
{
	FILE *f1, *f2;
	char name[100], c;

	printf("Enter the name to open for reading \n");
	scanf("%s", name);


	f1 = fopen(name, "r");
	if (f1 == NULL)
	{
		printf("Cannot open file %s \n", name);
		exit(0);
	}

	printf("Enter the name to open for writing \n");
	scanf("%s", name);

	f2 = fopen(name, "w");
	if (f2 == NULL)
	{
		printf("Cannot open file %s \n", name);
		exit(0);
	}


	c = fgetc(f1);
	while (c != EOF)
	{
		fputc(c, f2);
		c = fgetc(f1);
	}

	printf("\nContents copied to %s", name);

	fclose(f1);
	fclose(f2);
	return 0;
}

