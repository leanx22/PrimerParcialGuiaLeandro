/*
 * caracteristicas.c
 *
 *  Created on: 19 oct. 2022
 *      Author: leank
 */
#include "caracteristicas.h"
#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int imprimirTipos(eTipo lista[],int tam)
{
	int retorno = -1;

	if(lista != NULL && tam>0)
	{
		printf("**TIPOS DE MASCOTA**");
		printf("\n---------------");
		printf("\n| TIPO |  ID  |");
		printf("\n---------------");
		for(int i=0;i<tam;i++)
		{
			printf("\n|%-6s| %d |",lista[i].descripcion,lista[i].id);
			printf("\n---------------");
		}
		retorno = 0;
	}
	return retorno;
}

int imprimirColores(eColor lista[],int tam)
{
	int retorno = -1;

	if(lista != NULL && tam>0)
	{
		printf("\n**COLORES**");
		printf("\n---------------");
		printf("\n| TIPO |  ID  |");
		printf("\n---------------");
		for(int i=0;i<tam;i++)
		{
			printf("\n|%-6s| %d |",lista[i].nombreColor,lista[i].id);
			printf("\n---------------");
		}
		retorno = 0;
	}

	return retorno;
}





