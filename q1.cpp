#include<iostream>
#include<math.h>
using namespace std;

class point{
    private:
    float x,y,z;
    public:
    point(float a, float b, float c)
    {
        this->x=a;
        this->y=b;
        this->z=c;
    }

    friend float Euclidian_distance(point *a, point *b);
};

float Euclidian_distance(point *a, point *b)
{
    float distance;
    distance=sqrt((pow((a->x-b->x),2)+pow((a->y-b->y),2)+pow((a->z-b->z),2)));
    return distance;
}
int main()
{
    point A(2.0,4.0,9.0);
    point B(5.0,8.9,8.7);
    float ed=Euclidian_distance(&A,&B);
    cout<<"Eucledian distance between points a and b is "<<ed<<endl;
    return 0;
}