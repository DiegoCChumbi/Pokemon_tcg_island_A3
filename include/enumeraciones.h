#ifndef ENUMERACIONES_H
#define ENUMERACIONES_H

enum Tipo1 {
    ESPALDA,
    NORMAL_C,
    NORMAL_C_H,
    V,
    V_H,
    VSTAR,
    VSTAR_H,
    VMAX,
    VMAX_H,
    NO_POKEMON,
    ENERGIAS_BASICA
};

enum Tipo2{
    NORMAL = 1,
    AGUA,
    DRAGON,
    ELECTRICO,
    FUEGO,
    LUCHA,
    METAL,
    PLANTA,
    PSIQUICO,
    SINIESTRO
};

enum Tipo2_no_pokemon{
    OBJETO = 1,
    PARTIDARIO,
    ESTADIO
};

enum Tronco_partes{
    CARTAS_JUEGO = 1,
    MANO,
    ATACHADAS,
    DECK,
    DESCARTE,
    PREMIOS,
    DECK_COMPLETO
};

enum A_quien{
    JUGADOR,
    OPONENTE
};

enum Direcciones{
    ARRIBA = 1,
    ABAJO,
    DERECHA,
    IZQUIERDA
};

enum Condicion{
    DE_MANO,
    DE_JUEGO_J,
    DE_JUEGO_O
};

#endif // ENUMERACIONES_H