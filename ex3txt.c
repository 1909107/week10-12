/*With this program we will be able to calculate the area of the cylinder (having the values inside the program, without being able to get an output that allows the external input to perform the calculations).*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int Area;
   FILE *Cilindro;

   
   Cilindro = fopen("C:\\Aven_kal_AreadeCy.txt","w");

   if(Cilindro == NULL)
   {
      printf("Error!");   
      exit(1);
   }

float perimetro, radio, altura, area_por_base, volumen, Atotal;  
 
    perimetro=3.14;
    radio=15;   
    altura=30;   
    area_por_base= 2*perimetro*radio* altura;
    Atotal= (area_por_base)+(area_por_base);
    volumen= area_por_base* altura;

  printf("El area del cilindro es %.2f y el volumen es %.2f" , Atotal, volumen );


   fprintf(Cilindro,"El area del cilindro es %.2f cm^2\n", Atotal);
   fprintf(Cilindro, "el volumen es %.2f cm^3",volumen);
   fclose(Cilindro);

   return 0;
}
