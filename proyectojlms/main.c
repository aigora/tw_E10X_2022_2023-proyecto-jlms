#include <stdio.h>
#include<string.h>
typedef struct
{
    int month;
    int year;
}fecha;

typedef struct
{
    fecha date;
    float hidraulica;
    float turbbombeo;
    float nuclear;
    float carbon;
    float fuelgas;
    float motdiesel;
    float turbinagas;
    float turbvapor;
    float ccombinado;
    float hidroeolica;
    float eolica;
    float solarfoto;
    float solarterm;
    float otrasreno;
    float cogenerac;
    float norenov;
    float residrenov;
    float genertotal;
}mes;

void grafico(mes fecha[10],int inicio,int fin);

int main()
{
  FILE *pf;
  int nLineas=0,i,num;
  long int fsize;
  //data es el vector donde guardamos los meses
  mes data[10];
  char accion[10],aux[100];
  char car, open[] = "abrir",length[] = "contar",end[] = "finalizar",all[] = "todos",elegir[] = "elegir";

  pf = fopen("generacion.txt", "r");
  printf("Bienvenido al programa\n");
  printf("a continuacion, eliga la acccion que quiere realizar, diga: 'abrir'\n");
  scanf("%9[^\n]",accion);
  scanf("%c");
  if(strcmp(accion,open) == 0)
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
                //Recorremos todo el fichero y almacenamos los datos
                //en el vector de estructuas
               while (fscanf(pf, "%c", &car) != EOF)
                {
                if (car == '\n')
                {
                    ++nLineas;
                    if(nLineas == 2)
                    {
                        for(i=0;i<1;i++)
                        {
                        fscanf(pf,"%99[^ ]%d/%d",&aux,&data[i].date.month,&data[i].date.year);
                        }
                        for(i=1;i<10;i++)
                        {
                        fscanf(pf,"%d/%d",&data[i].date.month,&data[i].date.year);
                        }
                    }
                    if(nLineas == 3)
                    {
                        for(i=0;i<1;i++)
                        {
                        fscanf(pf,"%99[^ ]%f",&aux,&data[i].hidraulica);
                        }
                        for(i=1;i<10;i++)
                        {
                        fscanf(pf,"%f",&data[i].hidraulica);
                        }
                    }
                    if(nLineas == 4)
                    {
                        for(i=0;i<1;i++)
                        {
                        fscanf(pf,"%99[^ ]%f",&aux,&data[i].turbbombeo);
                        }
                        for(i=1;i<10;i++)
                        {
                        fscanf(pf,"%f",&data[i].turbbombeo);
                        }
                    }
                    if(nLineas == 5)
                    {
                        for(i=0;i<1;i++)
                        {
                        fscanf(pf,"%99[^ ]%f",&aux,&data[i].nuclear);
                        }
                        for(i=1;i<10;i++)
                        {
                        fscanf(pf,"%f",&data[i].nuclear);
                        }
                    }
                    if(nLineas == 6)
                    {
                        for(i=0;i<1;i++)
                        {
                        fscanf(pf,"%99[^ ]%f",&aux,&data[i].carbon);
                        }
                        for(i=1;i<10;i++)
                        {
                        fscanf(pf,"%f",&data[i].carbon);
                        }
                    }
                    if(nLineas == 7)
                    {
                        for(i=0;i<1;i++)
                        {
                        fscanf(pf,"%99[^ ]%f",&aux,&data[i].fuelgas);
                        }
                        for(i=1;i<10;i++)
                        {
                        fscanf(pf,"%f",&data[i].fuelgas);
                        }
                    }
                    if(nLineas == 8)
                    {
                        for(i=0;i<1;i++)
                        {
                        fscanf(pf,"%99[^ ]%f",&aux,&data[i].motdiesel);
                        }
                        for(i=1;i<10;i++)
                        {
                        fscanf(pf,"%f",&data[i].motdiesel);
                        }
                    }
                    if(nLineas == 9)
                    {
                        for(i=0;i<1;i++)
                        {
                        fscanf(pf,"%99[^ ]%f",&aux,&data[i].turbinagas);
                        }
                        for(i=1;i<10;i++)
                        {
                        fscanf(pf,"%f",&data[i].turbinagas);
                        }
                    }
                    if(nLineas == 10)
                    {
                        for(i=0;i<1;i++)
                        {
                        fscanf(pf,"%99[^ ]%f",&aux,&data[i].turbvapor);
                        }
                        for(i=1;i<10;i++)
                        {
                        fscanf(pf,"%f",&data[i].turbvapor);
                        }
                    }
                    if(nLineas == 11)
                    {
                        for(i=0;i<1;i++)
                        {
                        fscanf(pf,"%99[^ ]%f",&aux,&data[i].ccombinado);
                        }
                        for(i=1;i<10;i++)
                        {
                        fscanf(pf,"%f",&data[i].ccombinado);
                        }
                    }
                    if(nLineas == 12)
                    {
                        for(i=0;i<1;i++)
                        {
                        fscanf(pf,"%99[^ ]%f",&aux,&data[i].hidroeolica);
                        }
                        for(i=1;i<10;i++)
                        {
                        fscanf(pf,"%f",&data[i].hidroeolica);
                        }
                    }
                    if(nLineas == 13)
                    {
                        for(i=0;i<1;i++)
                        {
                        fscanf(pf,"%99[^ ]%f",&aux,&data[i].eolica);
                        }
                        for(i=1;i<10;i++)
                        {
                        fscanf(pf,"%f",&data[i].eolica);
                        }
                    }
                    if(nLineas == 14)
                    {
                        for(i=0;i<1;i++)
                        {
                        fscanf(pf,"%99[^ ]%f",&aux,&data[i].solarfoto);
                        }
                        for(i=1;i<10;i++)
                        {
                        fscanf(pf,"%f",&data[i].solarfoto);
                        }
                    }
                    if(nLineas == 15)
                    {
                        for(i=0;i<1;i++)
                        {
                        fscanf(pf,"%99[^ ]%f",&aux,&data[i].solarterm);
                        }
                        for(i=1;i<10;i++)
                        {
                        fscanf(pf,"%f",&data[i].solarterm);
                        }
                    }
                    if(nLineas == 16)
                    {
                        for(i=0;i<1;i++)
                        {
                        fscanf(pf,"%99[^ ]%f",&aux,&data[i].otrasreno);
                        }
                        for(i=1;i<10;i++)
                        {
                        fscanf(pf,"%f",&data[i].otrasreno);
                        }
                    }
                    if(nLineas == 17)
                    {
                        for(i=0;i<1;i++)
                        {
                        fscanf(pf,"%99[^ ]%f",&aux,&data[i].cogenerac);
                        }
                        for(i=1;i<10;i++)
                        {
                        fscanf(pf,"%f",&data[i].cogenerac);
                        }
                    }
                    if(nLineas == 18)
                    {
                        for(i=0;i<1;i++)
                        {
                        fscanf(pf,"%99[^ ]%f",&aux,&data[i].norenov);
                        }
                        for(i=1;i<10;i++)
                        {
                        fscanf(pf,"%f",&data[i].norenov);
                        }
                    }
                    if(nLineas == 19)
                    {
                        for(i=0;i<1;i++)
                        {
                        fscanf(pf,"%99[^ ]%f",&aux,&data[i].residrenov);
                        }
                        for(i=1;i<10;i++)
                        {
                        fscanf(pf,"%f",&data[i].residrenov);
                        }
                    }
                    if(nLineas == 20)
                    {
                        for(i=0;i<1;i++)
                        {
                        fscanf(pf,"%99[^ ]%f",&aux,&data[i].genertotal);
                        }
                        for(i=1;i<10;i++)
                        {
                        fscanf(pf,"%f",&data[i].genertotal);
                        }
                    }
                }
                }
            printf("hay %d lineas\n",nLineas);
            }
        fseek(pf, 0, SEEK_END);
        fsize = ftell(pf);
        printf("El fichero tiene %li bytes.\n", fsize);
        system ("cls");
        printf("ahora puedes elegir lo que quieres hacer\n");
        printf("puedes mostrar o 'todos' los datos o 'elegir' un mes\n");
        scanf("%9[^\n]",accion);
        scanf("%c");
        if(strcmp(accion,all) == 1 || strcmp(accion,elegir) == 1)
        {
            printf("error,vuelve a introducir otra instruccion, como 'todos' o 'elegir'\n");
            scanf("%9[^\n]",accion);
            scanf("%c");
        }
