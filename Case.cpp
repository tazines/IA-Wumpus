//
// Created by Ines Tazi on 2023-01-28.
//

#include "Case.h"

Case::Case(int rec) {
    recompense = rec;
    visite = false;
}

bool operator< (const Case & a, const Case & b){
    return a.recompense< b.recompense;
}

bool operator> (const Case & a, const Case & b){
    return a.recompense> b.recompense;
}