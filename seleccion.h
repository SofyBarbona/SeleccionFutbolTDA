#ifndef SELECCION_H_INCLUDED
#define SELECCION_H_INCLUDED
//Axiomas
//Nombre
//Jugadores[23]
struct SeleccionEst;
typedef struct SeleccionEst* SeleccionP;

//PRE
//POS
SeleccionP cargarSeleccionPT();
//PRE
//POS
void mostrarSeleccion(SeleccionP sel);
//PRE
//POS
void agregarJugador(SeleccionP sel);
//PRE
//POS
void eliminarJugador(SeleccionP sel);
//PRE
//POS
void modificarJugador(SeleccionP sel);

#endif // SELECCION_H_INCLUDED
