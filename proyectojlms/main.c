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

void grafica(mes fecha[10],int inicio,int fin);
void limpiar_vector(float *pvector);
int comparar_cadenas(char primera[],char segunda[]);

int main()
{
  FILE *pf; //puntero dirijido a archivo
  int nLineas=0,i,num,verif; //variables auxiliares
  long int fsize; //variable que almacena el numero de bytes
  mes data[10]; //tenemos 10 meses de datos, luego se define vector de estructuras
  char accion[10],aux[100]; //variables auxiliares que recogeran las acciones del usuario y recorreran el archivo
  //car es una variable auxiliar y el resto son las instrucciones que guiaran el programa
  char car, open[] = "abrir",length[] = "contar",end[] = "finalizar",all[] = "todos",elegir[] = "elegir";
  pf = fopen("generacion.txt", "r"); //puntero dirigido abrir el fichero en modo lectura
  printf("Bienvenido al programa\n");
  printf("a continuacion, eliga la acccion que quiere realizar, diga: 'abrir'\n");//primera instruccion
  scanf("%9[^\n]",accion);
  scanf("%c");
  guardian(accion,verif = 1);//revision de instruccion, perro guardian
  if(strcmp(accion,open) == 0)//el usuario ha tecleado 'abrir' correctamente
  {
    if (pf == NULL) // Si el resultado es NULL mensaje de error
        {
            printf("Error al abrir el fichero.\n");
            return -1;
        }
    else
        {
            system ("cls");//se limpia la consola
            printf("el fichero ha sido abierto correctamente\n");
            printf("ahora que accion quieres realizar? Puedes 'finalizar' el programa o 'contar' las lineas\n");
            scanf("%9[^\n]",accion);
            scanf("%c");
            guardian(accion,verif = 2);//revision de instruccion, perro guardian
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
                    ++nLineas;//por cada salto de linea, nLineas almacena una linea
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
                        {//avanzamos solo una posicion para leer la primera columna del tipo de energia
                         //ademas que leemos el primer dato tipo float en la segunda columna
                        fscanf(pf,"%99[^ ]%f",&aux,&data[i].hidraulica);//el float se asigna en este caso, a los datos de hidraulica de enero
                        }
                        for(i=1;i<10;i++)
                        {//se leen el resto de columnas,conteniendo los datos de hidraulica para cada mes
                        fscanf(pf,"%f",&data[i].hidraulica);
                        }
                    }
                    //para el resto de datos del fichero, el proceso es el mismo:
                    // la primera columna de cada fila es el tipo de energía
                    //la segunda columna de cada fila , contiene el primer dato numerico correspondiente a enero
                    //el resto de columnas de cada fila contiene el resto de datos numericos para su mes correspondiente
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
                    if(nLineas == 20)//se lee la ultima fila de datos
                    {
                        for(i=0;i<1;i++)
                        {
                        fscanf(pf,"%99[^ ]%f",&aux,&data[i].genertotal);
                        }
                        for(i=1;i<10;i++)
                        {
                        fscanf(pf,"%f",&data[i].genertotal);
                        }
                    }//fin de lectura de ultima fila
                }//cierre de bluce que detecta el salto de linea
                }//cierre de bucle que lee cada caracter hasta EOF
            }//fin de la orden de contar las filas
        fseek(pf, 0, SEEK_END);//se situa el puntero en el inicio y recorre el fichero hasta el final
        fsize = ftell(pf);//valor del numero de bytes
        printf("Informacion sobre el fichero:\n");
        printf("Numero de bytes: %li\n",fsize);
        printf("Numero de lineas: %d\n",nLineas);
        printf("Ahora puedes elegir lo que quieres hacer\n");//segunda instruccion del usuario
        printf("Puedes mostrar o 'todos' los datos o 'elegir' un mes\n");
        scanf("%9[^\n]",accion);//se lee su instruccion hasta detectar salto de linea
        guardian(accion,verif = 3);//revision de instruccion, perro guardian
        if(strcmp(accion,all) == 0)//orden de mostrar todos los datos
        {
            system ("cls");//limpiar consola
            printf("has seleccionado mostrar todos los datos, en ese caso seria:\n");
            for(i=0;i<10;i++)//el bucle for recorre los datos de los 10 meses
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
        }//cierre del caso para mostrar todos los datos
        if(strcmp(accion,elegir) == 0)//el usario quiere solo mostrar un mes
        {
            system ("cls");//limpiar consola
            printf("de acuerdo, te voy a mostrar los datos de un solo mes\n");
            printf("dime el numero del mes!(es de 1 a 10)\n");
            scanf("%d",&num);
            system ("cls");//limpiar consola
            for(i=num-1;i<num;i++)//sea cual sea el valor del numero, solo se avanza una posicion
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
                }//cierre de mostrar el mes
        }//cierre de caso elegir un mes
        return 0;
        }//cierre del caso en el que el fichero se ha abierto correctamente
  }//cierre del caso donde el usuario ha tecleado 'abrir'
  else
    printf("error, se finaliza el programa\n");
return 0;
}

//funcion de perro guardian
void guardian(char command[10], int n)
{
    char open[] = "abrir",length[] = "contar",end[] = "finalizar",all[] = "todos",elegir[] = "elegir";
    switch(n)
    {
    case 1:
        while(strcmp(command,open) != 0)
        {//si el commando no era 'abrir', entoncs se vuelve a pedir al usuario una instruccion valida
        printf("error,intentalo de nuevo\n");
        scanf("%9s",command);
        scanf("%c");
        }
        break;
    case 2:
        while(strcmp(command,end)!= 0 && strcmp(command,length) != 0)
        {//si el command no es 'finalizar' o 'contar' entonces se vuelve a pedir al usuario una instruccion valida
        printf("error,intentalo de nuevo\n");
        scanf("%9s",command);
        scanf("%c");
        }
        break;
    case 3:
        while(strcmp(command,all) != 0 && strcmp(command,elegir) != 0)
        {//si el command no es 'todos' o 'elegir' entonces se vuelve a pedir al usuario una instruccion
        printf("error intentalo de nuevo\n");
        scanf("%9s",command);
        scanf("%c");
        }
        break;
    }
}

