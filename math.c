/* Funciones matemticas para nuesro codigo */

#include "math.h"

int dobleint(int a){
    if(a> MAX_INT){
        return -1;
    }
    return a*2;
}