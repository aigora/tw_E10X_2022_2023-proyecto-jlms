#include <stdio.h>
#include<string.h>
#include "lib.h"
#include "estructuras.h"
int main()
{
  FILE *pf; //puntero dirijido a archivo
  int nLineas=0,i,num; //variables auxiliares
  int mes_1,mes_2;//limites de meses estudiados
  long int fsize; //variable que almacena el numero de bytes
  mes data[10]; //tenemos 10 meses de datos, luego se define vector de estructuras
  char accion[20],accion_2[20],aux[100]; //variables auxiliares que recogeran las acciones del usuario y recorreran el archivo
  //car es una variable auxiliar y el resto son las instrucciones que guiaran el programa
  char car,basura,begin[] = "comenzar",consultar[] = "datos",end[] = "finalizar",all[] = "todos",elegir[] = "elegir",grafics[]="graficas";
  pf = fopen("generacion.txt", "r"); //puntero dirigido abrir el fichero en modo lectura
  printf("Bienvenido al programa\n");
  printf("Se recomienda para un correcto funcionaminto de las graficas la pantalla completa y el uso de minusculas\n");
  printf("Recuerda que en cualquier momento, si escribes 'finalizar', se acaba el programa\n");
  printf("A continuacion, para abrir el fichero, diga : comenzar\n");//primera instruccion
  scanf("%9[^\n]",accion);
  scanf("%c",&basura);
  guardian_2(accion,1);//revision de instruccion, perro guardian
  if(strcmp(accion,end) == 0)
    return 0;
  if(strcmp(accion,begin) == 0)//el usuario ha tecleado 'abrir' correctamente
  {
    if (pf == NULL) // Si el resultado es NULL mensaje de error
        {
            printf("Error al abrir el fichero.\n");
            return -1;
        }
    else
        {
        limpia_consola();
        printf("El fichero ha sido abierto correctamente\n");
        printf("Ahora que accion quieres realizar? Puedes ver los 'datos' del fichero o 'ingresar' nuevos datos\n");
        scanf("%9[^\n]",accion);
        scanf("%c",&basura);
        guardian_2(accion,2);//revision de instruccion, perro guardian
        if(strcmp(accion,end) == 0)//se finaliza el programa
            {
                printf("fin\n");
                fclose(pf);
                return 0;
            }
        if(strcmp(accion,consultar) == 0)//se elige contar el numero de lineas
            {
               limpia_consola();
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
                        fscanf(pf,"%99[^ ]%d/%d",aux,&data[i].date.month,&data[i].date.year);
                        }
                        for(i=1;i<10;i++)//leemos el resto de las 9 columnas, que contienen el resto de las fechas en formato mes/ano
                        {
                        fscanf(pf,"%d/%d",&data[i].date.month,&data[i].date.year);//se almacenan las fechas en su respectiva posicion del vector 'data'
                        }
                    }
                    if(nLineas == 3)//tras superar la tercera linea
                    {
                        for(i=0;i<1;i++)
                        {//avanzamos solo una posicion para leer la primera columna del tipo de energia
                         //ademas que leemos el primer dato tipo float en la segunda columna
                        fscanf(pf,"%99[^ ]%f",aux,&data[i].hidraulica);//el float se asigna en este caso, a los datos de hidraulica de enero
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
                        fscanf(pf,"%99[^ ]%f",aux,&data[i].turbbombeo);
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
                        fscanf(pf,"%99[^ ]%f",aux,&data[i].nuclear);
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
                        fscanf(pf,"%99[^ ]%f",aux,&data[i].carbon);
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
                        fscanf(pf,"%99[^ ]%f",aux,&data[i].fuelgas);
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
                        fscanf(pf,"%99[^ ]%f",aux,&data[i].motdiesel);
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
                        fscanf(pf,"%99[^ ]%f",aux,&data[i].turbinagas);
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
                        fscanf(pf,"%99[^ ]%f",aux,&data[i].turbvapor);
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
                        fscanf(pf,"%99[^ ]%f",aux,&data[i].ccombinado);
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
                        fscanf(pf,"%99[^ ]%f",aux,&data[i].hidroeolica);
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
                        fscanf(pf,"%99[^ ]%f",aux,&data[i].eolica);
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
                        fscanf(pf,"%99[^ ]%f",aux,&data[i].solarfoto);
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
                        fscanf(pf,"%99[^ ]%f",aux,&data[i].solarterm);
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
                        fscanf(pf,"%99[^ ]%f",aux,&data[i].otrasreno);
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
                        fscanf(pf,"%99[^ ]%f",aux,&data[i].cogenerac);
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
                        fscanf(pf,"%99[^ ]%f",aux,&data[i].norenov);
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
                        fscanf(pf,"%99[^ ]%f",aux,&data[i].residrenov);
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
                        fscanf(pf,"%99[^ ]%f",aux,&data[i].genertotal);
                        }
                        for(i=1;i<10;i++)
                        {
                        fscanf(pf,"%f",&data[i].genertotal);
                        }
                    }//fin de lectura de ultima fila
                }//cierre de bluce que detecta el salto de linea
                }//cierre de bucle que lee cada caracter hasta EOF
            fseek(pf, 0, SEEK_END);//se situa el puntero en el inicio y recorre el fichero hasta el final
            fsize = ftell(pf);//valor del numero de bytes
            fclose(pf);
            printf("Informacion sobre el fichero:\n");
            printf("Numero de bytes: %li\n",fsize);
            printf("Numero de lineas: %d\n",nLineas);
            //segunda instruccion del usuario
            printf("Ahora puedes mostrar o 'todos' los datos o 'elegir' los meses que deseas estudiar\n");
            printf("Ver graficas (escribe 'graficas')\n");
            scanf("%9[^\n]",accion);//se lee su instruccion hasta detectar salto de linea
            scanf("%c",&basura);
            guardian_2(accion,3);//revision de instruccion, perro guardian
            limpia_consola();
            if(strcmp(accion,end) == 0)
                return 0;
            if(strcmp(accion,all) == 0)//orden de mostrar todos los datos
                {
                limpia_consola();
                printf("Has seleccionado mostrar todos los datos, en ese caso seria:\n");
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
                limpia_consola();
                printf("De acuerdo, te voy a mostrar los datos de un solo mes, escribelo:\n");
                scanf("%15[^\n]",accion);
                scanf("%c",&basura);
                guardian_2(accion,4);//comprabacion de instruccion del usuario
                num = elige_un_mes(accion); //funcion que devuelve el valor apto para cada mes
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

            if(comparar_cadenas(accion,grafics) == 1)
                {
                while(comparar_cadenas(accion,"finalizar")==0)
                {
                    printf("Desde que mes deseas estudiar (como maximo octubre)(escribir ej:'marzo')\n");
                    scanf("%15[^\n]",accion);//se lee su instruccion hasta detectar salto de linea
                    scanf("%c",&basura);
                    guardian_2(accion,4);
                    mes_1=enumerar_meses(accion);
                    printf("Hasta que mes deseas estudiar(como maximo octubre)(escribir ej:'febrero')\n");
                    scanf("%15[^\n]",accion_2);//se lee su instruccion hasta detectar salto de linea
                    scanf("%c",&basura);
                    guardian_2(accion_2,4);
                    limpia_consola();
                    mes_2=enumerar_meses(accion_2);
                    if(mes_2<mes_1)
                    {
                        i=mes_1;
                        mes_1=mes_2;
                        mes_2=i;
                    }
                    grafica(data,mes_1,mes_2);
                    printf("\n\n-Atras\n-Finalizar\n");
                    scanf("%15[^\n]",accion);
                    guardian_2(accion,6);
                    limpia_consola();
                }
                }
            }//fin de la orden de consultar datos
        return 0;
        }//cierre del caso en el que el fichero se ha abierto correctamente
  }//cierre del caso donde el usuario ha tecleado 'comezar'
}

