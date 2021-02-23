//
// Created by hodor on 23/02/2021.
//

#include "function.h"

int maxi(int a, int b, int c) {
    int nagyobb=a;
    if(nagyobb<b) nagyobb=b;
    if(nagyobb<c) nagyobb=c;
    return nagyobb;
}
