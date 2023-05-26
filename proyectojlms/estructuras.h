#ifndef ESTRUCTURAS_H_INCLUDED
#define ESTRUCTURAS_H_INCLUDED
//definicion de estructuras
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
}year;

#endif // ESTRUCTURAS_H_INCLUDED
