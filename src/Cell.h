#pragma once

class Cell {

protected:
    // whether or not a given cell contains a number
    bool isNum;
    
    // what is displayed to the player
    char value;

    // the number that a given cell is part of the solution for
    int groupNum1;

    // differentiates duplicate group numbers i.e (group 4, 1st 4), (group 3, fourth 3), etc.
    int groupNum2;

public:
    // Blank cell constructor
    Cell();

    // gets value
    char getValue() const;

    // sets value
    void setValue(char v);
};