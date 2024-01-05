#include "carta.h"

//Constructor
carta::carta(bn::string<32> _nombre,int _tipo1,int _tipo2):nombre(_nombre),tipo1(_tipo1),tipo2(_tipo2)
{

}

// Funciones para consultar los valores privados
bn::string<32> carta::obtener_nombre() const
{
    return nombre;
}

int carta::obtener_tipo1() const
{
    return tipo1;
}

int carta::obtener_tipo2() const
{
    return tipo2;
}

// Funciones para modificar los valores privados
void carta::establecer_nombre(const bn::string<32>& nuevo_nombre) {
    nombre = nuevo_nombre;
}

void carta::establecer_tipo1(int nuevo_tipo1) {
    tipo1 = nuevo_tipo1;
}

void carta::establecer_tipo2(int nuevo_tipo2) {
    tipo2 = nuevo_tipo2;
}