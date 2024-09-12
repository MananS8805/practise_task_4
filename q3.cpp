#include<iostream>
#include<cmath>
using namespace std;
class Points{

    private:
    double angle;
    double radius;
    public:

    Points(double a,double b): angle(a),radius(b){
        cout<<"Constructor called and initialized with parameter values"<<endl;
    }

    Points(const Points& p)
    {
        angle=p.angle;
        radius=p.radius;
        cout<<"copy constructor called"<<endl;
    }

    void convert(double &x,double &y)
    {
        x=radius*cos(angle);
        y=radius*sin(angle);
    }

    void displaypolar()
    {
        cout<<"polar coordinates are ("<<radius<<","<<angle<<" radians)"<<endl;
    }

    void display_xy()
    {
        double x,y;
        convert(x,y);
        cout<<"XY coordinates are ("<<x<<", "<<y<<")"<<endl;
    }
};


int main()
{
    Points* p1=new Points(M_PI,5);
    Points* p2=new Points(*p1);

    p1->displaypolar();
    p1->display_xy();

    cout<<"Now for p2"<<endl;
    p2->displaypolar();
    p2->display_xy();



}