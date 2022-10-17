/* Funciones matemticas para nuesro codigo */

#include "math.h"

int dobleint(int a){
    if(a> MAX_INT){
        return -1;
    }
    return a*2;
}
double dobleDouble(double a){
    if(a> MAX_DOUBLE ){
        return -1;
    }
    return a*2;
}