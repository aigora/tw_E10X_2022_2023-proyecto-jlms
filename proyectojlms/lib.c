#include "lib.h"
#include "estructuras.h"
//funcion de comprobacion de instrucciones de usuario
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
        for(i=1; i<fila; i++) //Posiciona en la fila con las palabras a comparar
        {
            fscanf(pfposibles_palabras,"%c", &caracter);//Para avanzar al siguiente caracter cuando este sea \n
            while(caracter!='\n')
            {
                fscanf(pfposibles_palabras,"%c", &caracter);
                //Para saber cuando hay un cambio de linea
            }
        }

        do//do porque inicialmente caracter es \n
        {
            //Compara las palabras admitidas con la palabra escrita,
            //en caso erroneo pide que la escribas de nuevo y repite la funcion
            fscanf(pfposibles_palabras,"%s", posible_palabra);
            iguales=comparar_cadenas(posible_palabra,command);
            fscanf(pfposibles_palabras,"%c", &caracter);
        }
        while(caracter!='\n'&&iguales==0);

        if(iguales==0)
        {
            printf("error,intentalo de nuevo\n");
            scanf("%15s",command);
            while(getchar() != '\n');
            // Limpiar el búfer de entrada, para que si añadimos más caracteres de los que puede almacenar
            //se eliminen y no se metan en la segunda cadena.
            guardian_2(command,fila);
        }
        fclose(pfposibles_palabras);
    }
}

//funcion para cuando el usuario quiere mostrar un mes
int elige_un_mes(char mes[])
{
    year calendario = {"enero","febrero","marzo","abril","mayo","junio","julio","agosto","septiembre","octubre","noviembre","diciembre"};//variable auxiliar para detectar los meses
    int num;
    if(strcmp(mes,calendario.enero) == 0)//cuando se detecta un mes
        num = 0;//se devuelve el valor correspondiente
    if(strcmp(mes,calendario.febrero) == 0)
        num = 1;
    if(strcmp(mes,calendario.marzo) == 0)
        num = 2;
    if(strcmp(mes,calendario.abril) == 0)
        num = 3;
    if(strcmp(mes,calendario.mayo) == 0)
        num = 4;
    if(strcmp(mes,calendario.junio) == 0)
        num = 5;
    if(strcmp(mes,calendario.julio) == 0)
        num = 6;
    if(strcmp(mes,calendario.agosto) == 0)
        num = 7;
    if(strcmp(mes,calendario.septiembre) == 0)
        num = 8;
    if(strcmp(mes,calendario.octubre) == 0)
        num = 9;
    return num;
}

