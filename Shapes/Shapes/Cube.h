#include "Shape.h"

class Cube : public Shape
{
private:
    int side;

public:
    Cube(int side = 1, const string & color = "black");
    int     getSide() const;
    void    setSide(int side);

    double getVolume() const;
};