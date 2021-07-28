/* Write a program that reads a file containing a list of numbers, and 
then writes two files, one with all numbers divisible by three and another containing 
all the other number*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const char archivo[] = "datos.txt"; 

int main()
{
	int  Numeros_de_archvios;         
	FILE *Archivo_uno;     
	FILE *Archivo_divisible_en_tres; 
	FILE *Todos_los_archivos_restantes;    
	char *line = NULL;   
	size_t  len = 0;   
	Archivo_uno = fopen(archivo,"r");
	Archivo_divisible_en_tres = fopen("divisible en tres.txt", "w");
	Todos_los_archivos_restantes = fopen("Archivos restantes.txt", "w"); 
	if (Archivo_uno == NULL) {
		printf("No se pudo encontrar el archvio solicitado -%s- \n",archivo); 
		exit(0);
	}
	while (getline(&line, &len,Archivo_uno) != -1){ 
		sscanf(line, "%d", & Numeros_de_archvios); 
		if (( Numeros_de_archvios % 3) == 0)
			fprintf(Archivo_divisible_en_tres, "%d\n",  Numeros_de_archvios);
		else
			fprintf(Todos_los_archivos_restantes, "%d\n",  Numeros_de_archvios); 
	}
	free(line);
	fclose(Archivo_uno);
	fclose(Archivo_divisible_en_tres);
	fclose(Todos_los_archivos_restantes);
  printf("Finalizado\n");
	return 0;
}
