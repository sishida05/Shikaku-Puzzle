#include "Cell.h"
#include <iostream>
using namespace std;

Cell::Cell() {
        // value = 0;
        // isNum = false;
        // displayNum = ' ';
        this->value = ' ';
    }
char Cell::getValue() const { 
    // gets value
    return this->value; 
}
void Cell::setValue(char v) { 
    // sets value
    this->value = v; 
}