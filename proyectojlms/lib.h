#ifndef LIB_H_INCLUDED
#define LIB_H_INCLUDED
#include <stdio.h>
#include<string.h>
#include "estructuras.h"
//listado de funciones

void guardian_2(char command[], int fila);
int elige_un_mes(char mes[]);
void grafica(mes fecha[],int inicio,int fin);
int comparar_cadenas(char primera[],char segunda[]);
int enumerar_meses(char month[]);
int digitos_numero(float numero);
float valor_division(float datos[],int tamano);
void tabla(float datos[],int tamano);
float datos_a_vector(mes month,float *p);
float maximo(float vect[], int tamano, int *posicion);
float minimo(float vect[], int tamano, int *posicion);
void obtener_palabra(const char vect[], int posicion, char palabra[]);
void limpia_consola(void);
float mediaglo(char tipo[],mes vect[10]);

#endif // LIB_H_INCLUDED
