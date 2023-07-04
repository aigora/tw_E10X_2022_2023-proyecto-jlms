#ifndef ESTRUCTURAS_H_INCLUDED
#define ESTRUCTURAS_H_INCLUDED
//definicion de estructuras
typedef struct
{
    int month;
    int year;
} fecha;

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
} mes;

typedef struct
{
    char enero[20];
    char febrero[20];
    char marzo[20];
    char abril[20];
    char mayo[20];
    char junio[20];
    char julio[20];
    char agosto[20];
    char septiembre[20];
    char octubre[20];
    char noviembre[20];
    char diciembre[20];
} year;


typedef struct
{
    char nombre[30];
    float ene21;
    float feb21;
    float mar21;
    float abr21;
    float may21;
    float jun21;
    float jul21;
    float ago21;
    float sep21;
    float oct21;
    float nov21;
    float dic21;
    float ene22;
    float feb22;
    float mar22;
    float abr22;
    float may22;
    float jun22;
    float jul22;
    float ago22;
    float sep22;
    float oct22;
    float nov22;
    float dic22;

}energia[17];

#endif // ESTRUCTURAS_H_INCLUDED