//funcion de grafica
void grafica(mes fecha[],int inicio,int fin)
{
    //Funcion para generar graficos de barras
    int i,j,k,condicion=0;
    char decision[15];
    float variable[10];
    float todos[17];
    for(i=0; i<17; i++)
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
    limpia_consola();
    for(i=0,j=inicio-1; i<=fin-inicio; i++,j++)
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
    for(i=0; i<tamano; i++)
    {
        //Para saber la altura de la barra de cada dato
        altura[i]=datos[i]/(valor_div/5);
    }
    for(i=tamano; i<200; i++)
    {
        //Necesario para que cuando terminen los datos de tamano no haga errores
        altura[i]=0;
    }
    for(filas=0,i=0; filas<45; filas++) //Primero rellenamos la matriz
    {
        for(columnas=0; columnas<180; columnas++)
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
            {
                //Para guardar las columnas de 2 de grosor separadas entre ellas por otras dos
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
    for(filas=0,numero_division=9; filas<45; filas++)
    {
        columnas=0;
        resto=filas%5;
        if(columnas==0&&resto==0)//Pone numero antes de las divisiones
        {
            digitos=digitos_numero(valor_div*numero_division);
            while(digitos<digitos_numero(valor_div*9.))
            {
                //Son los espacios en numeros menores para que se alinien bien
                printf(" ");
                digitos++;
            }
            printf("%.2f",valor_div*numero_division);
            numero_division--;
        }
        else
        {
            for(espacios=0; espacios<digitos_numero(valor_div*9.)+3; espacios++)
            {
                printf(" ");
            }
        }
        for(columnas=0; columnas<180; columnas++)
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
    for(i=1; i<tamano; i++) //Primero calculamos el valor max
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
{
    //Calcula nº digitos de un numero
    //EJ: numero=23, 23/10=2, 23/100=0.
    int divisor=1;
    float cociente;
    int digitos=0;
    cociente = numero/divisor;
    for(divisor=10; cociente>=1; divisor=divisor*10)
    {
        cociente=numero/divisor;
        digitos++;
    }
    if(digitos==0)
    {
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

int enumerar_meses(char month[])
{
    if(comparar_cadenas(month,"enero")==1)
    {
        return 1;
    }
    if(comparar_cadenas(month,"febrero")==1)
    {
        return 2;
    }
    if(comparar_cadenas(month,"marzo")==1)
    {
        return 3;
    }
    if(comparar_cadenas(month,"abril")==1)
    {
        return 4;
    }
    if(comparar_cadenas(month,"mayo")==1)
    {
        return 5;
    }
    if(comparar_cadenas(month,"junio")==1)
    {
        return 6;
    }
    if(comparar_cadenas(month,"julio")==1)
    {
        return 7;
    }
    if(comparar_cadenas(month,"agosto")==1)
    {
        return 8;
    }
    if(comparar_cadenas(month,"septiembre")==1)
    {
        return 9;
    }
    if(comparar_cadenas(month,"octubre")==1)
    {
        return 10;
    }
    return -1;
}

float datos_a_vector(mes month, float *p)
{
    *p = month.hidraulica;
    *(p+1) = month.turbbombeo;
    *(p+2) = month.nuclear;
    *(p+3) = month.carbon;
    *(p+4) = month.fuelgas;
    *(p+5) = month.motdiesel;
    *(p+6) = month.turbinagas;
    *(p+7) = month.turbvapor;
    *(p+8) = month.ccombinado;
    *(p+9) = month.hidroeolica;
    *(p+10) = month.eolica;
    *(p+11) = month.solarfoto;
    *(p+12) = month.solarterm;
    *(p+13) = month.otrasreno;
    *(p+14) = month.cogenerac;
    *(p+15) = month.norenov;
    *(p+16) = month.residrenov;

    return 0;
}

float maximo(float vect[], int tamano, int *posicion)
{
    float max = vect[0];
    int i;
    *posicion = 0;

    for (i = 1; i < tamano; i++)
    {
        if (vect[i] > max)
        {
            max = vect[i];
            *posicion = i;
        }
    }

    return max;
}

float minimo(float vect[], int tamano, int *posicion)
{
    float min = vect[0];
    int i;
    *posicion = 0;

    for (i = 1; i < tamano; i++)
    {
        if (vect[i] < min)
        {
            min = vect[i];
            *posicion = i;
        }
    }

    return min;
}

void obtener_palabra(const char vect[], int posicion, char palabra[])
{
    int contador = 0;
    int longitudPalabra = 0;
    int indice = 0;
    int longitudVector = strlen(vect);
    int i;

    for (i = 0; i < longitudVector; i++)
    {
        if (vect[i] != ' ')
        {
            if (contador == posicion)
            {
                palabra[indice] = vect[i];
                indice++;
                longitudPalabra++;
            }
        }
        else
        {
            if (contador == posicion)
            {
                break;
            }
            contador++;
        }
    }

    palabra[longitudPalabra] = '\0';
}

void limpia_consola(void)
{
    system("cls");      //Para dispositivos Windows
//    printf("\033[2J");      //Para dispositivos Mac y Linux
}

//funcion para calcular la media global
float mediaglo(char tipo[],mes vect[10])//la variable tipo nos da el tipo de energia seleccionado por el usario y vect es el vector que nos trae los datos energeticos
{
    int i;//variable auxiliar para el bucle for
    float suma1 =0.0;//valor inicial de la suma
    //se definen los 17 tipos de generacion de energía;
    char gen1[] = "hidraulica",gen2[] = "turbbombeo",gen3[] = "nuclear",gen4[] = "carbon",gen5[] = "fuelgas";
    char gen6[] = "motdiesel",gen7[] = "turbinagas",gen8[] = "turbvapor",gen9[] = "ccombinado";
    char gen10[] = "hidroeolica",gen11[] = "eolica",gen12[] = "solarfoto",gen13[] = "solarterm",gen14[] = "otrasreno",gen15[] = "cogenerac",gen16[] = "norenov",gen17[] = "residrenov";
    //para cada tipo de energía se plantea un if
    if(strcmp(tipo,gen1) == 0)//cuando se detecta un tipo de energia
    {
        for(i=0;i<10;i++)//el bucle recorre los 10 meses
        {
            suma1 = suma1 + vect[i].hidraulica;//segun el tipo de energía seleccionada
        }
        return suma1/10.0;//la funcion devuelve el valor de la suma dividido entre 10, que es la media correspondiente a los 10 meses
    }
    if(strcmp(tipo,gen2) == 0)
    {
        for(i=0;i<10;i++)
        {
            suma1 = suma1 + vect[i].turbbombeo;
        }
        return suma1/10.0;
    }
    if(strcmp(tipo,gen3) == 0)
    {
        for(i=0;i<10;i++)
        {
            suma1 = suma1 + vect[i].nuclear;
        }
        return suma1/10.0;
    }
    if(strcmp(tipo,gen4) == 0)
    {
        for(i=0;i<10;i++)
        {
            suma1 = suma1 + vect[i].carbon;
        }
        return suma1/10.0;
    }
    if(strcmp(tipo,gen5) == 0)
    {
        for(i=0;i<10;i++)
        {
            suma1 = suma1 + vect[i].fuelgas;
        }
        return suma1/10.0;
    }
    if(strcmp(tipo,gen6) == 0)
    {
        for(i=0;i<10;i++)
        {
            suma1 = suma1 + vect[i].motdiesel;
        }
        return suma1/10.0;
    }
    if(strcmp(tipo,gen7) == 0)
    {
        for(i=0;i<10;i++)
        {
            suma1 = suma1 + vect[i].turbinagas;
        }
        return suma1/10.0;
    }
    if(strcmp(tipo,gen8) == 0)
    {
        for(i=0;i<10;i++)
        {
            suma1 = suma1 + vect[i].turbvapor;
        }
        return suma1/10.0;
    }
    if(strcmp(tipo,gen9) == 0)
    {
        for(i=0;i<10;i++)
        {
            suma1 = suma1 + vect[i].ccombinado;
        }
        return suma1/10.0;
    }
    if(strcmp(tipo,gen10) == 0)
    {
        for(i=0;i<10;i++)
        {
            suma1 = suma1 + vect[i].hidroeolica;
        }
        return suma1/10.0;
    }
    if(strcmp(tipo,gen11) == 0)
    {
        for(i=0;i<10;i++)
        {
            suma1 = suma1 + vect[i].eolica;
        }
        return suma1/10.0;
    }
    if(strcmp(tipo,gen12) == 0)
    {
        for(i=0;i<10;i++)
        {
            suma1 = suma1 + vect[i].solarfoto;
        }
        return suma1/10.0;
    }
    if(strcmp(tipo,gen13) == 0)
    {
        for(i=0;i<10;i++)
        {
            suma1 = suma1 + vect[i].solarterm;
        }
        return suma1/10.0;
    }
    if(strcmp(tipo,gen14) == 0)
    {
        for(i=0;i<10;i++)
        {
            suma1 = suma1 + vect[i].otrasreno;
        }
        return suma1/10.0;
    }
    if(strcmp(tipo,gen15) == 0)
    {
        for(i=0;i<10;i++)
        {
            suma1 = suma1 + vect[i].cogenerac;
        }
        return suma1/10.0;
    }
    if(strcmp(tipo,gen16) == 0)
    {
        for(i=0;i<10;i++)
        {
            suma1 = suma1 + vect[i].norenov;
        }
        return suma1/10.0;
    }
    if(strcmp(tipo,gen17) == 0)
    {
        for(i=0;i<10;i++)
        {
            suma1 = suma1 + vect[i].residrenov;
        }
        return suma1/10.0;
    }
}

//funcion para mostrar media parcial
float mediaparcia(char tipo[],int mes1,int mes2,mes dat[10])//la funcion recibe el tipo de energía y los limites temporales
{
    float suma = 0.0;
    int i,dif = (mes2+1) - (mes1);//diferencia entre los meses seleccionados
    char gen1[] = "hidraulica",gen2[] = "turbbombeo",gen3[] = "nuclear",gen4[] = "carbon",gen5[] = "fuelgas";
    char gen6[] = "motdiesel",gen7[] = "turbinagas",gen8[] = "turbvapor",gen9[] = "ccombinado";
    char gen10[] = "hidroeolica",gen11[] = "eolica",gen12[] = "solarfoto",gen13[] = "solarterm",gen14[] = "otrasreno",gen15[] = "cogenerac",gen16[] = "norenov",gen17[] = "residrenov";
    if(strcmp(tipo,gen1) == 0)//detectado el tipo de energía
    {
        for(i=mes1;i<=mes2;i++)//solo se recorren los datos en el lapso temporal definido
        {
            suma = suma + dat[i].hidraulica;//se suman los datos
        }
        return suma/dif;//la funcion devuelve la media
    }
    if(strcmp(tipo,gen2) == 0)
    {
        for(i=mes1;i<=mes2;i++)
        {
            suma = suma + dat[i].turbbombeo;
        }
        return suma/dif;
    }
    if(strcmp(tipo,gen3) == 0)
    {
        for(i=mes1;i<=mes2;i++)
        {
            suma = suma + dat[i].nuclear;
        }
        return suma/dif;
    }
    if(strcmp(tipo,gen4) == 0)
    {
        for(i=mes1;i<=mes2;i++)
        {
            suma = suma + dat[i].carbon;
        }
        return suma/dif;
    }
    if(strcmp(tipo,gen5) == 0)
    {
        for(i=mes1;i<=mes2;i++)
        {
            suma = suma + dat[i].fuelgas;
        }
        return suma/dif;
    }
    if(strcmp(tipo,gen6) == 0)
    {
        for(i=mes1;i<=mes2;i++)
        {
            suma = suma + dat[i].motdiesel;
        }
        return suma/dif;
    }
    if(strcmp(tipo,gen7) == 0)
    {
        for(i=mes1;i<=mes2;i++)
        {
            suma = suma + dat[i].turbinagas;
        }
        return suma/dif;
    }
    if(strcmp(tipo,gen8) == 0)
    {
        for(i=mes1;i<=mes2;i++)
        {
            suma = suma + dat[i].turbvapor;
        }
        return suma/dif;
    }
    if(strcmp(tipo,gen9) == 0)
    {
        for(i=mes1;i<=mes2;i++)
        {
            suma = suma + dat[i].ccombinado;
        }
        return suma/dif;
    }
    if(strcmp(tipo,gen10) == 0)
    {
        for(i=mes1;i<=mes2;i++)
        {
            suma = suma + dat[i].hidroeolica;
        }
        return suma/dif;
    }
    if(strcmp(tipo,gen11) == 0)
    {
        for(i=mes1;i<=mes2;i++)
        {
            suma = suma + dat[i].eolica;
        }
        return suma/dif;
    }
    if(strcmp(tipo,gen13) == 0)
    {
        for(i=mes1;i<=mes2;i++)
        {
            suma = suma + dat[i].solarterm;
        }
        return suma/dif;
    }
    if(strcmp(tipo,gen14) == 0)
    {
        for(i=mes1;i<=mes2;i++)
        {
            suma = suma + dat[i].otrasreno;
        }
        return suma/dif;
    }
    if(strcmp(tipo,gen15) == 0)
    {
        for(i=mes1;i<=mes2;i++)
        {
            suma = suma + dat[i].cogenerac;
        }
        return suma/dif;
    }
    if(strcmp(tipo,gen16) == 0)
    {
        for(i=mes1;i<=mes2;i++)
        {
            suma = suma + dat[i].norenov;
        }
        return suma/dif;
    }
    if(strcmp(tipo,gen17) == 0)
    {
        for(i=mes1;i<=mes2;i++)
        {
            suma = suma + dat[i].residrenov;
        }
        return suma/dif;
    }
}

//funcion para pedir al usuario nuevos datos
void registrarnew(int dimension)
{
    int i;
    mes nuevainfo[1000];//vector que almacena nuevos datos
    for(i=0;i<dimension;i++)
    {
        printf("Introduzca el N de year (21,22,23...): ");
        scanf("%d",&nuevainfo[i].date.year);
        printf("Introduzca el N de mes (01,02,03...): ");
        scanf("%d",&nuevainfo[i].date.month);
        printf("Introduzca los datos de:\n");
        printf("Hidraulica: ");
        scanf("%f",&nuevainfo[i].hidraulica);
        printf("Turbinacion bombeo: ");
        scanf("%f",&nuevainfo[i].turbbombeo);
        printf("Nuclear: ");
        scanf("%f",&nuevainfo[i].nuclear);
        printf("Carbon: ");
        scanf("%f",&nuevainfo[i].carbon);
        printf("Fuel+Gas: ");
        scanf("%f",&nuevainfo[i].fuelgas);
        printf("Motores Diesel: ");
        scanf("%f",&nuevainfo[i].motdiesel);
        printf("Turbina de gas: ");
        scanf("%f",&nuevainfo[i].turbinagas);
        printf("Turbina de vapor: ");
        scanf("%f",&nuevainfo[i].turbvapor);
        printf("Ciclo Combinado: ");
        scanf("%f",&nuevainfo[i].ccombinado);
        printf("Hidroeolica: ");
        scanf("%f",&nuevainfo[i].hidroeolica);
        printf("Eolica: ");
        scanf("%f",&nuevainfo[i].eolica);
        printf("Solar fotovoltaica: ");
        scanf("%f",&nuevainfo[i].solarfoto);
        printf("Solar termica: ");
        scanf("%f",&nuevainfo[i].solarterm);
        printf("Otras renovables: ");
        scanf("%f",&nuevainfo[i].otrasreno);
        printf("Cogeneracion: ");
        scanf("%f",&nuevainfo[i].cogenerac);
        printf("Residuos no renovables: ");
        scanf("%f",&nuevainfo[i].residrenov);
        printf("Residuos renovables: ");
        scanf("%f",&nuevainfo[i].residrenov);
        printf("Generacion total: ");
        scanf("%f",&nuevainfo[i].genertotal);
        limpia_consola();
    }

    crearfichero(nuevainfo,dimension);
}

//funcion para crear un nuevo fichero con los nuevos datos
void crearfichero(mes intro[],int dimension)
{
    int i;
    FILE *salida;
    salida=fopen("nuevosdatos.txt","w");
    for(i=0;i<dimension;i++)
    {
        fprintf(salida,"%d/%d  %f  %f  %f  %f  %f  %f  %f  %f  %f  %f  %f  %f  %f  %f  %f  %f  %f  %f\n",intro[i].date.month,intro[i].date.year,intro[i].hidraulica,intro[i].turbbombeo,intro[i].nuclear,intro[i].carbon,intro[i].fuelgas,intro[i].motdiesel,intro[i].turbinagas,intro[i].turbvapor,intro[i].ccombinado,intro[i].hidroeolica,intro[i].eolica,intro[i].solarfoto,intro[i].solarterm,intro[i].otrasreno,intro[i].cogenerac,intro[i].norenov,intro[i].residrenov,intro[i].genertotal);
    }
}
