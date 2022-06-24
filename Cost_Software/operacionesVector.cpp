//
//  operacionesVector.cpp
//  Cost_Software
//
//  Created by Kemmer Alexander Torres Gomez on 14/06/22.
//

#include "operacionesVector.hpp"
#include <iostream>
#include <vector>

std::vector<int> operA::listaCortes(int longitudTubo, int corteSierra){
    std::vector<int> lCortes(100);
    int i = 0;
    int v = 0;
    std::string finalizador = "";
    
    do {
        std::cout << "predictivo" << std::endl;
    } while (true);
      
    return lCortes; // retornamos los valores de cortes para el main.
}
    
void operA::imprimirVector(std::vector<int> &listaI){

    for (int i = 0; i < listaI.size(); i++) {
        if (listaI[i] > 0) {
            std::cout << listaI[i] << " mm" << std::endl;
        }
        
    }
}
