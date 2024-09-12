#include<iostream>
#include<cmath>
using namespace std;
class complex{
    double real;
    double imaginary;

    public:
    complex(double r,double i): real(r),imaginary(i){}

    complex operator*(complex &c)
    {
        double nreal=(this->real) * c.real - (this->imaginary)*c.imaginary;
        double nimaginary=(this->imaginary) * c.real + (this->real)*c.imaginary;
        return complex(nreal,nimaginary);
    }
    complex operator/(complex &c)
    {
        double nreal=((this->real)*c.real + (this->imaginary)*c.imaginary)/(pow(c.real,2)+ pow(c.imaginary,2));
        double nimaginary=((this->imaginary)*c.real - (this->real)*c.imaginary)/(pow(c.real,2)+ pow(c.imaginary,2));
        return complex(nreal,nimaginary);
    }

    void display()
    {
        cout<<real<<"+"<<imaginary<<"i"<<endl;
    }
    
};

int main()
{
    complex c1(5,3);
    complex c2(5,3);

    complex c3=c1*c2;
    cout<<"Multiplication result"<<endl;
    c3.display();

    complex c4=c1/c2;
    cout<<"division  result"<<endl;
    c4.display();

}