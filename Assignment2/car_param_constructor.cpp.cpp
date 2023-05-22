#include <iostream>
#include <stdio.h>

using namespace std;

class Car
{
private: int ReleaseYear;
         char customer;
         int speed;

public: Car(int x, char y)
        {
            ReleaseYear = x;
            customer = y;
            speed = 0;
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
    Car Audi(2022, 'AUDI');

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
