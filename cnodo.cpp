#include "cnodo.h"

cNodo::cNodo() {
     pAnt = nullptr;
     pSig = nullptr;
}

cNodo::cNodo(float d) {
    dato = d;
    pAnt = nullptr;
    pSig = nullptr;
}

void cNodo::insertarAdelante(float d) {
    cNodo* newNode = new cNodo(d);

    newNode->pSig = this->pSig;
    newNode->pAnt = this;

    this->pSig = newNode;
    this->pSig->pSig->pAnt = newNode;
}

float cNodo::eliminarAdelante() {
    float d;
    d = this->pSig->dato;

    this->pSig = this->pSig->pSig;
    delete this->pSig->pAnt;
    this->pSig->pAnt = this;

    return d;
}
