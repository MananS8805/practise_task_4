#include<iostream>
using namespace std;

class farehnite{
    double temperature;
    public:

    farehnite(double celsius)
    {
        this->temperature=(celsius*9/5)+32;
    }

    void display()
    {
        cout<<"Temperature in farehhnite is "<<temperature<<"°F"<<endl;
    }
};

int main()
{
    double tempINcelsius=27;
    farehnite t1=tempINcelsius;
    t1.display();
}