//        system ("cls");
        if(strcmp(accion,all) == 0)
        {
            printf("has seleccionado mostrar todos los datos, en ese caso seria:\n");
            for(i=0;i<10;i++)
            {
            printf("%d/%d:\n",data[i].date.month,data[i].date.year);
            printf("hidraulica: %f\n",data[i].hidraulica);
            printf("turbbombeo: %f\n",data[i].turbbombeo);
            printf("nuclear: %f\n",data[i].nuclear);
            printf("carbon: %f\n",data[i].carbon);
            printf("fuelgas: %f\n",data[i].fuelgas);
            printf("motdiesel: %f\n",data[i].motdiesel);
            printf("turbinagas: %f\n",data[i].turbinagas);
            printf("turbvapor: %f\n",data[i].turbvapor);
            printf("ccombinado: %f\n",data[i].ccombinado);
            printf("hidroeolica: %f\n",data[i].hidroeolica);
            printf("eolica: %f\n",data[i].eolica);
            printf("solarfoto: %f\n",data[i].solarfoto);
            printf("solarterm: %f\n",data[i].solarterm);
            printf("otrasreno: %f\n",data[i].otrasreno);
            printf("cogenerac: %f\n",data[i].cogenerac);
            printf("norenov: %f\n",data[i].norenov);
            printf("residrenov: %f\n",data[i].residrenov);
            printf("genertotal: %f\n",data[i].genertotal);
            printf("\n");
            }
        }
        if(strcmp(accion,elegir) == 0)
        {
            printf("de acuerdo, te voy a mostrar los datos de un solo mes\n");
            printf("dime el numero del mes!(es de 1 a 10)\n");
            scanf("%d",&num);
            system ("cls");
            for(i=num-1;i<num;i++)
                {
                printf("%d/%d: \n",data[i].date.month,data[i].date.year);
                printf("hidraulica: %f\n",data[i].hidraulica);
                printf("turbbombeo: %f\n",data[i].turbbombeo);
                printf("nuclear: %f\n",data[i].nuclear);
                printf("carbon: %f\n",data[i].carbon);
                printf("fuelgas: %f\n",data[i].fuelgas);
                printf("motdiesel: %f\n",data[i].motdiesel);
                printf("turbinagas: %f\n",data[i].turbinagas);
                printf("turbvapor: %f\n",data[i].turbvapor);
                printf("ccombinado: %f\n",data[i].ccombinado);
                printf("hidroeolica: %f\n",data[i].hidroeolica);
                printf("eolica: %f\n",data[i].eolica);
                printf("solarfoto: %f\n",data[i].solarfoto);
                printf("solarterm: %f\n",data[i].solarterm);
                printf("otrasreno: %f\n",data[i].otrasreno);
                printf("cogenerac: %f\n",data[i].cogenerac);
                printf("norenov: %f\n",data[i].norenov);
                printf("residrenov: %f\n",data[i].residrenov);
                printf("genertotal: %f\n",data[i].genertotal);
                }
        }
        return 0;
        }
  }
  else
    printf("error, se finaliza el programa\n");
