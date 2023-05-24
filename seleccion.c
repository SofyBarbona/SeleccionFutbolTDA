#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "seleccion.h"
#include "jugador.h"

struct SeleccionEst{
    char nombreS[30];
    JugadorP jugadores[23];
};
void modificarJugador(SeleccionP sel){
    int auxMod;
    printf("\nIngrese el numero de camiseta del jugador a modificar\n");
    scanf("%d",&auxMod);

    int pos = buscarPosNC(sel->jugadores, auxMod);
    if(pos!=-2){
        char auxNombre[30];
        printf("\nIngrese el nuevo nombre\n");
        fflush(stdin);
        gets(auxNombre);
        setNombreJ(sel->jugadores[pos],auxNombre);

        int auxEdad;
        printf("Ingrese la nueva edad\n");
        scanf("%d",&auxEdad);
        setEdad(sel->jugadores[pos],auxEdad);
    }else{
        printf("\nNo hay jugadores con ese numero de camiseta\n");
    }
}
void eliminarJugador(SeleccionP sel){
    int auxElim;
    printf("\nIngrese el numero de camiseta del jugador a eliminar\n");
    scanf("%d",&auxElim);

    int pos = buscarPosNC(sel->jugadores, auxElim);

    if(pos!=-2){
        sel->jugadores[pos]=cargarJugadorPP("vacio",-1,-1);
    }else{
        printf("\nNo hay jugadores con ese numero de camiseta\n");
    }
}

int buscarPosNC(JugadorP js[23], int NC){
    int pos = -2;

    for(int i=0;i<23;i++){
        if(getNumCamiseta(js[i])== NC){
            pos=i;
            i=24;
        }
    }

    return pos;
}
void agregarJugador(SeleccionP sel){
    int pos = buscarPosNC(sel->jugadores, -1);

    if(pos!=-2){
        sel->jugadores[pos]=cargarJugadorPT();
    }else{
        printf("\nNo hay posiciones vacias\n");
    }

}

void mostrarSeleccion(SeleccionP sel){
    printf("\nEl nombre de la seleccion es: %s\n",sel->nombreS);
    for(int i=0;i<23;i++){
        if(getNumCamiseta(sel->jugadores[i])!=-1){
            mostrarJugador(sel->jugadores[i]);
        }
    }
}
SeleccionP cargarSeleccionPT(){
    SeleccionP sel = malloc(sizeof(struct SeleccionEst));

    printf("\nIngrese el nombre de la seleccion\n");
    fflush(stdin);
    gets(sel->nombreS);

    for(int i=0;i<23;i++){ //inicializo
        sel->jugadores[i]=cargarJugadorPP("vacio",-1,-1);
    }

    return sel;
}
