//
// Created by aescx on 25/10/20.
//
#include "cilindrox.h"

_cilindrox::_cilindrox()
{
    _vertex3f aux;

    aux.x=-1.0; aux.y=-1.0; aux.z=0.0;
    perfil6.push_back(aux);
    aux.x=1.0; aux.y=-1.0; aux.z=0.0;
    perfil6.push_back(aux);

    parametros(perfil6,20,_figura::CILINDROX);
}