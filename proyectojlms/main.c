#include <stdio.h>
#include<string.h>
typedef struct
{
//    int day;
    int month;
    int year;
}fecha;
int main()
{
  FILE *pf;
  int nLineas=0,i;
  long int fsize;
  fecha record[10];
  char accion[10],aux[100];
  char car, uno[] = "abrir",length[] = "contar",end[] = "finalizar";
  pf = fopen("generacion.txt", "r");
  printf("bienvenido al programa\n");
  printf("a continuacion, eliga la acccion que quiere realizar\n");
  scanf("%9[^\n]",accion);  scanf("%c");
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
            printf("ahora que accion quieres realizar? Puedes 'finalizar' el programa o 'contar' las lineas\n");
            scanf("%9[^\n]",accion);
            scanf("%c");
            if(strcmp(accion,end) == 0)
            {
                printf("fin\n");
                fclose(pf);
                return 0;
            }
            if(strcmp(accion,length) == 0)
            {
               while (fscanf(pf, "%c", &car) != EOF)
                {
                if (car == '\n')
                {
                    ++nLineas;
                    for(i=0;i<10;i++)
                    {
                        if(nLineas == 2)
//                        {
                        fscanf(pf,"%[^ ]%d/%d",&aux,&record[0].month,&record[0].year);
//                        printf("hola\n");
//                        }
                    }
                }
                }
                printf("hay %d lineas\n",nLineas);
            }
        fseek(pf, 0, SEEK_END);
        fsize = ftell(pf);
        printf("El fichero tiene %li bytes.\n", fsize);
        printf("la primera fecha es %d/%d",record[0].month,record[0].year);
        return 0;
        }
  }
  else
    printf("error, se finaliza el programa\n");
return 0;
}
