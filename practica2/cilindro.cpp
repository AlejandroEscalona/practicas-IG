//
// Created by aescx on 18/10/20.
//

#include "cilindro.h"

Cilindro::Cilindro()
        {
    std::vector<_vertex3f> perfil1;
    int num=10;
    perfil1.push_back({1.0,-1.0,0}) ;
    perfil1.push_back({1.0,1.0,0}) ;

    rotacion.parametros(perfil1, num) ;



}