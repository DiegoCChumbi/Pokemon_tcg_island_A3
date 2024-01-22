#ifndef FUNCIONES_DICCIONARIO
#define FUNCIONES_DICCIONARIO

#include "bn_string.h"
#include "bn_vector.h"
#include "bn_log.h"
#include "bn_sprite_ptr.h"

#include "carta.h"

//imagenes full
#include "bn_sprite_items_mew_v.h"
#include "bn_sprite_items_mew_vmax.h"
#include "bn_sprite_items_genesect_v.h"
#include "bn_sprite_items_meloetta.h"
#include "bn_sprite_items_deoxys.h"
#include "bn_sprite_items_oricorio.h"
#include "bn_sprite_items_pase_de_combate_vip.h"
#include "bn_sprite_items_ordenes_de_jefes.h"
#include "bn_sprite_items_cinturon_eleccion.h"
#include "bn_sprite_items_cramobot.h"
#include "bn_sprite_items_brillo_de_camila.h"
#include "bn_sprite_items_cuerda_huida.h"
#include "bn_sprite_items_cristal_niebla.h"
#include "bn_sprite_items_viejo_cementerio.h"
#include "bn_sprite_items_caramelo_energetico.h"
#include "bn_sprite_items_cambio.h"
#include "bn_sprite_items_ultra_ball.h"

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

bool es_basico(carta _carta);

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

bn::sprite_ptr obtener_imagen(carta _carta,int x,int y);

bn::sprite_ptr obtener_imagen_normal(carta _carta,int x,int y);

bn::sprite_ptr obtener_imagen_v(carta _carta,int x,int y);

// bn::sprite_ptr obtener_imagen_vstar(carta _carta);

bn::sprite_ptr obtener_imagen_vmax(carta _carta,int x,int y);

bn::sprite_ptr obtener_imagen_no_pokemon(carta _carta,int x,int y);

#endif // FUNCIONES_DICCIONARIO