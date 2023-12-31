#ifndef FUNCIONES_DICCIONARIO
#define FUNCIONES_DICCIONARIO

#include "bn_string.h"
#include "bn_vector.h"
#include "bn_log.h"

#include "carta.h"

typedef struct carta_full{
    int stage;
    int ps;
    bool habilidad;
    bn::string<32> preevolucion;
    bn::vector<bn::vector<int,10>, 2> energias;
    bn::vector<bn::string<30>,20> texto;
    bn::string<32> arquetipo;
    int debilidad;
    int resistencia;
    int retirada;
}carta_full;

bool es_basico(carta carta);

carta_full* obtener_informacion_completa(carta _carta);

carta_full* diccionario_normal(carta _carta);

carta_full* diccionario_normal_habilidad(carta _carta);

carta_full* diccionario_v(carta _carta);

carta_full* diccionario_v_habilidad(carta _carta);

carta_full* diccionario_vstar(carta _carta);

carta_full* diccionario_vstar_habilidad(carta _carta);

carta_full* diccionario_vmax(carta _carta);

carta_full* diccionario_vmax_habilidad(carta _carta);

carta_full* diccionario_no_pokemon(carta _carta);

carta_full* diccionario_energias(carta _carta);

#endif // FUNCIONES_DICCIONARIO