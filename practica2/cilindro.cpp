//
// Created by aescx on 18/10/20.
//

#include "cilindro.h"
using namespace std;


_cilindro::_cilindro(int radio, int altura)
{
    _rotacion rotacion;
    std::vector<_vertex3f> perfil1;
    int num=10;
    perfil1.push_back({radio,0,0}) ;
    perfil1.push_back({radio,altura,0}) ;

    parametros(perfil1, num,0);



}