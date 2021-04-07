/*
    Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>
 
class Shape {            // base class
    private:                   // private access modifier: could also be protected
        std::string name;   // every shape will have a name
    public:
        Shape(const std::string&);  // builds a shape with a name
        Shape();                    // empty shape
        Shape(const Shape &p){name=p.name;};        // copy constructor
        void printName() const ;      // prints the name
};
 
class CenteredShape : public Shape {  // inherits from Shape
    private:
        double x,y;  // the center of the shape
    public:
        CenteredShape(const std::string&, double, double);  // usual three constructors
        CenteredShape();
        CenteredShape(const CenteredShape &p):Shape(p){x=p.x;y=p.y;};
        void move(double, double);    // moves the shape, i.e. it modifies it center
};
 
class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
    private:
        int EdgesNumber;
    public:
        RegularPolygon(const std::string&, double, double, int);
        RegularPolygon();
        RegularPolygon(const RegularPolygon &p):CenteredShape(p){EdgesNumber=p.EdgesNumber;};
};
 
class Circle : public CenteredShape {  // a Circle is a shape with a center and a radius
    private:
        double Radius;
    public:
        Circle(const std::string&, double, double, double);
        Circle();
        Circle(const Circle&);
};
 
class Hexagon : public RegularPolygon {  // a Circle is a shape with a center and a radius
    protected:
        double Side;
        std::string Color;
    public:
        Hexagon(const std::string& n, double nx, double ny, double nside,std::string ncolor);
        Hexagon(const Hexagon &p):RegularPolygon(p) {Side = p.Side;Color=p.Color; };//copy constructor
        Hexagon();//empty construct
        void setSide(double ns);//setters
        void setColor(std::string nc);
        double getSide();//getters
        std::string getColor();
        double Perimeter();//methods
        double Area();
        ~Hexagon();//destructor
};
#endif
