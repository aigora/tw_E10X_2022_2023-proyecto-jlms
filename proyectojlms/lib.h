#ifndef LIB_H_INCLUDED
#define LIB_H_INCLUDED
#include <stdio.h>
#include<string.h>
#include "estructuras.h"
//listado de funciones

void guardian_2(char command[], int fila);
void grafica(mes fecha[],int inicio,int fin);
int comparar_cadenas(char primera[],char segunda[]);
int enumerar_meses(char month[]);
int digitos_numero(float numero);
float valor_division(float datos[],int tamano);
void tabla(float datos[],int tamano);


#endif // LIB_H_INCLUDED
