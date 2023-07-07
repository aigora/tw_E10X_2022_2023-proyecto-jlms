#include "lib.h"
#include "estructuras.h"
#include<stdlib.h>

void limpia_consola(void)
{
    system("cls");      //Para dispositivos Windows
//   printf("\033[2J");      //Para dispositivos Mac y Linux
}

//funcion para cuando el usuario quiere mostrar un mes
void elige_un_mes(char meses[],int ano,energia fuente)
{
    year calendario = {"enero","febrero","marzo","abril","mayo","junio","julio","agosto","septiembre","octubre","noviembre","diciembre"};//variable auxiliar para detectar los meses


    if(strcmp(meses,calendario.enero) == 0)//cuando se detecta un mes
    {
        printf("(datos en GWh)\n");
        printf("%s %d: \n",meses,ano);
        printf("hidraulica: %f\n",fuente[0].ene21);
        printf("turbbombeo: %f\n",fuente[1].ene21);
        printf("nuclear: %f\n",fuente[2].ene21);
        printf("carbon: %f\n",fuente[3].ene21);
        printf("motdiesel: %f\n",fuente[4].ene21);
        printf("turbinagas: %f\n",fuente[5].ene21);
        printf("turbvapor: %f\n",fuente[6].ene21);
        printf("ccombinado: %f\n",fuente[7].ene21);
        printf("hidroeolica: %f\n",fuente[8].ene21);
        printf("eolica: %f\n",fuente[9].ene21);
        printf("solarfoto: %f\n",fuente[10].ene21);
        printf("solarterm: %f\n",fuente[11].ene21);
        printf("otrasreno: %f\n",fuente[12].ene21);
        printf("cogenerac: %f\n",fuente[13].ene21);
        printf("norenov: %f\n",fuente[14].ene21);
        printf("residrenov: %f\n",fuente[15].ene21);
        printf("genertotal: %f\n",fuente[16].ene21);
        printf("\n");
    }
    if(strcmp(meses,calendario.febrero) == 0)
    {
        printf("(datos en GWh)\n");
        printf("%s %d: \n",meses,ano);
        printf("hidraulica: %f\n",fuente[0].feb21);
        printf("turbbombeo: %f\n",fuente[1].feb21);
        printf("nuclear: %f\n",fuente[2].feb21);
        printf("carbon: %f\n",fuente[3].feb21);
        printf("motdiesel: %f\n",fuente[4].feb21);
        printf("turbinagas: %f\n",fuente[5].feb21);
        printf("turbvapor: %f\n",fuente[6].feb21);
        printf("ccombinado: %f\n",fuente[7].feb21);
        printf("hidroeolica: %f\n",fuente[8].feb21);
        printf("eolica: %f\n",fuente[9].feb21);
        printf("solarfoto: %f\n",fuente[10].feb21);
        printf("solarterm: %f\n",fuente[11].feb21);
        printf("otrasreno: %f\n",fuente[12].feb21);
        printf("cogenerac: %f\n",fuente[13].feb21);
        printf("norenov: %f\n",fuente[14].feb21);
        printf("residrenov: %f\n",fuente[15].feb21);
        printf("genertotal: %f\n",fuente[16].feb21);
        printf("\n");

    }
    if(strcmp(meses,calendario.marzo) == 0)
    {
        printf("(datos en GWh)\n");
        printf("%s %d: \n",meses,ano);
        printf("hidraulica: %f\n",fuente[0].mar21);
        printf("turbbombeo: %f\n",fuente[1].mar21);
        printf("nuclear: %f\n",fuente[2].mar21);
        printf("carbon: %f\n",fuente[3].mar21);
        printf("motdiesel: %f\n",fuente[4].mar21);
        printf("turbinagas: %f\n",fuente[5].mar21);
        printf("turbvapor: %f\n",fuente[6].mar21);
        printf("ccombinado: %f\n",fuente[7].mar21);
        printf("hidroeolica: %f\n",fuente[8].mar21);
        printf("eolica: %f\n",fuente[9].mar21);
        printf("solarfoto: %f\n",fuente[10].mar21);
        printf("solarterm: %f\n",fuente[11].mar21);
        printf("otrasreno: %f\n",fuente[12].mar21);
        printf("cogenerac: %f\n",fuente[13].mar21);
        printf("norenov: %f\n",fuente[14].mar21);
        printf("residrenov: %f\n",fuente[15].mar21);
        printf("genertotal: %f\n",fuente[16].mar21);
        printf("\n");

    }
    if(strcmp(meses,calendario.abril) == 0)
    {
        printf("(datos en GWh)\n");
        printf("%s %d: \n",meses,ano);
        printf("hidraulica: %f\n",fuente[0].abr21);
        printf("turbbombeo: %f\n",fuente[1].abr21);
        printf("nuclear: %f\n",fuente[2].abr21);
        printf("carbon: %f\n",fuente[3].abr21);
        printf("motdiesel: %f\n",fuente[4].abr21);
        printf("turbinagas: %f\n",fuente[5].abr21);
        printf("turbvapor: %f\n",fuente[6].abr21);
        printf("ccombinado: %f\n",fuente[7].abr21);
        printf("hidroeolica: %f\n",fuente[8].abr21);
        printf("eolica: %f\n",fuente[9].abr21);
        printf("solarfoto: %f\n",fuente[10].abr21);
        printf("solarterm: %f\n",fuente[11].abr21);
        printf("otrasreno: %f\n",fuente[12].abr21);
        printf("cogenerac: %f\n",fuente[13].abr21);
        printf("norenov: %f\n",fuente[14].abr21);
        printf("residrenov: %f\n",fuente[15].abr21);
        printf("genertotal: %f\n",fuente[16].abr21);
        printf("\n");

    }
    if(strcmp(meses,calendario.mayo) == 0)
    {
        printf("(datos en GWh)\n");
        printf("%s %d: \n",meses,ano);
        printf("hidraulica: %f\n",fuente[0].may21);
        printf("turbbombeo: %f\n",fuente[1].may21);
        printf("nuclear: %f\n",fuente[2].may21);
        printf("carbon: %f\n",fuente[3].may21);
        printf("motdiesel: %f\n",fuente[4].may21);
        printf("turbinagas: %f\n",fuente[5].may21);
        printf("turbvapor: %f\n",fuente[6].may21);
        printf("ccombinado: %f\n",fuente[7].may21);
        printf("hidroeolica: %f\n",fuente[8].may21);
        printf("eolica: %f\n",fuente[9].may21);
        printf("solarfoto: %f\n",fuente[10].may21);
        printf("solarterm: %f\n",fuente[11].may21);
        printf("otrasreno: %f\n",fuente[12].may21);
        printf("cogenerac: %f\n",fuente[13].may21);
        printf("norenov: %f\n",fuente[14].may21);
        printf("residrenov: %f\n",fuente[15].may21);
        printf("genertotal: %f\n",fuente[16].may21);
        printf("\n");
    }
    if(strcmp(meses,calendario.junio) == 0)
    {
        printf("(datos en GWh)\n");
        printf("%s %d: \n",meses,ano);
        printf("hidraulica: %f\n",fuente[0].jun21);
        printf("turbbombeo: %f\n",fuente[1].jun21);
        printf("nuclear: %f\n",fuente[2].jun21);
        printf("carbon: %f\n",fuente[3].jun21);
        printf("motdiesel: %f\n",fuente[4].jun21);
        printf("turbinagas: %f\n",fuente[5].jun21);
        printf("turbvapor: %f\n",fuente[6].jun21);
        printf("ccombinado: %f\n",fuente[7].jun21);
        printf("hidroeolica: %f\n",fuente[8].jun21);
        printf("eolica: %f\n",fuente[9].jun21);
        printf("solarfoto: %f\n",fuente[10].jun21);
        printf("solarterm: %f\n",fuente[11].jun21);
        printf("otrasreno: %f\n",fuente[12].jun21);
        printf("cogenerac: %f\n",fuente[13].jun21);
        printf("norenov: %f\n",fuente[14].jun21);
        printf("residrenov: %f\n",fuente[15].jun21);
        printf("genertotal: %f\n",fuente[16].jun21);
        printf("\n");
    }
    if(strcmp(meses,calendario.julio) == 0)
    {
        printf("(datos en GWh)\n");
        printf("%s %d: \n",meses,ano);
        printf("hidraulica: %f\n",fuente[0].jul21);
        printf("turbbombeo: %f\n",fuente[1].jul21);
        printf("nuclear: %f\n",fuente[2].jul21);
        printf("carbon: %f\n",fuente[3].jul21);
        printf("motdiesel: %f\n",fuente[4].jul21);
        printf("turbinagas: %f\n",fuente[5].jul21);
        printf("turbvapor: %f\n",fuente[6].jul21);
        printf("ccombinado: %f\n",fuente[7].jul21);
        printf("hidroeolica: %f\n",fuente[8].jul21);
        printf("eolica: %f\n",fuente[9].jul21);
        printf("solarfoto: %f\n",fuente[10].jul21);
        printf("solarterm: %f\n",fuente[11].jul21);
        printf("otrasreno: %f\n",fuente[12].jul21);
        printf("cogenerac: %f\n",fuente[13].jul21);
        printf("norenov: %f\n",fuente[14].jul21);
        printf("residrenov: %f\n",fuente[15].jul21);
        printf("genertotal: %f\n",fuente[16].jul21);
        printf("\n");
    }
    if(strcmp(meses,calendario.agosto) == 0)
    {
        printf("(datos en GWh)\n");
        printf("%s %d: \n",meses,ano);
        printf("hidraulica: %f\n",fuente[0].ago21);
        printf("turbbombeo: %f\n",fuente[1].ago21);
        printf("nuclear: %f\n",fuente[2].ago21);
        printf("carbon: %f\n",fuente[3].ago21);
        printf("motdiesel: %f\n",fuente[4].ago21);
        printf("turbinagas: %f\n",fuente[5].ago21);
        printf("turbvapor: %f\n",fuente[6].ago21);
        printf("ccombinado: %f\n",fuente[7].ago21);
        printf("hidroeolica: %f\n",fuente[8].ago21);
        printf("eolica: %f\n",fuente[9].ago21);
        printf("solarfoto: %f\n",fuente[10].ago21);
        printf("solarterm: %f\n",fuente[11].ago21);
        printf("otrasreno: %f\n",fuente[12].ago21);
        printf("cogenerac: %f\n",fuente[13].ago21);
        printf("norenov: %f\n",fuente[14].ago21);
        printf("residrenov: %f\n",fuente[15].ago21);
        printf("genertotal: %f\n",fuente[16].ago21);
        printf("\n");
    }
    if(strcmp(meses,calendario.septiembre) == 0)
    {
        printf("(datos en GWh)\n");
        printf("%s %d: \n",meses,ano);
        printf("hidraulica: %f\n",fuente[0].sep21);
        printf("turbbombeo: %f\n",fuente[1].sep21);
        printf("nuclear: %f\n",fuente[2].sep21);
        printf("carbon: %f\n",fuente[3].sep21);
        printf("motdiesel: %f\n",fuente[4].sep21);
        printf("turbinagas: %f\n",fuente[5].sep21);
        printf("turbvapor: %f\n",fuente[6].sep21);
        printf("ccombinado: %f\n",fuente[7].sep21);
        printf("hidroeolica: %f\n",fuente[8].sep21);
        printf("eolica: %f\n",fuente[9].sep21);
        printf("solarfoto: %f\n",fuente[10].sep21);
        printf("solarterm: %f\n",fuente[11].sep21);
        printf("otrasreno: %f\n",fuente[12].sep21);
        printf("cogenerac: %f\n",fuente[13].sep21);
        printf("norenov: %f\n",fuente[14].sep21);
        printf("residrenov: %f\n",fuente[15].sep21);
        printf("genertotal: %f\n",fuente[16].sep21);
        printf("\n");
    }
    if(strcmp(meses,calendario.octubre) == 0)
    {
        printf("(datos en GWh)\n");
        printf("%s %d: \n",meses,ano);
        printf("hidraulica: %f\n",fuente[0].oct21);
        printf("turbbombeo: %f\n",fuente[1].oct21);
        printf("nuclear: %f\n",fuente[2].oct21);
        printf("carbon: %f\n",fuente[3].oct21);
        printf("motdiesel: %f\n",fuente[4].oct21);
        printf("turbinagas: %f\n",fuente[5].oct21);
        printf("turbvapor: %f\n",fuente[6].oct21);
        printf("ccombinado: %f\n",fuente[7].oct21);
        printf("hidroeolica: %f\n",fuente[8].oct21);
        printf("eolica: %f\n",fuente[9].oct21);
        printf("solarfoto: %f\n",fuente[10].oct21);
        printf("solarterm: %f\n",fuente[11].oct21);
        printf("otrasreno: %f\n",fuente[12].oct21);
        printf("cogenerac: %f\n",fuente[13].oct21);
        printf("norenov: %f\n",fuente[14].oct21);
        printf("residrenov: %f\n",fuente[15].oct21);
        printf("genertotal: %f\n",fuente[16].oct21);
        printf("\n");
    }
    if(strcmp(meses,calendario.noviembre) == 0)
    {
        printf("(datos en GWh)\n");
        printf("%s %d: \n",meses,ano);
        printf("hidraulica: %f\n",fuente[0].nov21);
        printf("turbbombeo: %f\n",fuente[1].nov21);
        printf("nuclear: %f\n",fuente[2].nov21);
        printf("carbon: %f\n",fuente[3].nov21);
        printf("motdiesel: %f\n",fuente[4].nov21);
        printf("turbinagas: %f\n",fuente[5].nov21);
        printf("turbvapor: %f\n",fuente[6].nov21);
        printf("ccombinado: %f\n",fuente[7].nov21);
        printf("hidroeolica: %f\n",fuente[8].nov21);
        printf("eolica: %f\n",fuente[9].nov21);
        printf("solarfoto: %f\n",fuente[10].nov21);
        printf("solarterm: %f\n",fuente[11].nov21);
        printf("otrasreno: %f\n",fuente[12].nov21);
        printf("cogenerac: %f\n",fuente[13].nov21);
        printf("norenov: %f\n",fuente[14].nov21);
        printf("residrenov: %f\n",fuente[15].nov21);
        printf("genertotal: %f\n",fuente[16].nov21);
        printf("\n");
    }
    if(strcmp(meses,calendario.diciembre) == 0)
    {
        printf("(datos en GWh)\n");
        printf("%s %d: \n",meses,ano);
        printf("hidraulica: %f\n",fuente[0].dic21);
        printf("turbbombeo: %f\n",fuente[1].dic21);
        printf("nuclear: %f\n",fuente[2].dic21);
        printf("carbon: %f\n",fuente[3].dic21);
        printf("motdiesel: %f\n",fuente[4].dic21);
        printf("turbinagas: %f\n",fuente[5].dic21);
        printf("turbvapor: %f\n",fuente[6].dic21);
        printf("ccombinado: %f\n",fuente[7].dic21);
        printf("hidroeolica: %f\n",fuente[8].dic21);
        printf("eolica: %f\n",fuente[9].dic21);
        printf("solarfoto: %f\n",fuente[10].dic21);
        printf("solarterm: %f\n",fuente[11].dic21);
        printf("otrasreno: %f\n",fuente[12].dic21);
        printf("cogenerac: %f\n",fuente[13].dic21);
        printf("norenov: %f\n",fuente[14].dic21);
        printf("residrenov: %f\n",fuente[15].dic21);
        printf("genertotal: %f\n",fuente[16].dic21);
        printf("\n");
    }
    if(strcmp(meses,calendario.enero) == 0 && (ano ==2022 || ano == 22))
    {
        printf("(datos en GWh)\n");
        printf("%s %d: \n",meses,ano);
        printf("hidraulica: %f\n",fuente[0].ene22);
        printf("turbbombeo: %f\n",fuente[1].ene22);
        printf("nuclear: %f\n",fuente[2].ene22);
        printf("carbon: %f\n",fuente[3].ene22);
        printf("motdiesel: %f\n",fuente[4].ene22);
        printf("turbinagas: %f\n",fuente[5].ene22);
        printf("turbvapor: %f\n",fuente[6].ene22);
        printf("ccombinado: %f\n",fuente[7].ene22);
        printf("hidroeolica: %f\n",fuente[8].ene22);
        printf("eolica: %f\n",fuente[9].ene22);
        printf("solarfoto: %f\n",fuente[10].ene22);
        printf("solarterm: %f\n",fuente[11].ene22);
        printf("otrasreno: %f\n",fuente[12].ene22);
        printf("cogenerac: %f\n",fuente[13].ene22);
        printf("norenov: %f\n",fuente[14].ene22);
        printf("residrenov: %f\n",fuente[15].ene22);
        printf("genertotal: %f\n",fuente[16].ene22);
        printf("\n");

    }
    if(strcmp(meses,calendario.febrero) == 0 && (ano ==2022 || ano == 22))
    {
        printf("(datos en GWh)\n");
        printf("%s %d: \n",meses,ano);
        printf("hidraulica: %f\n",fuente[0].feb22);
        printf("turbbombeo: %f\n",fuente[1].feb22);
        printf("nuclear: %f\n",fuente[2].feb22);
        printf("carbon: %f\n",fuente[3].feb22);
        printf("motdiesel: %f\n",fuente[4].feb22);
        printf("turbinagas: %f\n",fuente[5].feb22);
        printf("turbvapor: %f\n",fuente[6].feb22);
        printf("ccombinado: %f\n",fuente[7].feb22);
        printf("hidroeolica: %f\n",fuente[8].feb22);
        printf("eolica: %f\n",fuente[9].feb22);
        printf("solarfoto: %f\n",fuente[10].feb22);
        printf("solarterm: %f\n",fuente[11].feb22);
        printf("otrasreno: %f\n",fuente[12].feb22);
        printf("cogenerac: %f\n",fuente[13].feb22);
        printf("norenov: %f\n",fuente[14].feb22);
        printf("residrenov: %f\n",fuente[15].feb22);
        printf("genertotal: %f\n",fuente[16].feb22);
        printf("\n");

    }
    if(strcmp(meses,calendario.marzo) == 0 && (ano ==2022 || ano == 22))
    {
        printf("(datos en GWh)\n");
        printf("%s %d: \n",meses,ano);
        printf("hidraulica: %f\n",fuente[0].mar22);
        printf("turbbombeo: %f\n",fuente[1].mar22);
        printf("nuclear: %f\n",fuente[2].mar22);
        printf("carbon: %f\n",fuente[3].mar22);
        printf("motdiesel: %f\n",fuente[4].mar22);
        printf("turbinagas: %f\n",fuente[5].mar22);
        printf("turbvapor: %f\n",fuente[6].mar22);
        printf("ccombinado: %f\n",fuente[7].mar22);
        printf("hidroeolica: %f\n",fuente[8].mar22);
        printf("eolica: %f\n",fuente[9].mar22);
        printf("solarfoto: %f\n",fuente[10].mar22);
        printf("solarterm: %f\n",fuente[11].mar22);
        printf("otrasreno: %f\n",fuente[12].mar22);
        printf("cogenerac: %f\n",fuente[13].mar22);
        printf("norenov: %f\n",fuente[14].mar22);
        printf("residrenov: %f\n",fuente[15].mar22);
        printf("genertotal: %f\n",fuente[16].mar22);
        printf("\n");

    }
    if(strcmp(meses,calendario.abril) == 0 && (ano ==2022 || ano == 22))
    {
        printf("(datos en GWh)\n");
        printf("%s %d: \n",meses,ano);
        printf("hidraulica: %f\n",fuente[0].abr22);
        printf("turbbombeo: %f\n",fuente[1].abr22);
        printf("nuclear: %f\n",fuente[2].abr22);
        printf("carbon: %f\n",fuente[3].abr22);
        printf("motdiesel: %f\n",fuente[4].abr22);
        printf("turbinagas: %f\n",fuente[5].abr22);
        printf("turbvapor: %f\n",fuente[6].abr22);
        printf("ccombinado: %f\n",fuente[7].abr22);
        printf("hidroeolica: %f\n",fuente[8].abr22);
        printf("eolica: %f\n",fuente[9].abr22);
        printf("solarfoto: %f\n",fuente[10].abr22);
        printf("solarterm: %f\n",fuente[11].abr22);
        printf("otrasreno: %f\n",fuente[12].abr22);
        printf("cogenerac: %f\n",fuente[13].abr22);
        printf("norenov: %f\n",fuente[14].abr22);
        printf("residrenov: %f\n",fuente[15].abr22);
        printf("genertotal: %f\n",fuente[16].abr22);
        printf("\n");
    }
    if(strcmp(meses,calendario.mayo) == 0 && (ano ==2022 || ano == 22))
    {
        printf("(datos en GWh)\n");
        printf("%s %d: \n",meses,ano);
        printf("hidraulica: %f\n",fuente[0].may22);
        printf("turbbombeo: %f\n",fuente[1].may22);
        printf("nuclear: %f\n",fuente[2].may22);
        printf("carbon: %f\n",fuente[3].may22);
        printf("motdiesel: %f\n",fuente[4].may22);
        printf("turbinagas: %f\n",fuente[5].may22);
        printf("turbvapor: %f\n",fuente[6].may22);
        printf("ccombinado: %f\n",fuente[7].may22);
        printf("hidroeolica: %f\n",fuente[8].may22);
        printf("eolica: %f\n",fuente[9].may22);
        printf("solarfoto: %f\n",fuente[10].may22);
        printf("solarterm: %f\n",fuente[11].may22);
        printf("otrasreno: %f\n",fuente[12].may22);
        printf("cogenerac: %f\n",fuente[13].may22);
        printf("norenov: %f\n",fuente[14].may22);
        printf("residrenov: %f\n",fuente[15].may22);
        printf("genertotal: %f\n",fuente[16].may22);
        printf("\n");
    }
    if(strcmp(meses,calendario.junio) == 0 && (ano ==2022 || ano == 22))
    {
        printf("(datos en GWh)\n");
        printf("%s %d: \n",meses,ano);
        printf("hidraulica: %f\n",fuente[0].jun22);
        printf("turbbombeo: %f\n",fuente[1].jun22);
        printf("nuclear: %f\n",fuente[2].jun22);
        printf("carbon: %f\n",fuente[3].jun22);
        printf("motdiesel: %f\n",fuente[4].jun22);
        printf("turbinagas: %f\n",fuente[5].jun22);
        printf("turbvapor: %f\n",fuente[6].jun22);
        printf("ccombinado: %f\n",fuente[7].jun22);
        printf("hidroeolica: %f\n",fuente[8].jun22);
        printf("eolica: %f\n",fuente[9].jun22);
        printf("solarfoto: %f\n",fuente[10].jun22);
        printf("solarterm: %f\n",fuente[11].jun22);
        printf("otrasreno: %f\n",fuente[12].jun22);
        printf("cogenerac: %f\n",fuente[13].jun22);
        printf("norenov: %f\n",fuente[14].jun22);
        printf("residrenov: %f\n",fuente[15].jun22);
        printf("genertotal: %f\n",fuente[16].jun22);
        printf("\n");
    }
    if(strcmp(meses,calendario.julio) == 0 && (ano ==2022 || ano == 22))
    {
        printf("(datos en GWh)\n");
        printf("%s %d: \n",meses,ano);
        printf("hidraulica: %f\n",fuente[0].jul22);
        printf("turbbombeo: %f\n",fuente[1].jul22);
        printf("nuclear: %f\n",fuente[2].jul22);
        printf("carbon: %f\n",fuente[3].jul22);
        printf("motdiesel: %f\n",fuente[4].jul22);
        printf("turbinagas: %f\n",fuente[5].jul22);
        printf("turbvapor: %f\n",fuente[6].jul22);
        printf("ccombinado: %f\n",fuente[7].jul22);
        printf("hidroeolica: %f\n",fuente[8].jul22);
        printf("eolica: %f\n",fuente[9].jul22);
        printf("solarfoto: %f\n",fuente[10].jul22);
        printf("solarterm: %f\n",fuente[11].jul22);
        printf("otrasreno: %f\n",fuente[12].jul22);
        printf("cogenerac: %f\n",fuente[13].jul22);
        printf("norenov: %f\n",fuente[14].jul22);
        printf("residrenov: %f\n",fuente[15].jul22);
        printf("genertotal: %f\n",fuente[16].jul22);
        printf("\n");
    }
    if(strcmp(meses,calendario.agosto) == 0 && (ano ==2022 || ano == 22))
    {
        printf("(datos en GWh)\n");
        printf("%s %d: \n",meses,ano);
        printf("hidraulica: %f\n",fuente[0].ago22);
        printf("turbbombeo: %f\n",fuente[1].ago22);
        printf("nuclear: %f\n",fuente[2].ago22);
        printf("carbon: %f\n",fuente[3].ago22);
        printf("motdiesel: %f\n",fuente[4].ago22);
        printf("turbinagas: %f\n",fuente[5].ago22);
        printf("turbvapor: %f\n",fuente[6].ago22);
        printf("ccombinado: %f\n",fuente[7].ago22);
        printf("hidroeolica: %f\n",fuente[8].ago22);
        printf("eolica: %f\n",fuente[9].ago22);
        printf("solarfoto: %f\n",fuente[10].ago22);
        printf("solarterm: %f\n",fuente[11].ago22);
        printf("otrasreno: %f\n",fuente[12].ago22);
        printf("cogenerac: %f\n",fuente[13].ago22);
        printf("norenov: %f\n",fuente[14].ago22);
        printf("residrenov: %f\n",fuente[15].ago22);
        printf("genertotal: %f\n",fuente[16].ago22);
        printf("\n");
    }
    if(strcmp(meses,calendario.septiembre) == 0 && (ano ==2022 || ano == 22))
    {
        printf("(datos en GWh)\n");
        printf("%s %d: \n",meses,ano);
        printf("hidraulica: %f\n",fuente[0].sep22);
        printf("turbbombeo: %f\n",fuente[1].sep22);
        printf("nuclear: %f\n",fuente[2].sep22);
        printf("carbon: %f\n",fuente[3].sep22);
        printf("motdiesel: %f\n",fuente[4].sep22);
        printf("turbinagas: %f\n",fuente[5].sep22);
        printf("turbvapor: %f\n",fuente[6].sep22);
        printf("ccombinado: %f\n",fuente[7].sep22);
        printf("hidroeolica: %f\n",fuente[8].sep22);
        printf("eolica: %f\n",fuente[9].sep22);
        printf("solarfoto: %f\n",fuente[10].sep22);
        printf("solarterm: %f\n",fuente[11].sep22);
        printf("otrasreno: %f\n",fuente[12].sep22);
        printf("cogenerac: %f\n",fuente[13].sep22);
        printf("norenov: %f\n",fuente[14].sep22);
        printf("residrenov: %f\n",fuente[15].sep22);
        printf("genertotal: %f\n",fuente[16].sep22);
        printf("\n");
    }
    if(strcmp(meses,calendario.octubre) == 0 && (ano ==2022 || ano == 22))
    {
        printf("(datos en GWh)\n");
        printf("%s %d: \n",meses,ano);
        printf("hidraulica: %f\n",fuente[0].oct22);
        printf("turbbombeo: %f\n",fuente[1].oct22);
        printf("nuclear: %f\n",fuente[2].oct22);
        printf("carbon: %f\n",fuente[3].oct22);
        printf("motdiesel: %f\n",fuente[4].oct22);
        printf("turbinagas: %f\n",fuente[5].oct22);
        printf("turbvapor: %f\n",fuente[6].oct22);
        printf("ccombinado: %f\n",fuente[7].oct22);
        printf("hidroeolica: %f\n",fuente[8].oct22);
        printf("eolica: %f\n",fuente[9].oct22);
        printf("solarfoto: %f\n",fuente[10].oct22);
        printf("solarterm: %f\n",fuente[11].oct22);
        printf("otrasreno: %f\n",fuente[12].oct22);
        printf("cogenerac: %f\n",fuente[13].oct22);
        printf("norenov: %f\n",fuente[14].oct22);
        printf("residrenov: %f\n",fuente[15].oct22);
        printf("genertotal: %f\n",fuente[16].oct22);
        printf("\n");
    }
    if(strcmp(meses,calendario.noviembre) == 0 && (ano ==2022 || ano == 22))
    {
        printf("(datos en GWh)\n");
        printf("%s %d: \n",meses,ano);
        printf("hidraulica: %f\n",fuente[0].nov22);
        printf("turbbombeo: %f\n",fuente[1].nov22);
        printf("nuclear: %f\n",fuente[2].nov22);
        printf("carbon: %f\n",fuente[3].nov22);
        printf("motdiesel: %f\n",fuente[4].nov22);
        printf("turbinagas: %f\n",fuente[5].nov22);
        printf("turbvapor: %f\n",fuente[6].nov22);
        printf("ccombinado: %f\n",fuente[7].nov22);
        printf("hidroeolica: %f\n",fuente[8].nov22);
        printf("eolica: %f\n",fuente[9].nov22);
        printf("solarfoto: %f\n",fuente[10].nov22);
        printf("solarterm: %f\n",fuente[11].nov22);
        printf("otrasreno: %f\n",fuente[12].nov22);
        printf("cogenerac: %f\n",fuente[13].nov22);
        printf("norenov: %f\n",fuente[14].nov22);
        printf("residrenov: %f\n",fuente[15].nov22);
        printf("genertotal: %f\n",fuente[16].nov22);
        printf("\n");
    }
    if(strcmp(meses,calendario.diciembre) == 0 && (ano ==2022 || ano == 22))
    {
        printf("(datos en GWh)\n");
        printf("%s %d: \n",meses,ano);
        printf("hidraulica: %f\n",fuente[0].dic22);
        printf("turbbombeo: %f\n",fuente[1].dic22);
        printf("nuclear: %f\n",fuente[2].dic22);
        printf("carbon: %f\n",fuente[3].dic22);
        printf("motdiesel: %f\n",fuente[4].dic22);
        printf("turbinagas: %f\n",fuente[5].dic22);
        printf("turbvapor: %f\n",fuente[6].dic22);
        printf("ccombinado: %f\n",fuente[7].dic22);
        printf("hidroeolica: %f\n",fuente[8].dic22);
        printf("eolica: %f\n",fuente[9].dic22);
        printf("solarfoto: %f\n",fuente[10].dic22);
        printf("solarterm: %f\n",fuente[11].dic22);
        printf("otrasreno: %f\n",fuente[12].dic22);
        printf("cogenerac: %f\n",fuente[13].dic22);
        printf("norenov: %f\n",fuente[14].dic22);
        printf("residrenov: %f\n",fuente[15].dic22);
        printf("genertotal: %f\n",fuente[16].dic22);
        printf("\n");
    }


}
void grafica(float datos[],int tamano)
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

