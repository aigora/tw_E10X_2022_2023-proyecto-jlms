#ifndef LIB_H_INCLUDED
#define LIB_H_INCLUDED
#include <stdio.h>
#include<string.h>
#include "estructuras.h"
//listado de funciones

void limpia_consola(void);
void elige_un_mes(char meses[],int ano,energia fuente);
int enumerar_meses(char month[]);
int digitos_numero(float numero);
float valor_division(float datos[],int tamano);
void grafica(float datos[],int tamano);
void datos_a_vector(mes month,float *p);
void obtener_palabra(const char vect[], int posicion, char palabra[]);
float mediaglo(char tipo[],mes vect[10]);
float mediaparcia(char tipo[],int mes1,int mes2,mes datos[10]);
void crearfichero(mes intro[],int dimension);
void registrarnew(int dimension);
float maximo2(float fila[]);
float minimo2(float fila[]);
float mediaglo2(float fila[]);
void imprime_energia(int x,energia fuente);

#endif // LIB_H_INCLUDED
