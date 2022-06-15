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
        std::cout << "Ingresar cortes en mm (para terminar solo presione doble enter): " << std::endl;
        std::getline(std::cin, finalizador);//aca capturo los valores en formato string para luego pasarlos a int
        //el condicional valida que la variable finalizador tenga valores dentro para poder convertir los valores a enteros.
        if (finalizador.length() != 0) {
            v = std::stoi(finalizador);
            if (v > (longitudTubo - corteSierra)) {
                std::cout << "El valor ingresado superara el maximo permitido por longitud del tubo + corte de la sierra" << std::endl;
            }
            else{
                lCortes[i]=std::stoi(finalizador);
                i++;
            }
            
        }
    
    } while (finalizador.length() != 0);//el validar de condicional se asugara que solo en el aso que la variable finalizador este vacia termine el bucle.
    return lCortes; // retornamos los valores de cortes para el main.
}
    
void operA::imprimirVector(std::vector<int> &listaI){

    for (int i = 0; i < listaI.size(); i++) {
        if (listaI[i] > 0) {
            std::cout << listaI[i] << " mm" << std::endl;
        }
        
    }
}