return 0;
}

//Función para generar graficos de barras
void grafico(mes fecha[10],int inicio,int fin)
{
    int i,j;
    char decision[15];
    float variable[10];
    //Primero tienes que elegir que generaciones quieres comparar
    //luego automaticamente escoje una escala de tal manera que
    //siempre tenga el mismo tamaño la grafica pero distinta escala
     printf("--Ir atras (escribir'atras')\n"
            "--GW/h de todos los tipos de generación (escribir'tipos')\n"
            "--GW/h total generados a nivel nacional (escribir'total')\n"
            "--GW/h de algunos tipos de generacion concretos (escribir tipo que deseas comparar:)\n"
                "1 hidraulica\n"
                "2 turbbombeo\n"
                "3 nuclear\n"
                "4 carbon\n"
                "5 fuelgas\n"
                "6 motdiesel\n"
                "7 turbinagas\n"
                "8 turbvapor\n"
                "9 ccombinado\n"
                "10 hidroeolica\n"
                "11 eolica\n"
                "12 solarfoto\n"
                "13 solarterm\n"
                "14 otrasreno\n"
                "15 cogenerac\n"
                "16 norenov\n"
                "17 residrenov\n\n");
    scanf("%15[^\n]",decision);
    for(i=0,j=inicio-1;i<=fin-inicio;i++,j++)
    {
        if(decision=="hidraulica")
        {
            variable[i]=fecha[j].hidraulica;
        }
        if(decision=="turbbombeo")
        {
            variable[i]=fecha[j].turbbombeo;
        }
        if(decision=="nuclear")
        {
            variable[i]=fecha[j].nuclear;
        }
        if(decision=="carbon")
        {
            variable[i]=fecha[j].carbon;
        }
        if(decision=="fuelgas")
        {
            variable[i]=fecha[j].fuelgas;
        }
        if(decision=="motdiesel")
        {
            variable[i]=fecha[j].motdiesel;
        }
        if(decision=="turbinagas")
        {
            variable[i]=fecha[j].turbinagas;
        }
        if(decision=="turbvapor")
        {
            variable[i]=fecha[j].turbvapor;
        }
        if(decision=="ccombinado")
        {
            variable[i]=fecha[j].ccombinado;
        }
        if(decision=="hidroeolica")
        {
            variable[i]=fecha[j].hidroeolica;
        }
        if(decision=="eolica")
        {
            variable[i]=fecha[j].eolica;
        }
        if(decision=="solarfoto")
        {
            variable[i]=fecha[j].solarfoto;
        }
        if(decision=="solarterm")
        {
            variable[i]=fecha[j].solarterm;
        }
        if(decision=="otrasreno")
        {
            variable[i]=fecha[j].otrasreno;
        }
        if(decision=="cogenerac")
        {
            variable[i]=fecha[j].cogenerac;
        }
         if(decision=="norenov")
        {
            variable[i]=fecha[j].norenov;
        }
         if(decision=="residrenov")
        {
            variable[i]=fecha[j].residrenov;
        }
         if(decision=="tipos")
        {

        }
         if(decision=="total")
        {

        }
        if(decision=="atras")
        {

        }
    }
}