//Funcion para generar graficos de barras
void grafica(mes fecha[10],int inicio,int fin)
{
    int i,j,k,condicion=0;
    float todos[17];
    float*p;
    p=todos;
    limpiar_vector(p);
    char decision[15];
    float variable[10];
    //Primero tienes que elegir que generaciones quieres comparar
    //luego automaticamente escoje una escala de tal manera que
    //siempre tenga el mismo tamano la grafica pero distinta escala
     printf("--Ir atras (escribir'atras')\n"
            "--GW/h de todos los tipos de generacion(si son varios meses se compara la suma de estos)(escribir'todos')\n"
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
        k=0;
        if(comparar_cadenas(decision,"todos")==1)
        {
            condicion=1;
        }
        else if(comparar_cadenas(decision,"hidraulica")==1||condicion==1)
        {
            variable[i]=fecha[j].hidraulica;
            todos[k]=todos[k]+fecha[j].hidraulica;
            k++;
        }
        else if(comparar_cadenas(decision,"turbbombeo")==1||condicion==1)
        {
            variable[i]=fecha[j].turbbombeo;
            todos[k]=todos[k]+fecha[j].hidraulica;
            k++;
        }
        else if(comparar_cadenas(decision,"nuclear")==1||condicion==1)
        {
            variable[i]=fecha[j].nuclear;
            todos[k]=todos[k]+fecha[j].hidraulica;
            k++;
        }
        else if(comparar_cadenas(decision,"carbon")==1||condicion==1)
        {
            variable[i]=fecha[j].carbon;
            todos[k]=todos[k]+fecha[j].hidraulica;
            k++;
        }
        else if(comparar_cadenas(decision,"fuelgas")==1||condicion==1)
        {
            variable[i]=fecha[j].fuelgas;
            todos[k]=todos[k]+fecha[j].hidraulica;
            k++;
        }
        else if(comparar_cadenas(decision,"motdiesel")==1||condicion==1)
        {
            variable[i]=fecha[j].motdiesel;
            todos[k]=todos[k]+fecha[j].hidraulica;
            k++;
        }
        else if(comparar_cadenas(decision,"turbinagas")==1||condicion==1)
        {
            variable[i]=fecha[j].turbinagas;
            todos[k]=todos[k]+fecha[j].hidraulica;
            k++;
        }
        else if(comparar_cadenas(decision,"turbvapor")==1||condicion==1)
        {
            variable[i]=fecha[j].turbvapor;
            todos[k]=todos[k]+fecha[j].hidraulica;
            k++;
        }
        else if(comparar_cadenas(decision,"ccombinado")==1||condicion==1)
        {
            variable[i]=fecha[j].ccombinado;
            todos[k]=todos[k]+fecha[j].hidraulica;
            k++;
        }
        else if(comparar_cadenas(decision,"hidroeolica")==1||condicion==1)
        {
            variable[i]=fecha[j].hidroeolica;
            todos[k]=todos[k]+fecha[j].hidraulica;
            k++;
        }
        else if(comparar_cadenas(decision,"eolica")==1||condicion==1)
        {
            variable[i]=fecha[j].eolica;
            todos[k]=todos[k]+fecha[j].hidraulica;
            k++;
        }
        else if(comparar_cadenas(decision,"solarfoto")==1||condicion==1)
        {
            variable[i]=fecha[j].solarfoto;
            todos[k]=todos[k]+fecha[j].hidraulica;
            k++;
        }
        else if(comparar_cadenas(decision,"solarterm")==1||condicion==1)
        {
            variable[i]=fecha[j].solarterm;
            todos[k]=todos[k]+fecha[j].hidraulica;
            k++;
        }
        else if(comparar_cadenas(decision,"otrasreno")==1||condicion==1)
        {
            variable[i]=fecha[j].otrasreno;
            todos[k]=todos[k]+fecha[j].hidraulica;
            k++;
        }
        else if(comparar_cadenas(decision,"cogenerac")==1||condicion==1)
        {
            variable[i]=fecha[j].cogenerac;
            todos[k]=todos[k]+fecha[j].hidraulica;
            k++;
        }
        else if(comparar_cadenas(decision,"norenov")==1||condicion==1)
        {
            variable[i]=fecha[j].norenov;
            todos[k]=todos[k]+fecha[j].hidraulica;
            k++;
        }
        else if(comparar_cadenas(decision,"residrenov")==1||condicion==1)
        {
            variable[i]=fecha[j].residrenov;
            todos[k]=todos[k]+fecha[j].hidraulica;
            k++;
        }
        else if(comparar_cadenas(decision,"total")==1)
        {
            variable[i]=fecha[j].genertotal;
        }
        else if(comparar_cadenas(decision,"atras")==1)
        {

        }
    }
}

int comparar_cadenas(char primera[],char segunda[])
{
    int i=0;
    while(primera[i]!='\0')
    {
        if(primera[i]!=segunda[i])
        {
            return 0;
        }
        i++;
    }
    return 1;
}

void limpiar_vector(float *pvector)
{
    int i;
    for(i=0;i<17;i++)
    {
        *(pvector+i)=0;
    }
}
