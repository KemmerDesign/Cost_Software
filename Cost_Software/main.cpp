//
//  main.cpp
//  Cost_Software
//
//  Created by Kemmer Alexander Torres Gomez on 14/06/22.
//

#include <iostream>
#include "operacionesVector.hpp"
#include <vector>

int main(int argc, const char * argv[]) {
    //Espacio opara declarar las variables.
    std::vector<int> lCortes;
    int lTubo, eSierra;
    //Espacio para titulo y mensajes principales.
    std::cout << "Programa para cacular consumo de material";
    
    //inicianilazación de variables.
    std::cout << "Ingrese la longitud del tubo en mm: " << std::endl;
    std::cin >> lTubo;
    std::cout << "Ingrese el espesor de la sierra en mm: " << std::endl;
    std::cin >> eSierra;
    lCortes = operA::listaCortes(lTubo,eSierra);
    std::sort(lCortes.begin(),lCortes.end());
    operA::imprimirVector(lCortes);
    return 0;
}
