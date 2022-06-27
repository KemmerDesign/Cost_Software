//
//  operacionesVector.hpp
//  Cost_Software
//
//  Created by Kemmer Alexander Torres Gomez on 14/06/22.
//

#ifndef operacionesVector_hpp
#define operacionesVector_hpp

#include <stdio.h>
#include <iostream>

#endif /* operacionesVector_hpp */

namespace operA{
    bool lengthVal(int corteVal, int largoTubo, int anchoSierra);
    //esta funcion crea la lista inicial de cortes para la tubería.
    std::vector<int> listaCortes(int longitudTubo, int corteSierra);
    //Imprimir vectores
    void imprimirVector(std::vector<int> &vector);
}
