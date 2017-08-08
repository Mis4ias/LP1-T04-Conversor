#include "conversor.h"
#include <stdio.h>
float celsius2Fahrenheit (float temp_C) {
    // Continue a implementação
    temp_C=temp_C*1.8+32;
    return temp_C;
}

float fahrenheit2Celsius (float temp_F) {
    // Continue a implementação
    temp_F=(temp_F-32)/1.8;
    return temp_F;
}
