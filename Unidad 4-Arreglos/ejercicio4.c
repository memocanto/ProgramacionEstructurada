/*
Autor: Guillermo Canto
Entradas: Ninguna
Salidas: Ninguna
Procedimiento general: Llena un vector de tama?o 100 con valores aleatorios del 1 al 100 (calificaciones)
Calcula los promedios de cada alumno si cada 5 calificaciones en el vector antes mencionado corresponde 
a un alumno diferente y los almacena en un vector de promedios.
*/


#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 101

int numeroAleatorio();
void asignarValores(int arreglo[N]);
void calcularPromedios(int calificaciones[N], int promedios[N]);
void imprimirResultados(int arreglo[N]);

//main

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int calificaciones[100]; 
	int promedios[20];
	asignarValores(calificaciones);
	calcularPromedios(calificaciones, promedios);
	imprimirResultados(promedios);
	return 0;
}

//funciones

int numeroAleatorio(){
	int n = rand()%100;
	return n;
}

void asignarValores(int arreglo[N]){
	for (int i=0; i<100; i++){
		arreglo[i]= numeroAleatorio();
	}
}

void calcularPromedios(int calificaciones[N], int promedios[N]){
	for(int i = 0; i < 20; i++){
		for(int j = 0; j < 100; ++j){
			if (j%20 != 0){
				promedios[i] += calificaciones[j];
			}
			else{
				break;
			}
		}
		promedios[i]= promedios[i]/5;
	}
}

void imprimirResultados(int arreglo[N]){
	for(int i = 0; i < 20; i++){
		printf("Promedio %i : %i\n",i+1,arreglo[i]);
	}
}

/**
 * QA: Luis Gerardo Leon Ortega
 *
 * NO FUNCIONA
 *
 * return: Process finished with exit code 0
 */

