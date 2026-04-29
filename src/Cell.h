#pragma once

class Cell {

public:
    // the number within certain cells
    int value;
    
    // whether or not a given cell contains a number
    bool isNum;
    
    // what is displayed to the player
    char displayNum;

    // Blank cell constructor
    cell() {
        value = 0;
        isNum = false;
        displayNum = ' ';
    }

};