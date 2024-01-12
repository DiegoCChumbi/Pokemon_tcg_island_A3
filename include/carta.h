#ifndef CARTA_H
#define CARTA_H

#include "bn_string.h"

class carta
{
private:
    bn::string<32> nombre;
    int tipo1;
    int tipo2;
    /*
    Para tipo1 y tipo2 consultar funciones_carta.cpp
    */
public:

    //constructor
    carta(bn::string<32> _nombre,int _tipo1,int _tipo2);

    // Funciones para consultar los valores privados
    bn::string<32> obtener_nombre() const;
    int obtener_tipo1() const;
    int obtener_tipo2() const;

    // Funciones para modificar los valores privados
    void establecer_nombre(const bn::string<32>& nuevo_nombre);
    void establecer_tipo1(int nuevo_tipo1);
    void establecer_tipo2(int nuevo_tipo2);
};

#endif // CARTA_H