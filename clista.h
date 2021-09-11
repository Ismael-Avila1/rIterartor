#ifndef CLISTA_H
#define CLISTA_H

#include <iostream>
#include "cnodo.h"
#include "citerador.h"
#include "creverseiterador.h"

class cLista {
private:
    cNodo inicio;
    cNodo final;

    cIterador m_itBegin;
    cIterador m_itEnd;

    cReverseIterador r_itBegin;
    cReverseIterador r_itEnd;

public:
    cLista();
    ~cLista();

    void insertarAdelante(float d);
    void insertarAlFinal(float d);

    float eliminarAdelante();
    float eliminarAlFinal();

    int size();

    bool isEmpty();
    bool isFull();

    void imprimir();

    cIterador& begin();
    cIterador& end();

    cReverseIterador& rBegin();
    cReverseIterador& rEnd();
};

#endif // CLISTA_H
