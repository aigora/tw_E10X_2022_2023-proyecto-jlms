#include <stdio.h>
#include<string.h>
//declaramos inicialmente las estructuras de los datos
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
}mes;//cada mes tiene una fecha y sus respectivos datos

void grafico(mes fecha[10],int inicio,int fin);

int main()
{
  FILE *pf; //puntero dirijido a archivo
  int nLineas=0,i,num; //variables auxiliares
  long int fsize; //variable que almacena el numero de bytes
  mes data[10]; //tenemos 10 meses de datos
  char accion[10],aux[100]; //variables auxiliares que recogeran las acciones del usuario y recorreran el archivo
  //car es una variable auxiliar y el resto son las instrucciones que guiaran el programa
  char car, open[] = "abrir",length[] = "contar",end[] = "finalizar",all[] = "todos",elegir[] = "elegir";
  pf = fopen("generacion.txt", "r"); //puntero dirigido abrir el fichero en modo lectura
  printf("Bienvenido al programa\n");
  printf("a continuacion, eliga la acccion que quiere realizar, diga: 'abrir'\n");//primera instruccion
  scanf("%9[^\n]",accion);
  scanf("%c");
  while(strcmp(accion,open)!= 0)//funcion de perro guardian para revisar las instrucciones
  {
    printf("error,intentalo de nuevo\n");
    scanf("%9s",accion);
    scanf("%c");
  }
  if(strcmp(accion,open) == 0)//el usuario ha tecleado 'abrir' correctamente
  {
    if (pf == NULL) // Si el resultado es NULL mensaje de error
        {
            printf("Error al abrir el fichero.\n");
            return -1;
        }
    else
        {
            system ("cls");
            printf("el fichero ha sido abierto correctamente\n");
            printf("ahora que accion quieres realizar? Puedes 'finalizar' el programa o 'contar' las lineas\n");
            scanf("%9[^\n]",accion);
            scanf("%c");
            while(strcmp(accion,end)!= 0 && strcmp(accion,length) != 0)//revision de instruccion, perro guardian
            {//si la accion no es 'finalizar' o 'contar' entonces se vuelve a pedir al usuario una instruccion valida
              printf("error,intentalo de nuevo\n");
              scanf("%9s",accion);
              scanf("%c");
            }
            if(strcmp(accion,end) == 0)//se finaliza el programa
            {
                printf("fin\n");
                fclose(pf);
                return 0;
            }
            if(strcmp(accion,length) == 0)//se elige contar el numero de lineas
            {
               system ("cls");
               while (fscanf(pf, "%c", &car) != EOF)//recorrido de cada caracter del fichero
                {
                if (car == '\n')//si se detecta un salto de linea
                {
                    ++nLineas;//se aumenta el valor del contador de lineas
                    if(nLineas == 2)//tras superar la segunda linea
                    {
                        for(i=0;i<1;i++)//avanzamos una sola posicion
                        {
                        //se registra la primera y la segunda columna de la tercera linea, que es el tipo de energia y la primera fecha
                        fscanf(pf,"%99[^ ]%d/%d",&aux,&data[i].date.month,&data[i].date.year);
                        }
                        for(i=1;i<10;i++)//leemos el resto de las 9 columnas, que contienen el resto de las fechas en formato mes/a�o
                        {
                        fscanf(pf,"%d/%d",&data[i].date.month,&data[i].date.year);//se almacenan las fechas en su respectiva posicion del vector 'data'
                        }
                    }
                    if(nLineas == 3)//tras superar la tercera linea
                    {
                        for(i=0;i<1;i++)
                        {//avanzamos solo una posicion
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
            }
        fseek(pf, 0, SEEK_END);
        fsize = ftell(pf);
        printf("Informacion sobre el fichero:\n");
        printf("Numero de bytes: %li\n",fsize);
        printf("Numero de lineas: %d\n",nLineas);
        printf("Ahora puedes elegir lo que quieres hacer\n");
        printf("Puedes mostrar o 'todos' los datos o 'elegir' un mes\n");
        scanf("%9[^\n]",accion);
        while(strcmp(accion,all) != 0 && strcmp(accion,elegir) != 0)
        {
            printf("error intentalo de nuevo\n");
            scanf("%9s",accion);
        }
        if(strcmp(accion,all) == 0)
        {
            system ("cls");
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
            system ("cls");
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

//Funci�n para generar graficos de barras
/*void grafico(mes fecha[10],int inicio,int fin)
{
    int i,j;
    char decision[15];
    float variable[10];
    //Primero tienes que elegir que generaciones quieres comparar
    //luego automaticamente escoje una escala de tal manera que
    //siempre tenga el mismo tama�o la grafica pero distinta escala
     printf("--Ir atras (escribir'atras')\n"
            "--GW/h de todos los tipos de generaci�n (escribir'tipos')\n"
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
}*/
