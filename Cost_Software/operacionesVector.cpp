//
//  operacionesVector.cpp
//  Cost_Software
//
//  Created by Kemmer Alexander Torres Gomez on 14/06/22.
//

#include "operacionesVector.hpp"
#include <iostream>
#include <vector>

std::vector<int> operA::listaCortes(){
    std::cout <<"Hola a todos"<<std::endl;
    std::vector<int> lCortes(100);
    int i = 0;
    std::string finalizador = "";
    do {
        std::cout << "Ingresar cortes en mm (para terminar solo presione enter): " << std::endl;
        std::getline(std::cin, finalizador);
        if (finalizador.length() != 0) {
            lCortes[i]=std::stoi(finalizador);
            i++;
        }
    
    } while (finalizador.length() != 0);
    return lCortes;
}
