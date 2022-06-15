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
    // insert code here...
    std::cout << "Hello, World!\n";
    std::vector<int> lCortes;
    lCortes = operA::listaCortes();
    
    for (int i = 0; i < 100; i++) {
        std::cout << lCortes[i] << " mm" << std::endl;
    }
    return 0;
}