int enumerar_meses(char month[])
{
    if(strcmp(month,"enero")==0)
    {
        return 1;
    }
    if(strcmp(month,"febrero")==0)
    {
        return 2;
    }
    if(strcmp(month,"marzo")==0)
    {
        return 3;
    }
    if(strcmp(month,"abril")==0)
    {
        return 4;
    }
    if(strcmp(month,"mayo")==0)
    {
        return 5;
    }
    if(strcmp(month,"junio")==0)
    {
        return 6;
    }
    if(strcmp(month,"julio")==0)
    {
        return 7;
    }
    if(strcmp(month,"agosto")==0)
    {
        return 8;
    }
    if(strcmp(month,"septiembre")==0)
    {
        return 9;
    }
    if(strcmp(month,"octubre")==0)
    {
        return 10;
    }
    return -1;
}

//guarda la estructura mes en un puntero

void datos_a_vector(mes month, float *p)
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
}



//Dada una lista de palabras en un string y un entero, saca una sola palabra de esa lista,
// que ocupa la posición marcada por el entero.
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

//funcion para calcular la media global
float mediaglo(char tipo[],mes vect[10])//la variable tipo nos da el tipo de energia seleccionado por el usario y vect es el vector que nos trae los datos energeticos
{
    int i,j;//variable auxiliar para el bucle for
    float suma1=0.0,x[17];//valor inicial de la suma
    //se definen los 17 tipos de generacion de energía;
    char gen1[] = "hidraulica",gen2[] = "turbbombeo",gen3[] = "nuclear",gen4[] = "carbon",gen5[] = "fuelgas",gen6[] = "motdiesel";
    char gen7[] = "turbinagas",gen8[] = "turbvapor",gen9[] = "ccombinado",gen10[] = "hidroeolica",gen11[] = "eolica",gen12[] = "solarfoto";
    char gen13[] = "solarterm",gen14[] = "otrasreno",gen15[] = "cogenerac",gen16[] = "norenov",gen17[] = "residrenov";
    //para cada tipo de energía se plantea un if
    if(strcmp(tipo,gen1) == 0)//cuando se detecta un tipo de energia
    {
        for(i=0; i<10; i++) //el bucle recorre los 10 meses
        {
            suma1 = suma1 + vect[i].hidraulica;//segun el tipo de energía seleccionada
        }
        x[0] = suma1/10.0;//la funcion devuelve el valor de la suma dividido entre 10, que es la media correspondiente a los 10 meses
        j=0;
    }
    if(strcmp(tipo,gen2) == 0)
    {
        for(i=0; i<10; i++)
        {
            suma1 = suma1 + vect[i].turbbombeo;
        }
        x[1] = suma1/10.0;
        j=1;
    }
    if(strcmp(tipo,gen3) == 0)
    {
        for(i=0; i<10; i++)
        {
            suma1 = suma1 + vect[i].nuclear;
        }
        x[2] = suma1/10.0;
        j=2;
    }
    if(strcmp(tipo,gen4) == 0)
    {
        for(i=0; i<10; i++)
        {
            suma1 = suma1 + vect[i].carbon;
        }
        x[3] = suma1/10.0;
        j=3;
    }
    if(strcmp(tipo,gen5) == 0)
    {
        for(i=0; i<10; i++)
        {
            suma1 = suma1 + vect[i].fuelgas;
        }
        x[4] = suma1/10.0;
        j=4;

    }
    if(strcmp(tipo,gen6) == 0)
    {
        for(i=0; i<10; i++)
        {
            suma1 = suma1 + vect[i].motdiesel;
        }
        x[5] = suma1/10.0;
        j=5;
    }
    if(strcmp(tipo,gen7) == 0)
    {
        for(i=0; i<10; i++)
        {
            suma1 = suma1 + vect[i].turbinagas;
        }
        x[6] = suma1/10.0;
        j=6;

    }
    if(strcmp(tipo,gen8) == 0)
    {
        for(i=0; i<10; i++)
        {
            suma1 = suma1 + vect[i].turbvapor;
        }
        x[7] = suma1/10.0;
        j=7;

    }
    if(strcmp(tipo,gen9) == 0)
    {
        for(i=0; i<10; i++)
        {
            suma1 = suma1 + vect[i].ccombinado;
        }
        x[8] = suma1/10.0;
        j=8;
    }
    if(strcmp(tipo,gen10) == 0)
    {
        for(i=0; i<10; i++)
        {
            suma1 = suma1 + vect[i].hidroeolica;
        }
        x[9] = suma1/10.0;
        j=9;
    }
    if(strcmp(tipo,gen11) == 0)
    {
        for(i=0; i<10; i++)
        {
            suma1 = suma1 + vect[i].eolica;
        }
        x[10] = suma1/10.0;
        j=10;
    }
    if(strcmp(tipo,gen12) == 0)
    {
        for(i=0; i<10; i++)
        {
            suma1 = suma1 + vect[i].solarfoto;
        }
        x[11] = suma1/10.0;
        j=11;
    }
    if(strcmp(tipo,gen13) == 0)
    {
        for(i=0; i<10; i++)
        {
            suma1 = suma1 + vect[i].solarterm;
        }
        x[12] = suma1/10.0;
        j=12;
    }
    if(strcmp(tipo,gen14) == 0)
    {
        for(i=0; i<10; i++)
        {
            suma1 = suma1 + vect[i].otrasreno;
        }
        x[13] = suma1/10.0;
        j=13;
    }
    if(strcmp(tipo,gen15) == 0)
    {
        for(i=0; i<10; i++)
        {
            suma1 = suma1 + vect[i].cogenerac;
        }
        x[14] = suma1/10.0;
        j=14;
    }
    if(strcmp(tipo,gen16) == 0)
    {
        for(i=0; i<10; i++)
        {
            suma1 = suma1 + vect[i].norenov;
        }
        x[15] = suma1/10.0;
        j=15;
    }
    if(strcmp(tipo,gen17) == 0)
    {
        for(i=0; i<10; i++)
        {
            suma1 = suma1 + vect[i].residrenov;
        }
        x[16] = suma1/10.0;
        j=16;
    }
    return x[j];
}

