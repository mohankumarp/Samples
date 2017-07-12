#include <string>

using namespace std;

class Shape {
private:
    string  color;

public:
    Shape(const string & color = "black");
    string  getColor() const;
    void    setColor(const string & color);

    virtual double getArea() const = 0;
    virtual double getVolume() const = 0;
};