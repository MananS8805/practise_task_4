#include<iostream>
using namespace std;

class Time{
    int hours, minutes, seconds;

    public:

    void normalize()
    {
        if(seconds>=60)
        {
            minutes+=(seconds/60);
            seconds=seconds%60;
        }
        if(minutes>=60)
        {
            hours+=minutes/60;
            minutes=minutes%60;
        }
        if(hours>=12)
        {
            hours=hours%12;
            if (hours==0)
            {
                hours=12;
            }
        }
    }

    Time(int h,int m,int s): hours(h),minutes(m),seconds(s){
        normalize();
    }

    void display() const{
        cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
    }

    Time operator+(Time &t)
    {

        return Time(this->hours+t.hours,this->minutes+t.minutes,this->seconds+t.seconds);
    }

};

int main()
{
    Time t1(12,45,00);
    Time t2(5,67,55);

    t1.display();
    t2.display();
    Time t3=t1+t2;
    cout<<"added time is "<<endl;
    t3.display();
}