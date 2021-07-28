/*Write a function that takes a single string as its argument and 
returns a pointer to the first nonwhite character in the string.
*/
#include <stdio.h>
 char* findChar(char *cadenas);
 int main() {
     char *variable1 = "cadena";
    char *variable2= "";
     char *variable3 = "   \t    \n   \
                         ";
  
  
      char *variable4 = "\t   \n     \
                                   Nada";
 
     char *espacio_en_blanco;
  
      espacio_en_blanco = findChar(variable4);
  
      if( espacio_en_blanco != NULL ) {
          printf("\"%s\"\n", espacio_en_blanco );
      }
  
      return 0;
  }
  
  
  char* findChar(char *cadenas) {
  
      char c;
  
      if ( *cadenas == '\0' ) {
          printf("Esta es una cadena vacia.\n");
          return (NULL);
      }
  
      while( *cadenas != '\0' ) {
          c = *cadenas;
  
          if( c == ' ' || c == '\t' || c== '\n' )
              ++cadenas;
          else
              return cadenas;
  
      }
 
      printf("No hay ningun espacio en blanco en la cadena\n");
     return (NULL);
  }
