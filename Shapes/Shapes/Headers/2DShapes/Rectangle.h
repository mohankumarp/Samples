#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape {
private:
    int length;
    int width;

public:
    Rectangle(int length = 1, int width = 1, const string & color = "green");

    int     getLength() const;
    void    setLength(int length);

    int     getWidth() const;
    void    setWidth(int width);

    double  getArea() const;
};

#endif