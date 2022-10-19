/*
 * caracteristicas.h
 *
 *  Created on: 19 oct. 2022
 *      Author: leank
 */

#ifndef CARACTERISTICAS_H_
#define CARACTERISTICAS_H_

typedef struct{
	int id;//comienza en 1000
	char descripcion[20];

}eTipo;

typedef struct{
	int id;//comienza en 5000
	char nombreColor[20];

}eColor;

#endif /* CARACTERISTICAS_H_ */


int imprimirTipos(eTipo lista[],int tam);

int obtenerTipo(eTipo listaTipos[],int tamTipos,char*descripcion,int id);

int imprimirColores(eColor lista[],int tam);

int obtenerColor(eColor listaColores[],int tamColores, char*descripcion,int id);
