#ifndef ESTATUS_H
#define ESTATUS_H

#include "bn_vector.h"
#include "bn_sprite_ptr.h"

#include "carta.h"
#include "enumeraciones.h"
#include "funciones_mini_energias.h"

class estatus
{
private:
    int ps;
    int condicion_especial;
    bool mas_1_turno;       //ha pasado mas de un turno?
    bn::vector<int,10> energias_atachadas;
    bn::vector<bn::sprite_ptr,10> energias_atachadas_sprites;
public:
    estatus(int _ps);

    int obtener_ps() const;
    int obtener_condicion_especial() const;
    bool obtener_mas_1_turno() const;

    void establecer_ps(int danho);
    void establecer_condicion_especial(int nueva_condicion);
    void establecer_mas_1_turno(bool _bool);
    void agrega_mini_energia(int tipo,bn::fixed_point posicion);
    void reorganiza_imagen(bn::fixed_point posicion);
    void eliminar_energia(int tipo,bn::fixed_point posicion);
};

#endif // ESTATUS_H