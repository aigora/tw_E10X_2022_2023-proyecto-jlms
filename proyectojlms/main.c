#include <stdio.h>
#include<string.h>
int main()
{
  FILE *pf;
  char accion[10];
  char uno[] = "abrir";
  // Abrimos fichero para escritura
  pf = fopen("generacion.txt", "r");
  printf("bienvenido al programa\n");
  printf("a continuacion, eliga la acccion que quiere realizar\n");
  scanf("%9[^\n]",accion);
  if(strcmp(accion,uno) == 0)
  {
      printf("has seleccionado abrir el fichero\n");
    if (pf == NULL) // Si el resultado es NULL mensaje de error
        {
            printf("Error al abrir el fichero.\n");
            return -1;
        }
    else
        {
            printf("abierto correctamente\n");
            fclose(pf); // Cerramos fichero
            return 0;
        }
  }
  else
    printf("error, se finaliza el programa\n");
return 0;
}

