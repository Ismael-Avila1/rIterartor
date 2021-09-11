#ifndef CNODO_H
#define CNODO_H

class cNodo {
private:
    float dato;
    cNodo* pAnt;
    cNodo* pSig;

    cNodo();
    cNodo(float);

    void insertarAdelante(float);
    float eliminarAdelante();

    friend class cLista;
    friend class cIterador;
    friend class cReverseIterador;
};

#endif // NODE_H
