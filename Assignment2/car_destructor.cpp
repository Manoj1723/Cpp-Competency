#include <iostream>
#include <stdio.h>

using namespace std;

class Car
{
private: int ReleaseYear;
         char customer;
         int speed;

public: Car()
        {
            ReleaseYear = 2022;
            customer = 'AUDI';
            speed = 235;
            cout<<"Constructor is called!"<<endl;
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
        
        ~Car()
        {
        	cout<<"Destructor is called!"<<endl;
		}
        
};

int main()
{
    Car Audi;

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
