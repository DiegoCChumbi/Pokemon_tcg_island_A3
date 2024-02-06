#include "estatus.h"

estatus::estatus(int _ps,int _condicion_especial,bool _mas_1_turno):ps(_ps),condicion_especial(_condicion_especial),mas_1_turno(_mas_1_turno){

}

int estatus::obtener_ps() const{
    return ps;
}

int estatus::obtener_condicion_especial() const{
    return condicion_especial;
}

bool estatus::obtener_mas_1_turno() const{
    return mas_1_turno;
}

void estatus::establecer_ps(int danho){
    ps = ps - danho;
}
void estatus::establecer_condicion_especial(int nueva_condicion){
    condicion_especial = nueva_condicion;
}

void estatus::establecer_mas_1_turno(bool _bool){
    mas_1_turno = _bool;
}