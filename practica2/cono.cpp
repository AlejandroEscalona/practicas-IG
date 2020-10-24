//
// Created by aescx on 18/10/20.
//

#include "cono.h"

_cono::_cono(float tam, float al)
{
//vertices
    _rotacion rotacion;
    std::vector<_vertex3f> perfil1;
    int num=10;
    perfil1.push_back({1.0,0,0}) ;

    rotacion.parametros(perfil1, num,1) ;

}