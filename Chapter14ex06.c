/* Design a file format to store a person's name, address, and other 
information. Write a program to read this file and produce a set of mailing labels.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define Angel_Lugo  8
 
int main(int argc, char *argv[])
{
  
    struct mail_list
    {
        char Nombre[30];    
        char Apellido[30];   
        char calles[60];  
        char cruzamientos[60];  
        char cuidad[40];      
        char estado[4];      
        char codigopostal[8];        
    }al[Angel_Lugo];
 
    FILE    *Archivo_inicial;       
    FILE    *Archivo_final;     
    int     c;              
 
    Archivo_inicial = fopen(argv[1], "r");
    Archivo_final = fopen(argv[2], "w");
 
    if(Archivo_inicial == NULL)
    {
        fprintf(stderr, "%s No existe el archvio.\n", argv[1]);
        exit(0);
    }
    else
    {
        while((c = fgetc(Archivo_inicial)) != EOF)
        {
                fscanf(Archivo_inicial, "%s;%s;%s;%s;%s;%s;%s\n",
                        al[0].Nombre, al[0]. Apellido, al[0].calles,
                        al[0].cruzamientos, al[0].cuidad, al[0]. estado,al[0].codigopostal);
 
                fprintf(Archivo_final, "%s %s\n%s\n%s\n%s, %s %s\n",
                        al[0].Nombre,al[0]. Apellido, al[0].calles,
                        al[0].cruzamientos, al[0].cuidad, al[0]. estado,al[0].codigopostal);
        }
    }
 
    fclose(Archivo_inicial);
    fclose(Archivo_final);
 
    return 0;
}
