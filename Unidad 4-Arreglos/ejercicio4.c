/*
Autor: Guillermo Canto
Entradas: Ninguna
Salidas: Los 20 promedios de las calificaciones generadas.
Procedimiento general: Llena un vector de tama?o 100 con valores aleatorios del 1 al 100 (calificaciones)
Calcula los promedios de cada alumno si cada 5 calificaciones en el vector antes mencionado corresponde 
a un alumno diferente y los almacena en un vector de promedios.
*/


#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int numeroAleatorio();
void asignarValores(int arreglo[100]);
void calcularPromedios(int calificaciones[100], int promedios[20]);
void imprimirResultados(int arreglo[20]);
int main(int argc, char *argv[]) {
	srand(time(NULL));
	int calificaciones[100]; 
	int promedios[20];
	asignarValores(calificaciones);
	calcularPromedios(calificaciones, promedios);
	imprimirResultados(promedios);
	return 0;
}


int numeroAleatorio(){
	int n = rand()%101;
	return n;
}
void asignarValores(int arreglo[100]){
	for (int i=0; i<100; i++){
		arreglo[i]= numeroAleatorio();
	}
}
void calcularPromedios(int calificaciones[100], int promedios[20]){
	int contador = 1;
	for(int i = 0; i < 20; i++){
		for(int j = 0; j < 100; j++){
			if (contador == 20){
				promedios[i] += calificaciones[j]; 
			}
			else{
				contador = 1;
			}
		}
		promedios[i]= promedios[i]/5;
	}
}

void imprimirResultados(int arreglo[20]){
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

