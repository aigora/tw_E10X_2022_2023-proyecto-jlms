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

void grafica(mes fecha[],int inicio,int fin);
int comparar_cadenas(char primera[],char segunda[]);
void guardian_2(char command[], int fila);
int enumerar_meses(char month[]);
int digitos_numero(float numero);
float valor_division(float datos[],int tamano);
void tabla(float datos[],int tamano);


int main()
{
  FILE *pf; //puntero dirijido a archivo
  int nLineas=0,i,num; //variables auxiliares
  int mes_1,mes_2;//limites de meses estudiados
  long int fsize; //variable que almacena el numero de bytes
  mes data[10]; //tenemos 10 meses de datos, luego se define vector de estructuras
  char accion[20],accion_2[20],aux[100]; //variables auxiliares que recogeran las acciones del usuario y recorreran el archivo
  //car es una variable auxiliar y el resto son las instrucciones que guiaran el programa
  char car,basura, open[] = "abrir",length[] = "contar",end[] = "finalizar",all[] = "todos",elegir[] = "elegir",grafics[]="graficas";
  pf = fopen("generacion.txt", "r"); //puntero dirigido abrir el fichero en modo lectura
  printf("Bienvenido al programa\n");
  printf("Se recomienda para un correcto funcionaminto de las graficas la pantalla completa\n");
  printf("A continuacion, eliga la acccion que quiere realizar, diga: 'abrir'\n");//primera instruccion
  scanf("%9[^\n]",accion);
  scanf("%c",&basura);
  guardian_2(accion,1);//revision de instruccion, perro guardian
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
            scanf("%c",&basura);
            guardian_2(accion,2);//revision de instruccion, perro guardian
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
            }//fin de la orden de contar las filas
        fseek(pf, 0, SEEK_END);//se situa el puntero en el inicio y recorre el fichero hasta el final
        fsize = ftell(pf);//valor del numero de bytes
        printf("Informacion sobre el fichero:\n");
        printf("Numero de bytes: %li\n",fsize);
        printf("Numero de lineas: %d\n",nLineas);
        printf("Ahora puedes elegir lo que quieres hacer\n");//segunda instruccion del usuario
        printf("Puedes mostrar o 'todos' los datos o 'elegir' los meses que deseas estudiar\n");
        printf("Ver graficas (escribe 'graficas')\n");
        scanf("%9[^\n]",accion);//se lee su instruccion hasta detectar salto de linea
        scanf("%c",&basura);
        guardian_2(accion,3);//revision de instruccion, perro guardian
        system ("cls");
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
                system ("cls");
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
                system ("cls");
            }
        }

        return 0;
        }//cierre del caso en el que el fichero se ha abierto correctamente
  }//cierre del caso donde el usuario ha tecleado 'abrir'
  else
    printf("error, se finaliza el programa\n");
return 0;
}


