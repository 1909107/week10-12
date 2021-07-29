/*With this file we can convert seconds to hours and minutes.*/
#include <stdio.h>
#include <stdlib.h>
char line[100]; 
int main()
{ 
   FILE *archvio_iniciado;


   archvio_iniciado = fopen("C:\\Aven_kal.txt","w");

   if(archvio_iniciado == NULL)
   {
      printf("Error!");   
      exit(1);             
   }

int A, S, M, Z;
   printf("ingrese segundos\n");
   fgets(line, sizeof(line), stdin);
   sscanf(line,"%d" , &Z);

    A = Z / 3600;

    Z = Z % 3600;

    M = Z / 60;
    S = Z % 60;

    printf("Los segundos son  %i\n", S);
    printf("Los minutos son  %i\n", M);
    printf("Las horas son  %i\n", A);
   fclose(archvio_iniciado);

   return 0;
}
