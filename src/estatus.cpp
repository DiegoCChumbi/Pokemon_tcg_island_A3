#include "estatus.h"
//constructor
estatus::estatus(int _ps):ps(_ps),condicion_especial(NINGUNO),mas_1_turno(false),energias_atachadas(),energias_atachadas_sprites(){

}

//Consultar valores
int estatus::obtener_ps() const{
    return ps;
}

int estatus::obtener_condicion_especial() const{
    return condicion_especial;
}

bool estatus::obtener_mas_1_turno() const{
    return mas_1_turno;
}

//Establecer valores
void estatus::establecer_ps(int danho){
    ps = ps - danho;
}
void estatus::establecer_condicion_especial(int nueva_condicion){
    condicion_especial = nueva_condicion;
}

void estatus::establecer_mas_1_turno(bool _bool){
    mas_1_turno = _bool;
}

//Agregar sprites al vector
void estatus::agrega_mini_energia(int tipo,bn::fixed_point posicion){
    int n = energias_atachadas.size();
    energias_atachadas.push_back(tipo);
    dibuja_mini_energia(tipo,posicion.x()-7 + n*4,posicion.y()+10,energias_atachadas_sprites);
}

//Reorganiza los sprites
void estatus::reorganiza_imagen(bn::fixed_point posicion){
    int n = 0;
    for(bn::sprite_ptr temp : energias_atachadas_sprites){
        temp.set_y(posicion.y()+10);
        temp.set_x(posicion.x()-7 +n*4);
        n++;
    }
}

void estatus::eliminar_energia(int tipo,bn::fixed_point posicion){
    bn::vector<bn::sprite_ptr,10>::iterator ite_2 = energias_atachadas_sprites.begin();
    for(bn::vector<int,10>::iterator ite = energias_atachadas.begin(); ite != energias_atachadas.end() ; ++ite){
        if((*ite) == tipo){
            energias_atachadas.erase(ite);
            energias_atachadas_sprites.erase(ite_2);
            break;
        }
        ++(ite_2);
    }
    reorganiza_imagen(posicion);
}