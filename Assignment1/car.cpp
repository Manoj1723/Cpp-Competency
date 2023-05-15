#include <iostream>
#include <stdio.h>

using namespace std;

class Car
{
private: int ReleaseYear;
         char customer;
         int speed;

public: void initialize(int x, char y, int z)
        {
            ReleaseYear = x;
            customer = y;
            speed = z;
        }

        void getReleaseYear()
        {
            cout<<"ReleaseYear :"<<ReleaseYear<<"\n";           
        }

        void getcustomer()
        {
            cout<<"Car maker :"<<customer<<"\n";
        }

        void getspeed()
        {
            cout<<"Current speed :"<<speed<<"\n";
        }

        void accelerate()
        {
            speed = speed + 10;
        }

        void brake()
        {
            speed = speed - 10;
        }
};

int main()
{
    Car Audi;

    Audi.initialize(2022, 'AUDI', 220);

    for(int i=0; i<5; i++)
    {
        Audi.accelerate();
    }

    Audi.getspeed();

    for(int i=0; i<5; i++)
    {
        Audi.brake();
    }

    Audi.getspeed();

    return 0;
}