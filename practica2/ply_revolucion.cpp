//
// Created by aescx on 30/10/20.
//

#include "ply_revolucion.h"

_ply_revolucion::_ply_revolucion()
{
    _objeto_ply  ply1;
    _vertex3f aux;

    ply1.parametros("lampara");
    perfil = ply1.vertices;

    parametros(perfil,20,_figura::PLY,1);

}