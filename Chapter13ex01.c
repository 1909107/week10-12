/* Write a program that uses pointers to set each element of an array 
to zero.
*/
#include <stdio.h> 
#define variables 10 
int main()
{
	int valor[variables] = {2, 4, 5, 6, 8}; 
	int *Array; 
	for (Array = &valor[0];Array <= &valor[variables]; ++Array) { 
		*Array = 0; 
	}
;
	for (int i = 1; i <= variables; ++i) 
		printf("Cadena de datos [%d] = %d\n", i, valor[i]); 
	return 0;
}
