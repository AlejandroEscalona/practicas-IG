//
// Created by aescx on 25/10/20.
//

#include "esfera.h"
using namespace std;

_esfera::_esfera()
{
    _vertex3f aux;
    for(float angulo=M_PI-0.3;angulo>0.15;angulo-=M_PI/10){
        aux.z=0.0;
        aux.x=(1)*((float) sin(angulo))*((float)sin(1.5));
        aux.y=(1)*((float) cos(angulo));
        perfil.push_back(aux);
    }

    parametros(perfil,20,_figura::ESFERA,1);

}