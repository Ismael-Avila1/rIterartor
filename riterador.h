#ifndef RITERADOR_H
#define RITERADOR_H

#include "cnodo.h"

class rIterador
{
private:
    cNodo* pActual;

    void setNodo(cNodo* pNodo);

    friend class cLista;

public:
    rIterador();

    void insertarAdelante(float d);
    float eliminarAdelante();

    // Sobrecarga de oepradores
    void operator =(rIterador& otro);

    bool operator ==(rIterador& otro);
    bool operator !=(rIterador& otro);

    // Prefijos
    void operator ++();
    void operator --();

    float& operator *();

    // Postfijos
    void operator ++(int);
    void operator --(int);
};

#endif // RITERADOR_H
