#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "jugador.h"

struct JugadorEst{
    char nombreJ[30];
    int edad;
    int numCam;
};
void setEdad(JugadorP jug, int e){
    jug->edad=e;
}
void setNombreJ(JugadorP jug, char n[30]){
    strcpy(jug->nombreJ,n);
}
int getNumCamiseta(JugadorP jug){
    return jug->numCam;
}

void mostrarJugador(JugadorP jug){
    printf("\nEl nombre del jugador es: %s\n",jug->nombreJ);
    printf("La edad del jugador es: %d\n",jug->edad);
    printf("El numero de la camiseta es: %d\n",jug->numCam);
}
JugadorP cargarJugadorPP(char n[30], int e, int nC){
    JugadorP jug = malloc(sizeof(struct JugadorEst));

    strcpy(jug->nombreJ,n);
    jug->edad=e;
    jug->numCam=nC;

    return jug;
}
JugadorP cargarJugadorPT(){
    JugadorP jug = malloc(sizeof(struct JugadorEst));

    printf("\nIngrese el nombre del jugador\n");
    fflush(stdin);
    gets(jug->nombreJ);

    printf("\nIngrese la edad del jugador\n");
    scanf("%d",&(jug->edad));

    printf("\nIngrese el numero de camiseta del jugador\n");
    scanf("%d",&(jug->numCam));

    return jug;
}
