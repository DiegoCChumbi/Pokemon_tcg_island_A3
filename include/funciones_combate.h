#ifndef FUNCIONES_COMBATE_H
#define FUNCIONES_COMBATE_H

#include "bn_core.h"

#include "bn_regular_bg_ptr.h"
#include "bn_affine_bg_item.h"
#include "bn_regular_bg_items_playmat.h"
#include "bn_sprite_items_muestra_nombres.h"
#include "bn_vector.h"
#include "bn_sprite_text_generator.h"
#include "common_variable_8x16_sprite_font.h"
#include "common_info.h"
#include "bn_log.h"
#include "bn_random.h"
#include "bn_fixed_point.h"
#include "bn_math.h"

#include "funciones_cartas.h"
#include "carta.h"
#include "estatus.h"
#include "funciones_diccionario.h"
#include "funciones_mostrar_informacion.h"
#include "bn_sprite_items_flecha.h"
#include "bn_sprite_palette_items_p_flecha_alt.h"

#include "bn_sprite_items_boton_usar.h"
#include "bn_sprite_items_boton_listo.h"

void combate(bn::vector<carta,60>& deck_jugador,bn::vector<carta,60>& deck_oponente,bn::random& random);
void agrega_imagen(bn::vector<carta,60> tronco, bn::vector<bn::sprite_ptr,60>& imagenes,carta _carta,int a_quien);
void agregar_imagenes_m(bn::vector<bn::sprite_ptr,60>& imagenes,carta _carta,int indices[5],int a_quien);
void reorganiza_imagen(bn::vector<bn::sprite_ptr,60>& imagenes,int a ,int b);
void reorganiza_imagen_m(bn::vector<bn::sprite_ptr, 60>& imagenes, int indices[5],bn::vector<bn::fixed_point,19> pos);
carta retirar_carta(bn::vector<carta,60> &tronco,bn::vector<bn::sprite_ptr,60>& imagenes ,int indices_jugador[5],int indice_carta);
void cambio(bn::vector<carta,60>& tronco,int a, int b);
void barajear(bn::vector<carta,60>& tronco,int indices[5],int n,bn::random& random);
void agrega_carta(bn::vector<carta,60>& tronco,bn::vector<bn::sprite_ptr,60>& imagenes,class carta _carta,int indices[5],int a,bn::vector<bn::fixed_point,19> pos,int a_quien);
bool verificar_mano_inicial(bn::vector<carta,60> tronco, int indices[5]);

//Movimiento de cartas
void robar_carta(bn::vector<carta,60> tronco,bn::vector<bn::sprite_ptr,60>& imagenes,bn::sprite_ptr& _carta,int indices[5],int cant_cartas,int a_quien);
void mano_juego(bn::vector<carta,60>& tronco,bn::vector<bn::sprite_ptr,60>& imagenes,int indices[5],int indice,bn::vector<bn::fixed_point,19> pos,int a_quien,bn::vector<estatus,6>& estatus_j,bn::vector<estatus,6>& estatus_o);
void mano_descarte(bn::vector<carta,60>& tronco,bn::vector<bn::sprite_ptr,60>& imagenes,int indices[5],int indice,bn::vector<bn::fixed_point,19> pos,int a_quien);
void mano_deck(bn::vector<carta,60>& tronco,bn::vector<bn::sprite_ptr,60>& imagenes,int indices[5],int indice,bn::vector<bn::fixed_point,19> pos,int a_quien);
void mano_atachadas(bn::vector<carta,60>& tronco,bn::vector<bn::sprite_ptr,60>& imagenes,int indices[5],int indice,bn::vector<bn::fixed_point,19> pos,int a_quien);
void deck_premios(bn::vector<carta,60>& tronco,bn::vector<bn::sprite_ptr,60>& imagenes,int indices[5],bn::vector<bn::fixed_point,19> pos,int a_quien);
void deck_descarte(bn::vector<carta,60>& tronco,bn::vector<bn::sprite_ptr,60>& imagenes,int indices[5],bn::vector<bn::fixed_point,19> pos,int a_quien);
void premios_mano(bn::vector<carta,60>& tronco,bn::vector<bn::sprite_ptr,60>& imagenes,int indices[5],int indice,bn::vector<bn::fixed_point,19> pos,int a_quien);
void descarte_deck(bn::vector<carta,60>& tronco,bn::vector<bn::sprite_ptr,60>& imagenes,int indices[5],int indice,bn::vector<bn::fixed_point,19> pos,int a_quien);

//Interface
bn::fixed_point mas_cercano(bn::fixed_point actual, bn::vector<bn::fixed_point,19> posiciones,bn::vector<bn::sprite_ptr,60> mano_j,bn::vector<bn::sprite_ptr,60> mano_o,int direccion,int indices[5]);
BN_CONST bn::fixed distancia(bn::fixed_point p1, bn::fixed_point p2);
void turno_jugador(bn::vector<bn::fixed_point,19> pos,
                    bn::vector<bn::sprite_ptr,60>& imagenes_jugador, 
                    bn::sprite_ptr& carta_j,
                    bn::vector<bn::sprite_ptr,60>& imagenes_contrincante,
                    bn::vector<carta,60>& deck_j,
                    bn::vector<carta,60>& deck_o, 
                    int indices_j[5],int indices_o[5],int n_turno,
                    bn::vector<estatus,6>& estatus_j,bn::vector<estatus,6>& estatus_o);
// void turno_oponente(bn::vector<bn::fixed_point,19> pos,
//                     bn::vector<bn::sprite_ptr,60>& imagenes_jugador, 
//                     bn::sprite_ptr& carta_j,
//                     bn::vector<bn::sprite_ptr,60>& imagenes_contrincante,
//                     bn::vector<carta,60>& deck_j,
//                     bn::vector<carta,60>& deck_o, 
//                     int indices_j[5],int indices_o[5],int n_turno);
void juega_carta(bn::vector<carta,60>& deck_j,bn::vector<carta,60>& deck_o,
                 bn::vector<bn::sprite_ptr,60>& imagenes_j,bn::vector<bn::sprite_ptr,60>& imagenes_o,
                 carta* carta,int indice,bn::sprite_ptr &flecha,int indices_j[5],bn::vector<bn::fixed_point,19> pos,
                 bn::vector<estatus,6>& estatus_j,bn::vector<estatus,6>& estatus_o,bool& posible_energia,bool& posible_retirar);
void espera_a_presionado();
void espera_b_presionado();
void wait(int tiempo);
void seteo_inicial( bn::vector<bn::fixed_point,19> pos,
                    bn::vector<bn::sprite_ptr,60>& imagenes_jugador, 
                    bn::sprite_ptr& carta_j,
                    bn::vector<bn::sprite_ptr,60>& imagenes_contrincante,
                    bn::vector<carta,60>& deck_j,
                    bn::vector<carta,60>& deck_o, 
                    int indices_j[5],int indices_o[5],
                    bn::vector<estatus,6>& estatus_j,bn::vector<estatus,6>& estatus_o);
carta* seleccionar(bn::vector<carta,60>& deck_j,bn::vector<carta,60>& deck_o,bn::vector<bn::fixed_point,19> pos,bn::vector<bn::sprite_ptr,60>& imagenes_j,bn::vector<bn::sprite_ptr,60>& imagenes_o,int indices_j[5],bn::sprite_ptr flecha,int condicion);
//herramientas
void log_tronco(bn::vector<carta,60> tronco,int indices[5]);

#endif // FUNCIONES_COMBATE_H