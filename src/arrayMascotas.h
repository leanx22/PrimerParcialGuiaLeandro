/*
 * arrayMascotas.h
 *
 *  Created on: 19 oct. 2022
 *      Author: leank
 */
#include "caracteristicas.h"
#ifndef ARRAYMASCOTAS_H_
#define ARRAYMASCOTAS_H_

typedef struct{
	int id;
	char nombre[20];
	int idTipo;
	int idColor;
	int edad;
	char vacunado;
	int isEmpty;

}eMascota;

#endif /* ARRAYMASCOTAS_H_ */

//Funcion encargada de inicializar el array estableciendo isEmpty en verdadero.
int inicializarMascotas(eMascota lista[], int tam);

int nuevaMascota(eMascota lista[],eTipo listaTipos[],eColor listaColores[], int tam,
		int tamTipos,int tamColores,int*ids,int*cAltas);

//Funcion encargada de buscar un indice libre para cargar en el array.
int buscarLibre(eMascota lista[],int tam);

//Funcion encargada de dar de baja a la mascota
int bajaMascota(eMascota lista[],int tam);

int buscarIndicexId(eMascota lista[],int tam,int idBusqueda);

int modificarMascota(eMascota lista[],eTipo listaTipos[],int tam,int tamTipos);

int listarMascotas(eMascota lista[],eTipo listaTipos[],int tam,int tamTipos,eColor listaColores[],int tamColores);

int obtenerTipo(eTipo listaTipos[],int tamTipos,char*descripcion,int id);

int obtenerColor(eColor listaColores[],int tamColores, char*descripcion,int id);
