#include "riterador.h"

rIterador::rIterador() {}

void rIterador::setNodo(cNodo *pNodo) {
    pActual = pNodo;
}


void rIterador::insertarAdelante(float d) {
    pActual->insertarAdelante(d);
}

float rIterador::eliminarAdelante() {
    return pActual->eliminarAdelante();
}


    // Sobrecarga de operadores
void rIterador::operator =(rIterador &otro) {
    pActual = otro.pActual;
}

bool rIterador::operator ==(rIterador &otro) {
    return (pActual == otro.pActual);
}

bool rIterador::operator !=(rIterador &otro) {
    return (pActual != otro.pActual);
}

    // Prefijos
void rIterador::operator ++() {
    pActual = pActual->pAnt;
}

void rIterador::operator --() {
    pActual = pActual->pSig;
}

float &rIterador::operator *() {
    return pActual->dato;
}

    // Postfijos
void rIterador::operator ++(int) {
    pActual = pActual->pAnt;
}

void rIterador::operator --(int) {
    pActual = pActual->pSig;
}