//funcion para mostrar media parcial
float mediaparcia(char tipo[],int mes1,int mes2,mes dat[10])//la funcion recibe el tipo de energía y los limites temporales
{
    float suma = 0.0,y[17];
    int i,j,dif = (mes2+1) - (mes1);//diferencia entre los meses seleccionados
    char gen1[] = "hidraulica",gen2[] = "turbbombeo",gen3[] = "nuclear",gen4[] = "carbon",gen5[] = "fuelgas";
    char gen6[] = "motdiesel",gen7[] = "turbinagas",gen8[] = "turbvapor",gen9[] = "ccombinado";
    char gen10[] = "hidroeolica",gen11[] = "eolica",gen12[] = "solarfoto",gen13[] = "solarterm",gen14[] = "otrasreno",gen15[] = "cogenerac",gen16[] = "norenov",gen17[] = "residrenov";
    if(strcmp(tipo,gen1) == 0)//detectado el tipo de energía
    {
        for(i=mes1; i<=mes2; i++) //solo se recorren los datos en el lapso temporal definido
        {
            suma = suma + dat[i].hidraulica;//se suman los datos
        }
        j=0;
        y[0]= suma/dif;//la funcion devuelve la media
    }
    if(strcmp(tipo,gen2) == 0)
    {
        for(i=mes1; i<=mes2; i++)
        {
            suma = suma + dat[i].turbbombeo;
        }
        j=1;
        y[1]= suma/dif;
    }
    if(strcmp(tipo,gen3) == 0)
    {
        for(i=mes1; i<=mes2; i++)
        {
            suma = suma + dat[i].nuclear;
        }
        j=2;
        y[2]= suma/dif;
    }
    if(strcmp(tipo,gen4) == 0)
    {
        for(i=mes1; i<=mes2; i++)
        {
            suma = suma + dat[i].carbon;
        }
        j=3;
        y[3]= suma/dif;
    }
    if(strcmp(tipo,gen5) == 0)
    {
        for(i=mes1; i<=mes2; i++)
        {
            suma = suma + dat[i].fuelgas;
        }
        j=4;
        y[4]= suma/dif;
    }
    if(strcmp(tipo,gen6) == 0)
    {
        for(i=mes1; i<=mes2; i++)
        {
            suma = suma + dat[i].motdiesel;
        }
        j=5;
        y[5]= suma/dif;
    }
    if(strcmp(tipo,gen7) == 0)
    {
        for(i=mes1; i<=mes2; i++)
        {
            suma = suma + dat[i].turbinagas;
        }
        j=6;
        y[6]= suma/dif;
    }
    if(strcmp(tipo,gen8) == 0)
    {
        for(i=mes1; i<=mes2; i++)
        {
            suma = suma + dat[i].turbvapor;
        }
        j=7;
        y[7]= suma/dif;
    }
    if(strcmp(tipo,gen9) == 0)
    {
        for(i=mes1; i<=mes2; i++)
        {
            suma = suma + dat[i].ccombinado;
        }
        j=8;
        y[8]= suma/dif;
    }
    if(strcmp(tipo,gen10) == 0)
    {
        for(i=mes1; i<=mes2; i++)
        {
            suma = suma + dat[i].hidroeolica;
        }
        j=9;
        y[9]= suma/dif;
    }
    if(strcmp(tipo,gen11) == 0)
    {
        for(i=mes1; i<=mes2; i++)
        {
            suma = suma + dat[i].eolica;
        }
        j=10;
        y[10]= suma/dif;
    }
    if(strcmp(tipo,gen12) == 0)
    {
        for(i=mes1; i<=mes2; i++)
        {
            suma = suma + dat[i].solarfoto;
        }
        j=11;
        y[11]= suma/dif;
    }
    if(strcmp(tipo,gen13) == 0)
    {
        for(i=mes1; i<=mes2; i++)
        {
            suma = suma + dat[i].solarterm;
        }
        j=12;
        y[12]= suma/dif;
    }
    if(strcmp(tipo,gen14) == 0)
    {
        for(i=mes1; i<=mes2; i++)
        {
            suma = suma + dat[i].otrasreno;
        }
        j=13;
        y[13]= suma/dif;
    }
    if(strcmp(tipo,gen15) == 0)
    {
        for(i=mes1; i<=mes2; i++)
        {
            suma = suma + dat[i].cogenerac;
        }
        j=14;
        y[14]= suma/dif;
    }
    if(strcmp(tipo,gen16) == 0)
    {
        for(i=mes1; i<=mes2; i++)
        {
            suma = suma + dat[i].norenov;
        }
        j=15;
        y[15]= suma/dif;
    }
    if(strcmp(tipo,gen17) == 0)
    {
        for(i=mes1; i<=mes2; i++)
        {
            suma = suma + dat[i].residrenov;
        }
        j=16;
        y[16]= suma/dif;
    }

    return y[j];
}

