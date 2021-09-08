#include "citerador.h"

cIterador::cIterador() {}

void cIterador::setNodo(cNodo *pNodo) {
    pActual = pNodo;
}


void cIterador::insertarAdelante(float d) {
    pActual->insertarAdelante(d);
}

float cIterador::eliminarAdelante() {
    return pActual->eliminarAdelante();
}


    // Sobrecarga de operadores
void cIterador::operator =(cIterador &otro) {
    pActual = otro.pActual;
}

bool cIterador::operator ==(cIterador &otro) {
    return (pActual == otro.pActual);
}

bool cIterador::operator !=(cIterador &otro) {
    return (pActual != otro.pActual);
}

    // Prefijos
void cIterador::operator ++() {
    pActual = pActual->pSig;
}

void cIterador::operator --() {
    pActual = pActual->pAnt;
}

float &cIterador::operator *() {
    return pActual->dato;
}

    //Postfijos
void cIterador::operator ++(int) {
    pActual = pActual->pSig;
}

void cIterador::operator --(int) {
    pActual = pActual->pAnt;
}
