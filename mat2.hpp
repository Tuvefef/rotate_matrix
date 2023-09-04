#pragma once
#define MAT_ROTATE
#include <cmath>

void mat_f(){
    mat_[0][0] = cos(a_1);
    mat_[0][1] = -sin(a_1);
    mat_[1][0] = sin(a_1);
    mat_[1][1] = cos(a_1);
}