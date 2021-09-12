#include "clista.h"

cLista::cLista() {
    inicio.pSig = &final;
    final.pAnt = &inicio;
}

cLista::~cLista() {
    cNodo* temp;

    while (inicio.pSig != &final) {
        temp = inicio.pSig;
        inicio.pSig = inicio.pSig->pSig;

        delete temp;
    }
    final.pAnt = &inicio;
}

void cLista::insertarAdelante(float d) {
    inicio.insertarAdelante(d);
}

void cLista::insertarAlFinal(float d) {
    final.pAnt->insertarAdelante(d);
}

float cLista::eliminarAdelante() {
    if(isEmpty())
        return -1;
    else
        return inicio.eliminarAdelante();
}

float cLista::eliminarAlFinal() {
    if(isEmpty())
        return -1;
    else
        return final.pAnt->pAnt->eliminarAdelante();
}

int cLista::size() {
    int contNodes = 0;
    cNodo* temp = inicio.pSig;

    while (temp != &final) {
        contNodes++;
        temp = temp->pSig;
    }
    return contNodes;
}

bool cLista::isEmpty() {
    return inicio.pSig == &final;
}

bool cLista::isFull() {
    return false;
}

void cLista::imprimir() {
    cNodo* temp = inicio.pSig;

    while(temp != &final) {
        std::cout << temp->dato << " -> ";
        temp = temp->pSig;
    }
    std::cout << "\b\b\b";
}

cIterador &cLista::begin() {
    m_itBegin.setNodo(inicio.pSig);

    return m_itBegin;
}

cIterador &cLista::end() {
    m_itEnd.setNodo(&final);

    return m_itEnd;
}

cReverseIterador &cLista::rBegin() {
    r_itBegin.setNodo(final.pAnt);

    return r_itBegin;
}

cReverseIterador &cLista::rEnd() {
    r_itEnd.setNodo(&inicio);

    return r_itEnd;
}

