#ifndef ESTATUS_H
#define ESTATUS_H

#include "carta.h"

class estatus
{
private:
    int ps;
    int condicion_especial;
    bool mas_1_turno;       //ha pasado mas de un turno?
public:
    estatus(int _ps,int _consicion_especial,bool _mas_1_turno);

    int obtener_ps() const;
    int obtener_condicion_especial() const;
    bool obtener_mas_1_turno() const;

    void establecer_ps(int danho);
    void establecer_condicion_especial(int nueva_condicion);
    void establecer_mas_1_turno(bool _bool);
};

#endif // ESTATUS_H