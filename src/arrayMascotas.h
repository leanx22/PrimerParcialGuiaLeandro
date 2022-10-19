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

/// @brief Funcion encargada del alta y validacion de mascotas
///
/// @param lista
/// @param listaTipos
/// @param listaColores
/// @param tam
/// @param tamTipos
/// @param tamColores
/// @param ids
/// @param cAltas contador de altas, sirve de flag para saber si hubo al menos una carga.
/// @return si la mascota se agrego ok 0, -1 en caso de error.
int nuevaMascota(eMascota lista[],eTipo listaTipos[],eColor listaColores[], int tam,
		int tamTipos,int tamColores,int*ids,int*cAltas);


/// @brief Funcion encargada de buscar un indice libre para cargar en el array
///
/// @param lista
/// @param tam
/// @return devuelve por retorno el indice libre.
int buscarLibre(eMascota lista[],int tam);

/// @brief  Funcion encargada de dar de baja a la mascota cambiando el valor isEmpty
///
/// @param lista
/// @param tam
/// @return 0 si ok -1 si hay error
int bajaMascota(eMascota lista[],int tam);

/// @brief  Esta funcion busca que indice corresponde al id que se le da.
///
/// @param lista
/// @param tam
/// @param idBusqueda
/// @return retorna el indice correspondiente al ID.
int buscarIndicexId(eMascota lista[],int tam,int idBusqueda);

/// @brief Funcion encargada de la modificacion de la mascota.
///
/// @param lista
/// @param listaTipos
/// @param tam
/// @param tamTipos
/// @return 0 si se modifico ok -1 en caso de error
int modificarMascota(eMascota lista[],eTipo listaTipos[],int tam,int tamTipos);

/// @brief Esta funcion ordena y luego lista a las mascotas por tipo, y en caso de ser iguales por nombre.
///
/// @param lista
/// @param listaTipos
/// @param tam
/// @param tamTipos
/// @param listaColores
/// @param tamColores
/// @return 0 si ok -1 si hay error
int listarMascotas(eMascota lista[],eTipo listaTipos[],int tam,int tamTipos,eColor listaColores[],int tamColores);




