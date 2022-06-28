//
//  operacionesVector.cpp
//  Cost_Software
//
//  Created by Kemmer Alexander Torres Gomez on 14/06/22.
//

#include "operacionesVector.hpp"
#include <iostream>
#include <vector>

bool operA::lengthVal(int corteVal, int largoTubo, int anchoSierra){
    bool resultVal = true;
    int restaCorte = largoTubo - anchoSierra;
    if (corteVal <= restaCorte){
        resultVal = true;
    }else{
        resultVal = false;
    }
    return resultVal;
}

/* Operacion principal */
std::vector<int> operA::listaCortes(int longitudTubo, int corteSierra){
    std::vector<int> lCortes(100);
    int val1;
    int i = 0;
    int a = 1;
    bool corte;
    bool val;
    do{
        std::cout << "Ingrese un valor en mm (para terminar de ingresar datos use el valor 0): " << std::endl;
        std::cin >> val1;
        corte = operA::lengthVal(val1, longitudTubo, corteSierra);
        if (val1 != 0){
            if (corte){
                std::cout << "Cuantos cortes desea ingresar: " << std::endl;
                std::cin >> a;
                if (a>1){
                    for (int j = 0; j < a; ++j) {
                        lCortes[i] = val1;
                        i++;
                        val = true;
                    }
                }
                else{
                    lCortes[i] = val1;
                    i++;
                    val = true;
                }

            }else{
                std::cout << "La longitud del corte supera el maximo permitido, ingrese un valor de nuevo" << std::endl;
                val = true;
            }

        }
        else{
            val = false;
        }

    }while(val);
    return lCortes; // retornamos los valores de cortes para el main.
}
    
void operA::imprimirVector(std::vector<int> &vector){

    for (int i = 0; i < vector.size(); i++) {
        if (vector[i] > 0) {
            std::cout << vector[i] << " mm" << std::endl;
        }
        
    }
}
