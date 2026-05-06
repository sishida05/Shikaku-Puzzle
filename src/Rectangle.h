#pragma once

class Rectangle {

protected:
    // starting row
    int startRow;
    
    // starting column
    int startCol;
    
    // height of rectangle
    int height;
    
    // width of rectangle
    int width;

public:
    // rectangle constructor
    Rectangle(int r, int c, int w, int h);

    // get the area of the rectangle
    int area() const;

};