//funcion para pedir al usuario nuevos datos
void registrarnew(int dimension)
{
    int i;
    mes nuevainfo[1000];//vector que almacena nuevos datos
    for(i=0; i<dimension; i++)
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
    for(i=0; i<dimension; i++)
    {
        fprintf(salida,"%d/%d  %f  %f  %f  %f  %f  %f  %f  %f  %f  %f  %f  %f  %f  %f  %f  %f  %f  %f\n",intro[i].date.month,intro[i].date.year,intro[i].hidraulica,intro[i].turbbombeo,intro[i].nuclear,intro[i].carbon,intro[i].fuelgas,intro[i].motdiesel,intro[i].turbinagas,intro[i].turbvapor,intro[i].ccombinado,intro[i].hidroeolica,intro[i].eolica,intro[i].solarfoto,intro[i].solarterm,intro[i].otrasreno,intro[i].cogenerac,intro[i].norenov,intro[i].residrenov,intro[i].genertotal);
    }
}
// Imprime por pantalla los valores de la energia seleccionados para los dos años, al igual que el valor máximo, mínimo y medio
void imprime_energia(int x,energia fuente)
{
    limpia_consola();
    int i;


    float val[24]= {fuente[x-1].ene21,fuente[x-1].feb21,fuente[x-1].mar21,fuente[x-1].abr21,fuente[x-1].may21,fuente[x-1].jun21,fuente[x-1].jul21,fuente[x-1].ago21,fuente[x-1].sep21,fuente[x-1].oct21,fuente[x-1].nov21,fuente[x-1].dic21,fuente[x-1].ene22,fuente[x-1].feb22,fuente[x-1].mar22,fuente[x-1].abr22,fuente[x-1].may22,fuente[x-1].jun22,fuente[x-1].jul22,fuente[x-1].ago22,fuente[x-1].sep22,fuente[x-1].oct22,fuente[x-1].nov22,fuente[x-1].dic22};

    if(x==1)
    {
        printf("Hidraulica: ");
    }
    if(x==2)
    {
        printf("Turbbombeo: ");
    }
    if(x==3)
    {
        printf("Nuclear: ");
    }
    if(x==4)
    {
        printf("Carbon: ");
    }
    if(x==5)
    {
        printf("Motdiesel: ");
    }
    if(x==6)
    {
        printf("Turbinagas:");
    }
    if(x==7)
    {
        printf("Turbvapor: ");
    }
    if(x==8)
    {
        printf("Ccombinado: ");
    }
    if(x==9)
    {
        printf("Hidroeolica:");
    }
    if(x==10)
    {
        printf("Eolica: ");
    }
    if(x==11)
    {
        printf("Solarfoto: ");
    }
    if(x==12)
    {
        printf("Solarterm: ");
    }
    if(x==13)
    {
        printf("Otrasreno: ");
    }
    if(x==14)
    {
        printf("Cogenerac: ");
    }
    if(x==15)
    {
        printf("Norenov: ");
    }
    if(x==16)
    {
        printf("Residrenov: ");
    }

   // printf("%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf\n\n",fuente[x-1].ene21,fuente[x-1].feb21,fuente[x-1].mar21,fuente[x-1].abr21,fuente[x-1].may21,fuente[x-1].jun21,fuente[x-1].jul21,fuente[x-1].ago21,fuente[x-1].sep21,fuente[x-1].oct21,fuente[x-1].nov21,fuente[x-1].dic21,fuente[x-1].ene22,fuente[x-1].feb22,fuente[x-1].mar22,fuente[x-1].abr22,fuente[x-1].may22,fuente[x-1].jun22,fuente[x-1].jul22,fuente[x-1].ago22,fuente[x-1].sep22,fuente[x-1].oct22,fuente[x-1].nov22,fuente[x-1].dic22);

      for(i=0;i<24;i++)
   {
       printf("%f\t",val[i]);
   }

    printf("El valor maximo son %f\n",maximo2(val));
    printf("El valor minimo son %f\n",minimo2(val));
    printf("El valor medio son %f\n\n",mediaglo2(val));


}

//funcion que calcula el valor maximo de una fuente de energia para todos los meses dados
float maximo2(float fila[])
{
    int i;
    float max;

    max=fila[0];
    for(i=1; i<24; i++)
    {
        if(max<fila[i])
        {
            max=fila[i];
        }
    }


    return max;
}

//funcion que calcula el valor minimo de una fuente de energia para todos los meses dados

float minimo2(float fila[])
{
    int i;
    float min;

    min=fila[0];
    for(i=1; i<24; i++)
    {

        if(min>fila[i])
        {
            min=fila[i];
        }
    }

    return min;
}

float mediaglo2(float fila[])
{
    int i;
    float med;

    for(i=0; i<24; i++)
    {
        med=med+fila[i];

    }
    med=med/24;




    return med;
}
