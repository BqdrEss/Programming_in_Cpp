/*
    Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>
 
class Shape {            // base class
    protected:                   // private access modifier: could also be protected
        std::string name;   // every shape will have a name
    public:
        Shape(const std::string&);  // builds a shape with a name
        Shape(const Shape &p) {name=p.name;};//copy constructor
        Shape();                    // empty shape
        void setName(std::string n);
        std::string getName();
        void printName() const ;      // prints the name
};
 
class CenteredShape : public Shape {  // inherits from Shape
    protected:
        double x,y;  // the center of the shape
    public:
        //setters:
        void setX(double nx);
        void setY(double ny);
        //getters:
        double getX();
        double getY();
        CenteredShape(const std::string&, double, double);  // usual three constructors
        CenteredShape(const CenteredShape &p) {name = p.name; x=p.x; y=p.y;}//copy constructor
        CenteredShape();
        void move(double, double);    // moves the shape, i.e. it modifies it center
};
 
class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
    protected:
        int EdgesNumber;
    public:
        RegularPolygon(const std::string&, double, double, int);
        RegularPolygon(const RegularPolygon &p) {name = p.name; x=p.x; y=p.y; EdgesNumber = p.EdgesNumber; };//copy constructor
        RegularPolygon();
        void setEdgesNumber(int ne);
    int getEdgesNumber();
};
 
class Circle : public CenteredShape {  // a Circle is a shape with a center and a radius
    protected:
        double Radius;
    public:
        Circle(const std::string&, double, double, double);
        Circle(const Circle &p) {name = p.name; x=p.x; y=p.y;Radius = p.Radius; };//copy constructor
        Circle();
        void setRadius(double nr);
        double getRadius();
    double Perimeter();//methods
    double Area();
};
 
class Rectangle : public RegularPolygon {  // a Rectangle is a shape with a center and a radius
    protected:
        double Width;
        double Height;
    public:
        Rectangle(const std::string& n, double nx, double ny, double nwidth, double nheight);
        Rectangle(const Rectangle &p) {name = p.name; x=p.x; y=p.y; Width = p.Width ; Height = p.Height; };//copy constructor
        Rectangle();
        void setWidth(double w);
    void setHeight(double h);
    double getWidth();
    double getHeight();
        double Perimeter();//methods
        double Area();
};
 
class Square : public RegularPolygon {  // a Circle is a shape with a center and a radius
    protected:
        double Side;
    public:
        Square(const std::string& n, double nx, double ny, double nside);
     Square(const Square &p) {name = p.name; x=p.x; y=p.y; Side = p.Side; };//copy constructor
        Square();
        void setSide(double ns);
        double getSide();
        double Perimeter();//methods
        double Area();
};
#endif