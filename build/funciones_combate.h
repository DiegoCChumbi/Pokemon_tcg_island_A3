#ifndef FUNCIONES_COMBATE_H
#define FUNCIONES_COMBATE_H

#include "bn_core.h"

#include "bn_regular_bg_ptr.h"
#include "bn_affine_bg_item.h"
#include "bn_regular_bg_items_fondo_de_juego.h"
#include "bn_vector.h"
#include "bn_sprite_text_generator.h"
#include "common_variable_8x16_sprite_font.h"
#include "common_info.h"
#include "bn_log.h"
#include "bn_random.h"

#include "funciones_cartas.h"
#include "carta.h"

void combate(bn::vector<carta,60>& deck_jugador,bn::vector<carta,60>& deck_oponente,bn::random random);
void agrega_imagen(bn::vector<carta,60> tronco, bn::vector<bn::sprite_ptr,60>& imagenes,carta _carta);
void reorganiza_imagen(bn::vector<bn::sprite_ptr,60>& imagenes,int a ,int b);
carta retirar_carta(bn::vector<carta,60> &tronco,bn::vector<bn::sprite_ptr,60>& imagenes ,int indices_jugador[4],int indice_carta);
void cambio(bn::vector<carta,60>& tronco,int a, int b);
void barajear(bn::vector<carta,60>& tronco,int indices[4],int n,bn::random random);
void agrega_carta(bn::vector<carta,60>& tronco,bn::vector<bn::sprite_ptr,60>& imagenes,class carta _carta,int indices[4],int a);

//Movimiento de cartas
void robar_carta(bn::vector<carta,60> tronco,bn::vector<bn::sprite_ptr,60>& imagenes,bn::sprite_ptr& carta,int indices[4],int cant_cartas);
void mano_juego(bn::vector<carta,60>& tronco,bn::vector<bn::sprite_ptr,60>& imagenes,int indices[4],int indice);
void mano_descarte(bn::vector<carta,60>& tronco,bn::vector<bn::sprite_ptr,60>& imagenes,int indices[4],int indice);
void mano_deck(bn::vector<carta,60>& tronco,bn::vector<bn::sprite_ptr,60>& imagenes,int indices[4],int indice);
void deck_premios(bn::vector<carta,60>& tronco,bn::vector<bn::sprite_ptr,60>& imagenes,int indices[4]);
void deck_descarte(bn::vector<carta,60>& tronco,bn::vector<bn::sprite_ptr,60>& imagenes,int indices[4]);
void premios_mano(bn::vector<carta,60>& tronco,bn::vector<bn::sprite_ptr,60>& imagenes,int indices[4],int indice);
void descarte_deck(bn::vector<carta,60>& tronco,bn::vector<bn::sprite_ptr,60>& imagenes,int indices[4],int indice);

//herramientas
void log_tronco(bn::vector<carta,60> tronco,int indices[4]);

#endif // FUNCIONES_COMBATE_H