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


#endif // ESTRUCTURAS_H_INCLUDED
