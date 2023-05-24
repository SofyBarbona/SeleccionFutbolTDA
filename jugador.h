#ifndef JUGADOR_H_INCLUDED
#define JUGADOR_H_INCLUDED
//Axiomas
//Nombre
//Edad
//Numero de camiseta
struct JugadorEst;
typedef struct JugadorEst* JugadorP;

//PRE:
//POS:
JugadorP cargarJugadorPT();
//PRE:
//POS:
JugadorP cargarJugadorPP(char n[30], int e, int nC);
//PRE:
//POS:
void mostrarJugador(JugadorP jug);
//PRE
//POS
int getNumCamiseta(JugadorP jug);
//PRE
//POS
void setNombreJ(JugadorP jug, char n[30]);
//PRE
//POS
void setEdad(JugadorP jug, int e);

#endif // JUGADOR_H_INCLUDED
