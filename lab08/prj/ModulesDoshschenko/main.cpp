#include <iostream>
#include <cmath>

float s_calculation(int x, int y, int z){
    float result = sin(x) / abs((y*z)/(x+y)) + 3 * pow(y, 5);
    return result;
}