void grafica(mes fecha[],int inicio,int fin)
{
    //Funcion para generar graficos de barras
    int i,j,k,condicion=0;
    char decision[15];
    float variable[10];
    float todos[17];
    for(i=0;i<17;i++)
    {
        todos[i]=0;
    }
    //Primero tienes que elegir que generaciones quieres comparar
    //luego automaticamente escoje una escala de tal manera que
    //siempre tenga el mismo tamano la grafica pero distinta escala
     printf("--GW/h de cada tipo de generacion(apareceran en el orden de abajo)(si son varios meses los datos son de la suma de estos)(escribir'todos')\n"
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
    guardian_2(decision,5);
    system ("cls");
    for(i=0,j=inicio-1;i<=fin-inicio;i++,j++)
    {
        k=0;
        if(comparar_cadenas(decision,"todos")==1)
        {
            condicion=1;
        }
        if(comparar_cadenas(decision,"hidraulica")==1||condicion==1)
        {
            variable[i]=fecha[j].hidraulica;
            todos[k]=todos[k]+fecha[j].hidraulica;
            k++;
        }
        if(comparar_cadenas(decision,"turbbombeo")==1||condicion==1)
        {
            variable[i]=fecha[j].turbbombeo;
            todos[k]=todos[k]+fecha[j].turbbombeo;
            k++;
        }
        if(comparar_cadenas(decision,"nuclear")==1||condicion==1)
        {
            variable[i]=fecha[j].nuclear;
            todos[k]=todos[k]+fecha[j].nuclear;
            k++;
        }
        if(comparar_cadenas(decision,"carbon")==1||condicion==1)
        {
            variable[i]=fecha[j].carbon;
            todos[k]=todos[k]+fecha[j].carbon;
            k++;
        }
        if(comparar_cadenas(decision,"fuelgas")==1||condicion==1)
        {
            variable[i]=fecha[j].fuelgas;
            todos[k]=todos[k]+fecha[j].fuelgas;
            k++;
        }
        if(comparar_cadenas(decision,"motdiesel")==1||condicion==1)
        {
            variable[i]=fecha[j].motdiesel;
            todos[k]=todos[k]+fecha[j].motdiesel;
            k++;
        }
        if(comparar_cadenas(decision,"turbinagas")==1||condicion==1)
        {
            variable[i]=fecha[j].turbinagas;
            todos[k]=todos[k]+fecha[j].turbinagas;
            k++;
        }
        if(comparar_cadenas(decision,"turbvapor")==1||condicion==1)
        {
            variable[i]=fecha[j].turbvapor;
            todos[k]=todos[k]+fecha[j].turbvapor;
            k++;
        }
        if(comparar_cadenas(decision,"ccombinado")==1||condicion==1)
        {
            variable[i]=fecha[j].ccombinado;
            todos[k]=todos[k]+fecha[j].ccombinado;
            k++;
        }
        if(comparar_cadenas(decision,"hidroeolica")==1||condicion==1)
        {
            variable[i]=fecha[j].hidroeolica;
            todos[k]=todos[k]+fecha[j].hidroeolica;
            k++;
        }
        if(comparar_cadenas(decision,"eolica")==1||condicion==1)
        {
            variable[i]=fecha[j].eolica;
            todos[k]=todos[k]+fecha[j].eolica;
            k++;
        }
        if(comparar_cadenas(decision,"solarfoto")==1||condicion==1)
        {
            variable[i]=fecha[j].solarfoto;
            todos[k]=todos[k]+fecha[j].solarfoto;
            k++;
        }
        if(comparar_cadenas(decision,"solarterm")==1||condicion==1)
        {
            variable[i]=fecha[j].solarterm;
            todos[k]=todos[k]+fecha[j].solarterm;
            k++;
        }
        if(comparar_cadenas(decision,"otrasreno")==1||condicion==1)
        {
            variable[i]=fecha[j].otrasreno;
            todos[k]=todos[k]+fecha[j].otrasreno;
            k++;
        }
        if(comparar_cadenas(decision,"cogenerac")==1||condicion==1)
        {
            variable[i]=fecha[j].cogenerac;
            todos[k]=todos[k]+fecha[j].cogenerac;
            k++;
        }
        if(comparar_cadenas(decision,"norenov")==1||condicion==1)
        {
            variable[i]=fecha[j].norenov;
            todos[k]=todos[k]+fecha[j].norenov;
            k++;
        }
        if(comparar_cadenas(decision,"residrenov")==1||condicion==1)
        {
            variable[i]=fecha[j].residrenov;
            todos[k]=todos[k]+fecha[j].residrenov;
            k++;
        }
        if(comparar_cadenas(decision,"total")==1)
        {
            variable[i]=fecha[j].genertotal;
        }
    }
    if(comparar_cadenas(decision,"todos")==1)
    {
        tabla(todos,17);
    }
    else //tipo de generacion o  generacion total mensual
    {
        tabla(variable,10);
    }

}

void tabla(float datos[],int tamano)
{
    char matriz[45][180];
    char unidades[]="GW/h";
    int filas,columnas,resto,resto_2,digitos,numero_division,espacios,altura_actual,i;
    int altura[200];
    float valor_div;
    valor_div=valor_division(datos,tamano);
    printf("%s\n",unidades);
    for(i=0;i<tamano;i++)
    { //Para saber la altura de la barra de cada dato
        altura[i]=datos[i]/(valor_div/5);
    }
    for(i=tamano;i<200;i++)
    { //Necesario para que cuando terminen los datos de tamano no haga errores
        altura[i]=0;
    }
    for(filas=0,i=0;filas<45;filas++) //Primero rellenamos la matriz
    {
        for(columnas=0;columnas<180;columnas++)
        {
            resto=filas%5;
            resto_2=columnas%10;
            if(filas==44&&columnas!=1&&columnas!=0) //dibuja eje 0X
            {
                matriz[filas][columnas]='_';
            }
            else if(columnas==1)//dibuja eje 0Y
            {
                matriz[filas][columnas]='|';
            }
            else if(columnas==0&&resto==0)//divide 0Y para mayor precision
            {
                matriz[filas][columnas]='-';
            }
            else if (resto_2!=2&&resto_2!=3&&resto_2!=4&&resto_2!=5&&columnas!=0&&columnas!=1)
            { //Para guardar las columnas de 2 de grosor separadas entre ellas por otras dos
                altura_actual=45-filas;
                //altura actual= 4, altura[0]=2, altura_actual<=altura[i]?NO
                if(altura_actual<=altura[i])
                {
                    matriz[filas][columnas]='X';
                }
                else
                {
                    matriz[filas][columnas]=' ';
                }
                if(resto_2==1)
                {
                    i++;
                }
            }
            else//espacios donde no hay nada
            {
                matriz[filas][columnas]=' ';
            }
        }
        i=0;
    }

    //Dibujamos la tabla (compuesta por varios elementos)
    for(filas=0,numero_division=9;filas<45;filas++)
    {
        columnas=0;
        resto=filas%5;
        if(columnas==0&&resto==0)//Pone numero antes de las divisiones
        {
            digitos=digitos_numero(valor_div*numero_division);
            while(digitos<digitos_numero(valor_div*9.))
            { //Son los espacios en numeros menores para que se alinien bien
                printf(" ");
                digitos++;
            }
            printf("%.2f",valor_div*numero_division);
            numero_division--;
        }
        else
        {
            for(espacios=0;espacios<digitos_numero(valor_div*9.)+3;espacios++)
            {
                printf(" ");
            }
        }
        for(columnas=0;columnas<180;columnas++)
        {
            printf("%c",matriz[filas][columnas]);
        }
        printf("\n");
    }
}

float valor_division(float datos[],int tamano)
{
    float max= datos[0];
    float valor_div;
    int i;
    for(i=1;i<tamano;i++) //Primero calculamos el valor max
    {
        if(max<datos[i])
        {
            max=datos[i];
        }
    }
    valor_div=max/9.;
    return valor_div;
}

int digitos_numero(float numero)
{ //Calcula nº digitos de un numero
    //EJ: numero=23, 23/10=2, 23/100=0.
    int divisor=1;
    float cociente;
    int digitos=0;
    cociente = numero/divisor;
    for(divisor=10;cociente>=1;divisor=divisor*10)
    {
        cociente=numero/divisor;
        digitos++;
    }
    return digitos;
}


int comparar_cadenas(char primera[],char segunda[])
{
    //Compara si dos cadenas son iguales
    int i=0;
    int tamano_1=0,tamano_2=0;
    //primero vemos cual es mayor
    while(primera[i]!='\0')
    {
        tamano_1++;
        i++;
    }
    i=0;
    while(segunda[i]!='\0')
    {
        tamano_2++;
        i++;
    }
    i=0;
    if(tamano_1>tamano_2)
    {
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
    else
    {
        while(segunda[i]!='\0')
        {
            if(primera[i]!=segunda[i])
            {
                return 0;
            }
            i++;
        }
        return 1;
    }
}

void guardian_2(char command[], int fila)
{
    //Funcionamiento de funcion guardian_2
    //command es la palabra que has escrito y quieres saber si esta dentro de las posibles palabras admitidas
    //y fila es la fila en donde estan escritas las palabras admitidas en el fichero 'Posibles_palabras.txt'.
    //Para añadir una nueva palabra/palabras para comparar las escribes en una nueva fila separadas por espacios
    //y cuando cambies de linea un enter.
    FILE *pfposibles_palabras;
    pfposibles_palabras = fopen("Posibles_palabras.txt", "r");
    if (pfposibles_palabras == NULL)
    {
        printf("Error al abrir el fichero Posibles_palabras.txt.\n");
    }
    else
    {
        char posible_palabra[15];
        char caracter='\0';
        int i,iguales=0;
        for(i=1;i<fila;i++)//Posiciona en la fila con las palabras a comparar
        {
            fscanf(pfposibles_palabras,"%c", &caracter);//Para avanzar al siguientecaracter cuan este sea \n
            while(caracter!='\n')
            {
                fscanf(pfposibles_palabras,"%c", &caracter);
                //Para saber cuando hay un cambio de linea
            }
        }
        i=0;
        do//do porque inicialmente caracter es \n
        {
            //Compara las palabras admitidas con la palabra escrita,
            //en caso erroneo pide que la escribas de nuevo y repite la funcion
            fscanf(pfposibles_palabras,"%s", posible_palabra);
            iguales=comparar_cadenas(posible_palabra,command);
            fscanf(pfposibles_palabras,"%c", &caracter);
        }while(caracter!='\n'&&iguales==0);

        if(iguales==0)
        {
            printf("error,intentalo de nuevo\n");
            scanf("%15s",command);
            while(getchar() != '\n');
            // Limpiar el búfer de entrada, es para que si añadimos más caracteres de los k puede almacenar
            //se eliminen y no se metan en la segunda cadena.
            guardian_2(command,fila);
        }
        fclose(pfposibles_palabras);
    }
}

int enumerar_meses(char month[])
{
    if(comparar_cadenas(month,"enero"))
    {
        return 1;
    }
     if(comparar_cadenas(month,"febrero"))
    {
        return 2;
    }
     if(comparar_cadenas(month,"marzo"))
    {
        return 3;
    }
     if(comparar_cadenas(month,"abril"))
    {
        return 4;
    }
     if(comparar_cadenas(month,"mayo"))
    {
        return 5;
    }
     if(comparar_cadenas(month,"junio"))
    {
        return 6;
    }
     if(comparar_cadenas(month,"julio"))
    {
        return 7;
    }
     if(comparar_cadenas(month,"agosto"))
    {
        return 8;
    }
     if(comparar_cadenas(month,"septiembre"))
    {
        return 9;
    }
     if(comparar_cadenas(month,"octubre"))
    {
        return 10;
    }
    return -1;
}
