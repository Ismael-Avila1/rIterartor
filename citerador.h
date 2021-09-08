#ifndef CITERADOR_H
#define CITERADOR_H

#include "cnodo.h"

class cIterador
{
private:
    cNodo* pActual;

    void setNodo(cNodo* pNodo);

    friend class cLista;

public:
    cIterador();

    void insertarAdelante(float d);
    float eliminarAdelante();

    // Sobrecarga de operadores
    void operator = (cIterador& otro);

    bool operator ==(cIterador& otro);
    bool operator !=(cIterador& otro);

    // Prefijos
    void operator ++();
    void operator --();

    float& operator *();

    //Postfijos
    void operator ++(int);
    void operator --(int);
};

#endif // CITERADOR_H
