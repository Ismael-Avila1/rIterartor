#include "creverseiterador.h"

cReverseIterador::cReverseIterador() {}

void cReverseIterador::setNodo(cNodo *pNodo) {
    pActual = pNodo;
}


void cReverseIterador::insertarAdelante(float d) {
    pActual->insertarAdelante(d);
}

float cReverseIterador::eliminarAdelante() {
    return pActual->eliminarAdelante();
}


    // Sobrecarga de operadores
void cReverseIterador::operator =(cReverseIterador &otro) {
    pActual = otro.pActual;
}

bool cReverseIterador::operator ==(cReverseIterador &otro) {
    return (pActual == otro.pActual);
}

bool cReverseIterador::operator !=(cReverseIterador &otro) {
    return (pActual != otro.pActual);
}

    // Prefijos
void cReverseIterador::operator ++() {
    pActual = pActual->pAnt;
}

void cReverseIterador::operator --() {
    pActual = pActual->pSig;
}

float &cReverseIterador::operator *() {
    return pActual->dato;
}

    // Postfijos
void cReverseIterador::operator ++(int) {
    pActual = pActual->pAnt;
}

void cReverseIterador::operator --(int) {
    pActual = pActual->pSig;
}
