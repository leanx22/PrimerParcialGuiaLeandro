/*
 ============================================================================
 Name        : PrimerParticalLabo.c
 Author      : Guia Leandro
 Version     :
 Copyright   :
 Description : Primer parcial de laboratorio
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "arrayMascotas.h"
#include "caracteristicas.h"
#include "utn.h"

#define TAM 300
#define CANT_TIPOS 5
#define CANT_COLORES 5

int main(void)
{
	setbuf(stdout,NULL);

	int idMascotas = 100;
	int altas = 0;

	int continuar = 1;
	int opcion;

	eMascota listaMascotas[TAM];
	inicializarMascotas(listaMascotas,TAM);

	eTipo listaTipos[CANT_TIPOS] =
	{{1000,"Ave"},{1001,"Perro"},{1002,"Roedor"},{1003,"Gato"},{1004,"Pez"}};

	eColor listaColores[CANT_COLORES] =
	{{5000,"Negro"},{5001,"Blanco"},{5002,"Rojo"},{5003,"Gris"},{5004,"Azul"}};

	do{
		system("CLS");
		printf("**MENU PRINCIPAL*"
				"\n1)Alta mascota."
				"\n2)Modificar mascota."
				"\n3)Baja de mascota."
				"\n4)Listar mascotas."
				"\n5)Listar tipos."
				"\n6)Listar colores."
				"\n7)Listar servicios."
				"\n8)Alta trabajo."
				"\n9)Listar trabajos."
				"\n10)Salir.");

		//imprimirTipos(listaTipos,CANT_TIPOS);
		//imprimirColores(listaColores,CANT_COLORES);

		utn_pedirInt(&opcion,">Ingrese una opcion: ","\n[!]Error, no es una opcion valida.",1,10,99);

		switch(opcion)
		{
		case 1:
			if(nuevaMascota(listaMascotas,listaTipos,listaColores,TAM,CANT_TIPOS,CANT_COLORES,&idMascotas,&altas)==0)
			{
				printf("\n[>]Mascota agregada de manera correcta!\n");
				system("PAUSE");
			}else
			{
				printf("\n[!]Ocurrio un error al intentar agregar a la mascota!\n");
				system("PAUSE");
			}
			break;
		case 2:
			if(altas>0 && modificarMascota(listaMascotas,listaTipos,TAM,CANT_TIPOS)==0)
			{
				printf("\nMascota actualizada correctamente!\n");
				system("PAUSE");
			}
			break;
		case 3:
			if(altas>0 && bajaMascota(listaMascotas,TAM)==0)
			{
				printf("\nEliminado OK!\n");
				system("PAUSE");
			}else
			{
				printf("\nNo se pudo encontrar el id ingresado! o no hay mascotas cargadas!\n");
				system("PAUSE");
			}
			break;
		case 4:
			if(altas>0 && listarMascotas(listaMascotas,listaTipos,TAM,CANT_TIPOS)==0)
			{
				printf("\n");
				system("PAUSE");
			}else
			{
				printf("\nNo se puede imprimir!.");
				system("PAUSE");
			}
			break;
		case 5:
			imprimirTipos(listaTipos,CANT_TIPOS);
			printf("\n");
			system("PAUSE");
			break;
		case 6:
			imprimirColores(listaColores,CANT_COLORES);
			printf("\n");
			system("PAUSE");
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 10:
			continuar = 0;
			break;
		}

	}while(continuar == 1);

}
