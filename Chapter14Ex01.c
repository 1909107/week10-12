/*: Write a program that reads a file and then counts the number of 
lines in it.*/
#include <stdio.h>
#define MAX_FILE_LINE 100
char line[100]; 
int main()
{
	FILE *x;
	int count = 0; 
	char fileline [MAX_FILE_LINE];
	char c; 

	printf("Ingrese el numero de lineas ");
 fgets(line, sizeof(line), stdin);
	sscanf(line,"%s", fileline);

	
	x = fopen(fileline, "r");

	if (x == NULL)
	{
		printf("No se puedo abrir este  archivo %s", fileline);
		return 0;
	}

	for (c = getc(x); c != EOF; c = getc(x))
		if (c == '\n') 
			count = count + 1;

	fclose(x);
	printf("El archvio %s tiene %d estas lineas \n ", fileline, count);

	return 0;
}
