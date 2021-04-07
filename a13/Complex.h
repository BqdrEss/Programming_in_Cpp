#include <fstream>
 
using namespace std;
 
class Complex {
private:
    double r;
    double im;
public:
    Complex();
    ~Complex();
    Complex(double, double);
    Complex(Complex& );
    void setR(double nr);
    void setIm(double ni);
    double getR();
    double getIm();
    void print();
    void conjugate();
    Complex sum(Complex complex);
    Complex dif(Complex complex);
    Complex prod(Complex complex);
    friend std::istream& operator >> (std::istream&, Complex&);
    friend std::ostream& operator << (std::ostream&, const Complex&);
    Complex operator + (const Complex&);
    Complex operator - (const Complex&);
    Complex operator * (const Complex&);
    void operator = (const Complex&);
};
