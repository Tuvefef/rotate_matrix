#include <iostream>
#include <cstdlib>

float pi = 3.1415927;
float a_0;
float a_1;
float mat_[2][2];
int VAR = 2;

#include "mat2.h"

int main(){
    std::cout << "matriz de rotacion" << std::endl;
    std::cout << "angulo: " << std::endl;
    std::cin >> a_0;
    a_1 = a_0 * pi / 180;
    mat_f();
    std::cout << "matriz de rotacion" << std::endl;
    for(int i_1 = 0; i_1 < VAR; i_1++){
        for(int i_2 = 0; i_2 < VAR; i_2++){
            std::cout << mat_[i_1][i_2] << std::endl;
        }
        std::cout << std::endl;
    }
}
