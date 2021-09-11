#include <iostream>

#include "clista.h"
#include "citerador.h"
#include "creverseiterador.h"

using namespace std;

int main() {

    cLista lst;

    lst.insertarAdelante(6);
    lst.insertarAdelante(68);
    lst.insertarAdelante(29);
    lst.insertarAdelante(4);
    lst.insertarAdelante(23);
    lst.insertarAdelante(5);
    lst.insertarAdelante(42);
    lst.insertarAdelante(1);
    lst.insertarAdelante(11);

    lst.insertarAlFinal(4);
    lst.insertarAlFinal(6);
    lst.insertarAlFinal(1);
    lst.insertarAlFinal(11);
    lst.insertarAlFinal(2);
    lst.insertarAlFinal(34);
    lst.insertarAlFinal(68);
    lst.insertarAlFinal(7);
    lst.insertarAlFinal(7);
    lst.insertarAlFinal(6);
    lst.insertarAlFinal(12);


   cReverseIterador it;

   // Imprimir
   cout << "Imprimiendo lista..." << endl;

   for(it=lst.rBegin(); it!=lst.rEnd(); it++)
        cout << *it << ", ";

   cout << endl << endl;


   //Contar
   int cont = 0;
   float numAContar = 68;

   for(it=lst.rBegin(); it!=lst.rEnd(); it++)
       if(*it == numAContar)
           cont++;
   cout << "Hay " << cont << " " << numAContar << "'s en la lista";

   cout << endl << endl;


   // Eliminar
   float eliminarNum = 11;

   for(it=lst.rBegin(); it!=lst.rEnd(); it++)
       if(*it == eliminarNum) {
           it.eliminarAdelante();
       }
   cout << "Se eliminaron los " << eliminarNum << " de la lista" << endl;

   // Imprimir
   for(it=lst.rBegin(); it!=lst.rEnd(); it++)
        cout << *it << ", ";

   cout << endl << endl;


   // Duplicar
   float duplicarNum = 4;

   for(it=lst.rBegin(); it!=lst.rEnd(); it++)
       if(*it == duplicarNum) {
           it.insertarAdelante(duplicarNum);
       }

   cout << "Se duplicaron los " << duplicarNum << " de la lista" << endl;

   // Imprimir
   for(it=lst.rBegin(); it!=lst.rEnd(); it++)
        cout << *it << ", ";

   cout << endl << endl;


   // Sustituir
   float remplazarNum = 4;
   float remplazarCon = 13;

   for(it=lst.rBegin(); it!=lst.rEnd(); it++)
       if(*it == remplazarNum)
           *it = 13;
   cout << "Se remplazaron los " << remplazarNum << "' con " << remplazarCon << "' " << endl;

   // Imprimir
   for(it=lst.rBegin(); it!=lst.rEnd(); it++)
        cout << *it << ", ";

   cout << endl << endl;

    return 0;
}







