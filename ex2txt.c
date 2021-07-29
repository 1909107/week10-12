/* With this program we can enter a number "value" to know with alphabetical scale, if we have a passing grade. */
#include <stdio.h>
#include <stdlib.h>
char Grade[1000];
int main(void) {
	
	float Calificacion;

	FILE*fichero;
	fichero=fopen("Aven_kalC.txt","wt");
  
  printf("Ingrese una un numero para calificar\n");
  fgets(Grade, sizeof(Grade),stdin);
  sscanf(Grade, "%f", &Calificacion);
 
  if (91<Calificacion && 93>Calificacion) 
    printf("Aven_kalC: A-\n");
    else if (94<=Calificacion && 97>Calificacion)
      printf("Aven_kalC: A\n");
    else if (98< Calificacion && 100>=Calificacion)
      printf ("Aven_kalC: A+\n");

    if (81< Calificacion && 83>Calificacion)
      printf("Aven_kalC: B-\n");
        else if (84<=Calificacion && 87>Calificacion)
      printf ("Aven_kalC: B\n");
        else if (88< Calificacion && 90>=Calificacion)
      printf ("Aven_kalC: B+\n");


    if (71<Calificacion && 73>Calificacion)
      printf("Aven_kalC: C-\n");
      else if (74<=Calificacion && 77>Calificacion)
        printf ("Aven_kalC: C\n");
      else if (78< Calificacion && 80>=Calificacion)
        printf ("Aven_kalC: C+\n");

    if (61< Calificacion && 63>Calificacion)
      printf("Aven_kalC: D-\n");
      else if (64<=Calificacion && 67>Calificacion)
        printf ("Aven_kalC: D\n");
      else if (68< Calificacion && 70>=Calificacion)
        printf ("Aven_kalC: D+\n");

    if (0< Calificacion && 60>=Calificacion)
      printf("Aven_kalC: F\n");    

fprintf(fichero,"Tu calificación es: %.2f",Calificacion);
fclose(fichero);

  return 0;
}
