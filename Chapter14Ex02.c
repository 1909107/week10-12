/*Write a program to copy a file, expanding all tabs to multiple 
spaces.*/
#include <stdio.h>                
#include <stdlib.h>               

int main(void)
{             
    char Inicio[] = "Aven_kal.txt";
    char Salida[] = "Cambio_de_archvio.txt"; 
    FILE *InicioA;
    FILE *SalidaA; 
    int c;                    
    int i;
    int tab = 2; 

    InicioA = fopen(Inicio, "r");
    if (InicioA == NULL) {
        fprintf(stderr, "No se encontro el archvio %s\n", Inicio); 
        exit(0);
    }

   SalidaA = fopen(Salida, "w");
    if (SalidaA == NULL) {
        fprintf(stderr, "No se encontro el archivo %s\n", Salida);
        exit(0);
    }

    while (1) {
        c = fgetc(InicioA);
        if (c == ' ') { 
            c = ' ';
            for (i = 0; i <= tab; i++) {
                fputc(c, SalidaA);
            }
        }
        if (c == EOF) 
            break;

        fputc(c, SalidaA);
    }

    fclose(InicioA); 
    fclose(SalidaA); 

    return 0;
}
