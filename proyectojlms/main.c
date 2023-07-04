#include<stdio.h>
#include<string.h>
#include "lib.h"
#include "estructuras.h"

int main()
{
    FILE *pf;//puntero dirijido a archivo
    int nLineas=0,i,dimension,/*,ano*/aux,mes1,mes2,ano1,ano2,x,resta,j;
    long int fsize;
    char car,estado='1'/*,mes[20]*/;
    energia fuente;

    pf = fopen("generacion_por_tecnologias_21_22_puntos_simplificado.csv","r");//puntero dirigido abrir el fichero en modo lectura

    if(pf==NULL)//Si el resultado es NULL mensaje de error
    {
        printf("Error al abrir el fichero.\n");
        return -1;
    }
    else
    {
        while (fscanf(pf, "%c", &car) != EOF)//recorrido de cada caracter del fichero
        {
            if (car == '\n')//si se detecta un salto de linea
            {
                ++nLineas;//por cada salto de linea, nLineas almacena una linea
                if(nLineas == 5 )//tras superar la segunda linea
                {
                    for(i=0; i<17; i++)//se lee el resto de filas y se guardan en la estructura fuente
                    {
                        fscanf(pf,"%[^,],%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f",fuente[i].nombre,&fuente[i].ene21,&fuente[i].feb21,&fuente[i].mar21,&fuente[i].abr21,&fuente[i].may21,&fuente[i].jun21,&fuente[i].jul21,&fuente[i].ago21,&fuente[i].sep21,&fuente[i].oct21,&fuente[i].nov21,&fuente[i].dic21,&fuente[i].ene22,&fuente[i].feb22,&fuente[i].mar22,&fuente[i].abr22,&fuente[i].may22,&fuente[i].jun22,&fuente[i].jul22,&fuente[i].ago22,&fuente[i].sep22,&fuente[i].oct22,&fuente[i].nov22,&fuente[i].dic22);
                    }

                }

            }
        }
        fseek(pf, 0, SEEK_END);//se situa el puntero en el inicio y recorre el fichero hasta el final
        fsize = ftell(pf);//valor del numero de bytes
        fclose(pf);
    }

    while(estado!='0')
    {
        switch(estado)
        {

        case '1':
            limpia_consola();
            printf("\tMENU PRINCIPAL\n\n");
            printf("Introduce por teclado el numero correspondiente a la accion que quieres llevar a cabo:\n\n");
            printf("2. Datos del Fichero\n");
            printf("3. Ingresar nuevos datos\n");
            printf("4. Estudio de una fuente de Energia\n");
            printf("5. Graficas\n\n");
            //printf("6. Estudio de un mes\n");
            printf("Si quiere FINALIZAR el programa pulse '0'\n\n");
            scanf(" %c",&estado);
            break;

        case '2':

            limpia_consola();
            printf("Informacion sobre el fichero:\n\n");
            printf("Numero de bytes: %li\n",fsize);
            printf("Numero de lineas: %d\n\n",nLineas);

            printf("Pulse '1' para VOLVER al menu o '0' si quieres FINALIZAR\n\n");
            scanf(" %c",&estado);
            break;

        case '3':

            limpia_consola();
            printf("Actualmente tenemos datos (expresados en GWh) de los años 2021 y 2022 \n");
            printf("Indique a continuacion cuantos meses de datos nuevos va a ingresar: ");
            scanf("%d",&dimension);
            registrarnew(dimension);
            printf("Pulse '1' para VOLVER al menu o '0' si quieres FINALIZAR\n\n");
            scanf(" %c",&estado);
            break;

        case '4':

            limpia_consola();

            printf("Selecciona una fuente de energia concreta\n");
            printf("1. hidraulica\n");
            printf("2. turbbombeo\n");
            printf("3. nuclear\n");
            printf("4. carbon\n");
            printf("5. motdiesel\n");
            printf("6. turbinagas\n");
            printf("7. turbvapor\n");
            printf("8. ccombinado\n");
            printf("9. hidroeolica\n");
            printf("10. eolica\n");
            printf("11. solarfoto\n");
            printf("12. solarterm\n");
            printf("13. otrasreno\n");
            printf("14. cogenerac\n");
            printf("15. norenov\n");
            printf("16. residrenov\n");
            printf("\n");

            scanf(" %i",&aux);

            imprime_energia(aux,fuente);
            printf("Pulse '1' para VOLVER al menu, '0' si quieres FINALIZAR o '5' si quiere estudiar otra fuente de energia\n\n");
            scanf(" %c",&estado);
            break;

        case '5':

            limpia_consola();
            printf("Introduce en numero del primer mes y año que quieres estudiar\n");
            scanf("%i",&mes1);
            scanf("%i",&ano1);
            printf("\n");
            printf("Introduce en numero del ultimo mes y año que quieres estudiar\n");
            scanf("%i",&mes2);
            scanf("%i",&ano2);
            limpia_consola();

            if(mes2<mes1)
            {
                i=mes1;
                mes1=mes2;
                mes2=i;
            }
            if(ano1<ano2)
            {
                j=ano1;
                ano1=ano2;
                ano2=j;
            }
            if(ano2>ano1)
            {
                resta=ano2-ano1;
                mes2=mes2+12*resta;
            }

            //Primero tienes que elegir que generaciones quieres comparar
            printf("Indica de que fuente de energia quieres ver la grafica. Para ello introduce el numero que tienen al lado:\n\n"
                   "1 hidraulica\n"
                   "2 turbbombeo\n"
                   "3 nuclear\n"
                   "4 carbon\n"
                   "5 motdiesel\n"
                   "6 turbinagas\n"
                   "7 turbvapor\n"
                   "8 ccombinado\n"
                   "9 hidroeolica\n"
                   "10 eolica\n"
                   "11 solarfoto\n"
                   "12 solarterm\n"
                   "13 otrasreno\n"
                   "14 cogenerac\n"
                   "15 norenov\n"
                   "16 residrenov\n\n");

            scanf("%i",&x);


            float val[24]= {fuente[x-1].ene21,fuente[x-1].feb21,fuente[x-1].mar21,fuente[x-1].abr21,fuente[x-1].may21,fuente[x-1].jun21,fuente[x-1].jul21,fuente[x-1].ago21,fuente[x-1].sep21,fuente[x-1].oct21,fuente[x-1].nov21,fuente[x-1].dic21,fuente[x-1].ene22,fuente[x-1].feb22,fuente[x-1].mar22,fuente[x-1].abr22,fuente[x-1].may22,fuente[x-1].jun22,fuente[x-1].jul22,fuente[x-1].ago22,fuente[x-1].sep22,fuente[x-1].oct22,fuente[x-1].nov22,fuente[x-1].dic22};

            grafica(val,mes2-mes1);
            printf("Pulse '1' para VOLVER al menu, '0' si quieres FINALIZAR o '6' si quiere estudiar otra fuente de energia\n\n");
            scanf(" %c",&estado);

            //No he sido capaz de hacer funcionar esta accion
            /*case '6':

            limpia_consola();
            printf("Introduce el numero de mes y año que quieres estudiar:\n");
            scanf(" %c",mes);
            scanf(" %i",&ano);

            elige_un_mes(mes,ano,fuente); //funcion que devuelve el valor apto para cada mes
            printf("Pulse '1' para VOLVER al menu, '0' si quieres FINALIZAR o '4' si quieres estudiar otro mes\n\n");*/


            break;

        default:
            limpia_consola();
            printf("Has introducido un caracter incorrecto. Por favor introduce el numero correspondiente a la accion que quieres realizar\n\n");
            printf("\tMENU PRINCIPAL\n\n");
            printf("2. Datos del Fichero\n");
            printf("3. Ingresar nuevos datos\n");
            printf("4. Estudio de una fuente de Energia\n");
            printf("5. Graficas\n");
            //printf("6. Estudio de un mes\n\n");
            printf("Si quiere FINALIZAR el programa pulse '0'\n\n");
            scanf(" %c",&estado);
            break;

        }



    }//cierre de caso elegir un mes


    printf("Gracias por usar el programa");



    return 0;
}
