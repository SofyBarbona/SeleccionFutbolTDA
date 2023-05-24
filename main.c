#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "jugador.h"
#include "seleccion.h"


int main()
{
    SeleccionP seleccion1 = cargarSeleccionPT();

    agregarJugador(seleccion1);
    agregarJugador(seleccion1);
    agregarJugador(seleccion1);

    mostrarSeleccion(seleccion1);

    eliminarJugador(seleccion1);
    modificarJugador(seleccion1);

    mostrarSeleccion(seleccion1);

    return 0;
}
